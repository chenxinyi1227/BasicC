#include <stdio.h>
#define BUFFER__SIZE 40
int main()
{
#if 0
    int array[BUFFER__SIZE] = {0};
    //数组的越界访问
    //判断的索引的有效性:索引必须是合理的范围RANGE[0 - BuFFER_SIZE - 1]
    printf("array[-1]:%d\n",array[-1]);
    printf("array[10]:%d\n",array[10]);
#endif
#if 0
    //静态数组：优势和劣势
    int desk[BUFFER__SIZE] = { 0 }; 
    //动态数组
    /*算法：
        自动扩容
        自动缩容 
    */
    int desk[BUFFER__SIZE]; 
#endif
    return 0;

}