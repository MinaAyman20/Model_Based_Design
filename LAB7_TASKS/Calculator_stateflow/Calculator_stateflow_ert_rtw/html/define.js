function CodeDefine() { 
this.def = new Array();
this.def["rt_OneStep"] = {file: "ert_main_c.html",line:33,type:"fcn"};
this.def["main"] = {file: "ert_main_c.html",line:70,type:"fcn"};
this.def["Calculator_stateflow_U"] = {file: "Calculator_stateflow_c.html",line:20,type:"var"};
this.def["Calculator_stateflow_Y"] = {file: "Calculator_stateflow_c.html",line:23,type:"var"};
this.def["Calculator_stateflow.c:Calculator_stateflow_M_"] = {file: "Calculator_stateflow_c.html",line:26,type:"var"};
this.def["Calculator_stateflow_M"] = {file: "Calculator_stateflow_c.html",line:27,type:"var"};
this.def["mul_wide_u32"] = {file: "Calculator_stateflow_c.html",line:35,type:"fcn"};
this.def["mul_u32_sat"] = {file: "Calculator_stateflow_c.html",line:69,type:"fcn"};
this.def["Calculator_stateflow.c:Calculator_stateflow_add_d"] = {file: "Calculator_stateflow_c.html",line:85,type:"fcn"};
this.def["Calculator_stateflow.c:Calculator_stateflow_sub_k"] = {file: "Calculator_stateflow_c.html",line:105,type:"fcn"};
this.def["Calculator_stateflow.c:Calculator_stateflow_mult_k"] = {file: "Calculator_stateflow_c.html",line:125,type:"fcn"};
this.def["Calculator_stateflow.c:Calculator_stateflow_devide_o"] = {file: "Calculator_stateflow_c.html",line:138,type:"fcn"};
this.def["Calculator_stateflow_step"] = {file: "Calculator_stateflow_c.html",line:165,type:"fcn"};
this.def["Calculator_stateflow_initialize"] = {file: "Calculator_stateflow_c.html",line:214,type:"fcn"};
this.def["Calculator_stateflow_terminate"] = {file: "Calculator_stateflow_c.html",line:230,type:"fcn"};
this.def["ExtU_Calculator_stateflow_T"] = {file: "Calculator_stateflow_h.html",line:40,type:"type"};
this.def["ExtY_Calculator_stateflow_T"] = {file: "Calculator_stateflow_h.html",line:48,type:"type"};
this.def["RT_MODEL_Calculator_stateflow_T"] = {file: "Calculator_stateflow_types_h.html",line:22,type:"type"};
this.def["int8_T"] = {file: "rtwtypes_h.html",line:47,type:"type"};
this.def["uint8_T"] = {file: "rtwtypes_h.html",line:48,type:"type"};
this.def["int16_T"] = {file: "rtwtypes_h.html",line:49,type:"type"};
this.def["uint16_T"] = {file: "rtwtypes_h.html",line:50,type:"type"};
this.def["int32_T"] = {file: "rtwtypes_h.html",line:51,type:"type"};
this.def["uint32_T"] = {file: "rtwtypes_h.html",line:52,type:"type"};
this.def["real32_T"] = {file: "rtwtypes_h.html",line:53,type:"type"};
this.def["real64_T"] = {file: "rtwtypes_h.html",line:54,type:"type"};
this.def["real_T"] = {file: "rtwtypes_h.html",line:60,type:"type"};
this.def["time_T"] = {file: "rtwtypes_h.html",line:61,type:"type"};
this.def["boolean_T"] = {file: "rtwtypes_h.html",line:62,type:"type"};
this.def["int_T"] = {file: "rtwtypes_h.html",line:63,type:"type"};
this.def["uint_T"] = {file: "rtwtypes_h.html",line:64,type:"type"};
this.def["ulong_T"] = {file: "rtwtypes_h.html",line:65,type:"type"};
this.def["char_T"] = {file: "rtwtypes_h.html",line:66,type:"type"};
this.def["uchar_T"] = {file: "rtwtypes_h.html",line:67,type:"type"};
this.def["byte_T"] = {file: "rtwtypes_h.html",line:68,type:"type"};
this.def["creal32_T"] = {file: "rtwtypes_h.html",line:78,type:"type"};
this.def["creal64_T"] = {file: "rtwtypes_h.html",line:83,type:"type"};
this.def["creal_T"] = {file: "rtwtypes_h.html",line:88,type:"type"};
this.def["cint8_T"] = {file: "rtwtypes_h.html",line:95,type:"type"};
this.def["cuint8_T"] = {file: "rtwtypes_h.html",line:102,type:"type"};
this.def["cint16_T"] = {file: "rtwtypes_h.html",line:109,type:"type"};
this.def["cuint16_T"] = {file: "rtwtypes_h.html",line:116,type:"type"};
this.def["cint32_T"] = {file: "rtwtypes_h.html",line:123,type:"type"};
this.def["cuint32_T"] = {file: "rtwtypes_h.html",line:130,type:"type"};
this.def["pointer_T"] = {file: "rtwtypes_h.html",line:148,type:"type"};
}
CodeDefine.instance = new CodeDefine();
var testHarnessInfo = {OwnerFileName: "", HarnessOwner: "", HarnessName: "", IsTestHarness: "0"};
var relPathToBuildDir = "../ert_main.c";
var fileSep = "\\";
var isPC = true;
function Html2SrcLink() {
	this.html2SrcPath = new Array;
	this.html2Root = new Array;
	this.html2SrcPath["ert_main_c.html"] = "../ert_main.c";
	this.html2Root["ert_main_c.html"] = "ert_main_c.html";
	this.html2SrcPath["Calculator_stateflow_c.html"] = "../Calculator_stateflow.c";
	this.html2Root["Calculator_stateflow_c.html"] = "Calculator_stateflow_c.html";
	this.html2SrcPath["Calculator_stateflow_h.html"] = "../Calculator_stateflow.h";
	this.html2Root["Calculator_stateflow_h.html"] = "Calculator_stateflow_h.html";
	this.html2SrcPath["Calculator_stateflow_private_h.html"] = "../Calculator_stateflow_private.h";
	this.html2Root["Calculator_stateflow_private_h.html"] = "Calculator_stateflow_private_h.html";
	this.html2SrcPath["Calculator_stateflow_types_h.html"] = "../Calculator_stateflow_types.h";
	this.html2Root["Calculator_stateflow_types_h.html"] = "Calculator_stateflow_types_h.html";
	this.html2SrcPath["rtwtypes_h.html"] = "../rtwtypes.h";
	this.html2Root["rtwtypes_h.html"] = "rtwtypes_h.html";
	this.getLink2Src = function (htmlFileName) {
		 if (this.html2SrcPath[htmlFileName])
			 return this.html2SrcPath[htmlFileName];
		 else
			 return null;
	}
	this.getLinkFromRoot = function (htmlFileName) {
		 if (this.html2Root[htmlFileName])
			 return this.html2Root[htmlFileName];
		 else
			 return null;
	}
}
Html2SrcLink.instance = new Html2SrcLink();
var fileList = [
"ert_main_c.html","Calculator_stateflow_c.html","Calculator_stateflow_h.html","Calculator_stateflow_private_h.html","Calculator_stateflow_types_h.html","rtwtypes_h.html"];
