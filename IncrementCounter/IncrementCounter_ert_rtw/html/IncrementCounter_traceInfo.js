function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "IncrementCounter"};
	this.sidHashMap["IncrementCounter"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<Root>/Input"] = {sid: "IncrementCounter:10"};
	this.sidHashMap["IncrementCounter:10"] = {rtwname: "<Root>/Input"};
	this.rtwnameHashMap["<Root>/Add1"] = {sid: "IncrementCounter:8"};
	this.sidHashMap["IncrementCounter:8"] = {rtwname: "<Root>/Add1"};
	this.rtwnameHashMap["<Root>/Add2"] = {sid: "IncrementCounter:13"};
	this.sidHashMap["IncrementCounter:13"] = {rtwname: "<Root>/Add2"};
	this.rtwnameHashMap["<Root>/Constant"] = {sid: "IncrementCounter:17"};
	this.sidHashMap["IncrementCounter:17"] = {rtwname: "<Root>/Constant"};
	this.rtwnameHashMap["<Root>/Display"] = {sid: "IncrementCounter:16"};
	this.sidHashMap["IncrementCounter:16"] = {rtwname: "<Root>/Display"};
	this.rtwnameHashMap["<Root>/Unit Delay"] = {sid: "IncrementCounter:1"};
	this.sidHashMap["IncrementCounter:1"] = {rtwname: "<Root>/Unit Delay"};
	this.rtwnameHashMap["<Root>/Unit Delay1"] = {sid: "IncrementCounter:14"};
	this.sidHashMap["IncrementCounter:14"] = {rtwname: "<Root>/Unit Delay1"};
	this.rtwnameHashMap["<Root>/Output"] = {sid: "IncrementCounter:11"};
	this.sidHashMap["IncrementCounter:11"] = {rtwname: "<Root>/Output"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
