// a easy func called by helloPrint.py
// 使用C开发的eBPF程序，后面需要被Python导入BBC库 使用的用户态程序调用

int hello(void *ctx)
{
	// BPF辅助函数(bpf_trace_printk) 用于输出一段字符串 不是输出到stdout 
	// 输出到内核文件/sys/kernel/debug/tracing/trace_pipe
	bpf_trace_printk("Hello World!!!");
	return 0;
}

