var Context = require("Modules/Context");
var Observable = require("FuseJS/Observable");
var ROOT_URL = "http://mariazu.co/"
var EventEmitter = require("FuseJS/EventEmitter");
var ParentUrl = Observable("");
ParentUrl.value = "http://mariazu.co/?isApp=1&uuid="+Context.uuid;
var OutlinkUrl = Observable("");
var ShopName = Observable("");
var productId = Observable("");
var WebViewLikeTrigger = Observable("true");
var WebViewLikeToggle = WebViewLikeTrigger.map(function(value){
  return value.length===4;
});
var InjectJs = Observable("$('body').prepend('<hr>Good Day To DIE!<hr>')");

function WebEvent(args){
  console.log("webEvent Clicked");

  args_split = args.url.split('/*/');
  OutlinkUrl = args_split[3];
  ShopName = args_split[2];
  productId = args_split[1];
  type = args_split[0];
  Context.apiFetch("/device_likestatus",{
    method:"POST",
    body:{
      uid:Context.uuid,
      type:'check',
      productId:productId
    }
  }).then(function(response){
    console.log(response);
    if(response === 1){
      console.log(response);
      like_status = "Assets/likeitem-touch.png";
    }else{
      console.log("false");
      like_status = "Assets/likeitem.png";
    }
    Context.productId = productId;
    Context.productStatus = like_status;
    console.log("global : "+Context.productStatus);
    // Context.productStatus = status;
    router.push("outlink",{OutlinkUrl:OutlinkUrl,ShopName:ShopName,productId:productId,like_status:like_status});

  });

};





function LikeItemToggle(){
  console.log("ON ToggleButton Clicked : " +WebViewLikeTrigger.value);
  InjectJs.value = "$('body').prepend('<hr>plz change...!<hr>')";
  ParentUrl = "javascript:hello";
  console.log(ParentUrl.value);
  console.log(InjectJs.value);

  if(WebViewLikeTrigger.value == "true"){
    WebViewLikeTrigger.value = "true";
  }else{
    WebViewLikeTrigger.value = "false";
  }
  Context.apiFetch("/device_likestatus",{
    method:"POST",
    body:{
        type:"toggle",
        productId:Context.productId,
        uid:Context.uuid
    }
  }).then(function(response){
    return response;
  });

};


module.exports = {
  WebEvent: WebEvent,
  productId:productId,
  LikeItemToggle:LikeItemToggle,
  WebViewLikeTrigger:WebViewLikeTrigger,
  WebViewLikeToggle:WebViewLikeToggle,
  ParentUrl:ParentUrl,
  InjectJs:InjectJs
}
