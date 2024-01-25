function RTW_rtwnameSIDMap() {
	this.rtwnameHashMap = new Array();
	this.sidHashMap = new Array();
	this.rtwnameHashMap["<Root>"] = {sid: "FactorialForLoop"};
	this.sidHashMap["FactorialForLoop"] = {rtwname: "<Root>"};
	this.rtwnameHashMap["<S1>"] = {sid: "FactorialForLoop:7"};
	this.sidHashMap["FactorialForLoop:7"] = {rtwname: "<S1>"};
	this.rtwnameHashMap["<Root>/Input"] = {sid: "FactorialForLoop:32"};
	this.sidHashMap["FactorialForLoop:32"] = {rtwname: "<Root>/Input"};
	this.rtwnameHashMap["<Root>/For Iterator Subsystem"] = {sid: "FactorialForLoop:7"};
	this.sidHashMap["FactorialForLoop:7"] = {rtwname: "<Root>/For Iterator Subsystem"};
	this.rtwnameHashMap["<Root>/Output"] = {sid: "FactorialForLoop:31"};
	this.sidHashMap["FactorialForLoop:31"] = {rtwname: "<Root>/Output"};
	this.rtwnameHashMap["<S1>/Input"] = {sid: "FactorialForLoop:15"};
	this.sidHashMap["FactorialForLoop:15"] = {rtwname: "<S1>/Input"};
	this.rtwnameHashMap["<S1>/For Iterator"] = {sid: "FactorialForLoop:9"};
	this.sidHashMap["FactorialForLoop:9"] = {rtwname: "<S1>/For Iterator"};
	this.rtwnameHashMap["<S1>/Product"] = {sid: "FactorialForLoop:12"};
	this.sidHashMap["FactorialForLoop:12"] = {rtwname: "<S1>/Product"};
	this.rtwnameHashMap["<S1>/Unit Delay"] = {sid: "FactorialForLoop:19"};
	this.sidHashMap["FactorialForLoop:19"] = {rtwname: "<S1>/Unit Delay"};
	this.rtwnameHashMap["<S1>/Output"] = {sid: "FactorialForLoop:29"};
	this.sidHashMap["FactorialForLoop:29"] = {rtwname: "<S1>/Output"};
	this.getSID = function(rtwname) { return this.rtwnameHashMap[rtwname];}
	this.getRtwname = function(sid) { return this.sidHashMap[sid];}
}
RTW_rtwnameSIDMap.instance = new RTW_rtwnameSIDMap();
