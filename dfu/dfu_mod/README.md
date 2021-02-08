## DFU 用户代码

在`log_init()` 后添加

```c
#if EN_DFU_SERVICE
	dfu_async_svci_init();
#endif
```

在 `service_init()` 中添加

```
#if EN_DFU_SERVICE
	mod_dfu_init();
#endif
```

[DFU模块使用方法](https://blog.csdn.net/duapple/article/details/113759033)。

