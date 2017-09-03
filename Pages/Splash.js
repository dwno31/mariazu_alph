var Context = require("Modules/Context");

Context.apiFetch("/device_login",{
	method:"POST",
	body:{
		id:Context.uuid,
		device:Context.device
	}
});


setTimeout(function(){
  router.push('home');
},750)
