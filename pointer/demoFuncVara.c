#include <stdio.h>

    /*函数*/
#if 1
    /*函数参数
    需求：实现两个数的交换*/
void swapData(int *val1, int *val2)
{
    int temp = *val1;
    *val1 = *val2;
    *val2 = temp;
}
#endif
int main()
{
    int num1 = 100;
    int num2 = 200;

    swapData(&num1, &num2);
    printf("num1:%d num2:%d\n", num1, num2);

    return 0;
}