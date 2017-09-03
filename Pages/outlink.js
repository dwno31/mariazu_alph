var Observable = require("FuseJS/Observable");
var InterApp = require("FuseJS/InterApp");
var Context = require("Modules/Context");
var Home = require("Pages/home");

var OutlinkUrl = this.Parameter.map(function(param) {
    return param.OutlinkUrl;
});

var ShopName = Observable("더미쇼핑");
ShopName = this.Parameter.map(function(param){
  return decodeURI(param.ShopName);
});

var productId = Observable("");
productId = this.Parameter.map(function(param) {
    return param.productId;
});
var uid = Context.uuid;

var LikeImage = Observable("Assets/likeitem.png");
LikeImage = this.Parameter.map(function(param){
  return param.like_status;
});

function goBack(){
  // router.push("home");
  console.log("goback clickded");
  router.goBack();

}

//타입을 넣고 결과 처리 후 status에 따라 like button 을 바꿔 주면 됨
//웹뷰에 반영은 javascript:로 url로 전달

function LikeitemToggle(){
  console.log("likeitem clicked;");
  Home.LikeItemToggle();
  console.log("server toggle complete");

  if(LikeImage.value==="Assets/likeitem.png"){
    console.log("off to on");
    LikeImage.value="Assets/likeitem-touch.png";
  }else {
    LikeImage.value="Assets/likeitem.png";
  };
}

function BrowserGo(){
  console.log("browsergo Clicked");
  console.log(OutlinkUrl.value);
  InterApp.launchUri(OutlinkUrl.value);
}

module.exports={
  OutlinkUrl:OutlinkUrl,
  ShopName:ShopName,
  LikeitemToggle:LikeitemToggle,
  LikeImage:LikeImage,
  goBack:goBack,
  BrowserGo:BrowserGo
}
