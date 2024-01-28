function TraceInfoFlag() {
    this.traceFlag = new Array();
    this.traceFlag["IncrementCounter.c:44c40"]=1;
}
top.TraceInfoFlag.instance = new TraceInfoFlag();
function TraceInfoLineFlag() {
    this.lineTraceFlag = new Array();
    this.lineTraceFlag["IncrementCounter.c:38"]=1;
    this.lineTraceFlag["IncrementCounter.c:44"]=1;
    this.lineTraceFlag["IncrementCounter.c:60"]=1;
    this.lineTraceFlag["IncrementCounter.h:38"]=1;
    this.lineTraceFlag["IncrementCounter.h:43"]=1;
    this.lineTraceFlag["IncrementCounter.h:48"]=1;
}
top.TraceInfoLineFlag.instance = new TraceInfoLineFlag();
