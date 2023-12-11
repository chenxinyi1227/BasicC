#include "calculateFunc.h"
#include <stdio.h>//放在.c里

//源文件（.c）是函数的实现

//状态码
//枚举 sizeof(enum)  4
typedef enum STAUS_CODE
{
    ON_SUCCESS,
    ON_ERROR = -5,
    ON_NULLPTR,
    ON_MALLOCFAIL,
    ON_INVALIDACCESS,
}STAUS_CODE;

//加法
int calculateAdd(int num1, int num2)
{
    int Sum = num1 + num2;
    return Sum;
}
//减法
int calculateASub(int num1, int num2)
{
    return num1 - num2;
}

//乘法
int calculateMul(int num1, int num2)
{
    return num1 * num2;
}

//除法:向下取整
int calculateMDiv(int num1, int num2)
{
    if(num2 == 0)
    {
        return ON_INVALIDACCESS;
    }
    return num1 / num2;
}
