#include <stdio.h>
#include <string.h>
#define BUFFER_SIZE 10
#define BUFFER_OFFSET 100
    //offset 偏移量
    /*函数*/
#if 0
    /*函数参数
    需求：实现两个数的交换*/
int swapData(int *val1, int *val2)
{
    int ret = 0;
    int temp = *val1;
    *val1 = *val2;
    *val2 = temp;
    return ret;
}
#endif

//函数做函数参数会自动弱化为指针
#if 0
void printfArray(int *array)
{
    int elementNum = sizeof(array) / sizeof(array[0]);
    for(int idx = 0; idx < elementNum; idx++)
    {
        printf("array[%d] = %d\t", idx, array[idx]);
    }
}
#else
void printfArray(int *array, int numSize)
{
  //  int elementNum = sizeof(array) / sizeof(array[0]);
    for(int idx = 0; idx < numSize; idx++)
    {
        printf("array[%d] = %d\t", idx, array[idx]);
    }
}
#endif

int main()
{
#if 0
    int num1 = 100;
    int num2 = 200;

    swapData(&num1, &num2);
    printf("num1:%d num2:%d\n", num1, num2);
#endif
    int array[BUFFER_SIZE];
    memset(array, 0, sizeof(array));
    int elementNum = sizeof(array) / sizeof(array[0]);
    printf("elementNum:%d\n", elementNum);

    for(int idx = 0; idx < elementNum; idx++)
    {
        array[idx] = idx + BUFFER_OFFSET; 
    }
    printfArray(array, elementNum);
    /*数组名就是数组的首地址*/
   
    printf("\n");
    return 0;
}