原著：https://raytracing.github.io/books/RayTracingInOneWeekend.html

最终效果：

![image](/pictures/image.jpg)
    std::ofstream of("image.ppm");//输出cout信息的文件
    std::streambuf* fileBuf = of.rdbuf();// 获取文件out.txt流缓冲区指针
    std::cout.rdbuf(fileBuf);// 设置cout流缓冲区指针为out.txt的流缓冲区指针
