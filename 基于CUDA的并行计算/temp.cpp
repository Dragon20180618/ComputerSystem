
#include "cuda_runtime.h" //【1】CUDA运行时头文件,包含了许多的runtime API
#include "device_launch_parameters.h"
#include <driver_types.h>     //【2】驱动类型的头文件,包含cudaDeviceProp【设备属性】
#include <cuda_runtime_api.h> //【3】cuda运行时API的头文件
#include "stdio.h"
#include <iostream>
int main()
{
    int dev = 0;
    cudaDeviceProp devProp;
    CHECK(cudaGetDeviceProperties(&devProp, dev));
    std::cout << "使用GPU device " << dev << ": " << devProp.name << std::endl;
    std::cout << "SM的数量：" << devProp.multiProcessorCount << std::endl;
    std::cout << "每个线程块的共享内存大小：" << devProp.sharedMemPerBlock / 1024.0 << " KB" << std::endl;
    std::cout << "每个线程块的最大线程数：" << devProp.maxThreadsPerBlock << std::endl;
    std::cout << "每个EM的最大线程数：" << devProp.maxThreadsPerMultiProcessor << std::endl;
    std::cout << "每个EM的最大线程束数：" << devProp.maxThreadsPerMultiProcessor / 32 << std::endl;

    return 0;
}