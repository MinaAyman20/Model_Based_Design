function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "Fact_Function"};
	this.sidHashMap["Fact_Function"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "Fact_Function:1"};
	this.sidHashMap["Fact_Function:1"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/In1"] = {sid: "Fact_Function:4"};
	this.sidHashMap["Fact_Function:4"] = {rtwname: "<Root>/In1"};
	this.rtwnameHashMap["<Root>/MATLAB Function"] = {sid: "Fact_Function:1"};
	this.sidHashMap["Fact_Function:1"] = {rtwname: "<Root>/MATLAB Function"};
	this.rtwnameHashMap["<Root>/Out1"] = {sid: "Fact_Function:5"};
	this.sidHashMap["Fact_Function:5"] = {rtwname: "<Root>/Out1"};
	this.rtwnameHashMap["<S1>:1"] = {sid: "Fact_Function:1:1"};
	this.sidHashMap["Fact_Function:1:1"] = {rtwname: "<S1>:1"};
	this.rtwnameHashMap["<S1>:1:3"] = {sid: "Fact_Function:1:1:3"};
	this.sidHashMap["Fact_Function:1:1:3"] = {rtwname: "<S1>:1:3"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
