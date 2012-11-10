THWebService是一个轻量级的网络访问管理类，对NSURLConnection进行封装，提供了get、post网络请求以及提供了文件的断点下载的简单接口（同步、异步、block）。另外将网络请求中常用的HASH算法、HMAC等算法的封装，如果你开发的软件经常与网络访问，或许这些代码将会为你带来不少的便利。

注：代码采用ARC。

1.1版本
添加了THDispatchQueue，GCD实现的一个多线程并发控制的队列。
添加了THWebDataCache，非常简单的缓存组件。

1.0版本：

1.对get、post(文件上传)、文件下载的接口的封装；
2.支持同步、异步、block三种调用方式；
3.对常用HASH及HMac算法的封装（支持对Data和文件两种方式）。