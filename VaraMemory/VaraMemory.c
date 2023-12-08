#include <stdio.h>
//变量的作用域和生命周期
//代码规范：全局变量定义必须以g(gloal)开头
//全局变量是定义在函数外部，作用域是程序（进程）退出（结束）才失效
int g_num = 10;

//静态变量是定义在函数外部，生命周期同全局变量。存在在全局区。
static int g_vara = 20;

int main()
{
    //只要变量定义在函数内部就是局部变量,作用域：离开函数就失效
    int localVrara = 5;
    //代码规范：在栈空间开辟的内存不得超过8M,如果超过8M，会发生栈溢出（stack overflow)

    //优先级队列
    /*时间和空间 ：
            时间体现的就是代码快，效率高。
            空间体现的是内存的大小*/

    int array[200];
    return 0;

}