# 1.导入BCC库
from bcc import BPF

# 加载使用C开发的BPF源码
fileLoad = BPF(src_file="printHello.c")

# 将BPF程序中的hello函数挂载到内核探针上，观测openat系统调用
fileLoad.attach_kprobe(event="do_sys_openat2", fn_name="hello")

# 读取内核调试文件
fileLoad.trace_print()
