/*
 * using namespace std; 尽量不要写这句话，开始就养成好习惯。
 * 全部使用std::这种形式，防止函数、接口等冲突.
 */

#include<iostream>//包含头文件

int main() {//主函数入口

    printf("This is C style. \n");
    std::cout<<"This is C++ style.\n"<<std::endl; //调用STD里面的 cout 输出 helloworld
    return 0; // 返回值是0。main函数是必须返回一个int值的，这是C++标准的要求，操作系统通过判断这个值是否为0来判断这个程序是正常运行完毕还是崩溃退出。
};