#include <stdio.h>
#include <string.h>
#define BUFFER__SIZE 10
/*数组：
    1、一段连续的存储空间
    2、存放的数据类型是相同的*/

int main()
{
    //方法一：使用定义即初始化
#if 1
    int array[BUFFER__SIZE]  = { 1,2,3 };
#else
    int array[BUFFER__SIZE];
#endif
    for(int idx = 0; idx<BUFFER__SIZE; idx++)
    {
        printf("array[%d] = %d\n",idx,array[idx]);
    }
    int len = sizeof(array);
    printf("len: %d\n",len);
    
    //地址
    printf("%p\n",&array[0]);
    printf("%p\n",&array[1]);
    printf("%p\n",&array[9]);
    printf("%p\n",array);
    //数组的首地址和数组的第一个元素的地址相同

    //清除脏数据
   // memset(array, 0, sizeof(array));
    // printf("=====================\n");
    // for(int idx = 0; idx < BUFFER__SIZE;idx++)
    // {
    //     printf("array[%d] = %d\n",idx,array[idx]);
    //}

    //数组的越界访问
    //判断的索引的有效性
    printf("array[-1]:%d\n",array[-1]);
    printf("array[10]:%d\n",array[10]);
    return 0;
}
