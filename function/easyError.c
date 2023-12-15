#include <stdio.h>
#include <string.h>
/* 值传递和地址传递 */
/* 函数参数又要做：形参 
当我们的函数的参数没有指针的时候就是值传递，要想改变实参的值就得地址传递*/

#if 1
void swapData(int val1, int val2)
{
    int tmp = val1;
    val1 = val2;
    val2 = tmp;
    return;
}

/* 当我们的整型做形参时，一定是传出参数 */
void swapRealData(int *ptr1, int *ptr2)
{
    int tmp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = tmp;
    return;
}
#endif

#if 1
/* 什么是传入参数 */
/* 什么时候用传入参数：当你不想用改变实参的时候，就用传入参数（就用const限制） */
void printfArray(const char *str)
{
    printf("before str:%s\n", str);
    //*str = *(str + 0) = str[0]
   // *str = 'H';
    printf("after str:%s\n", str);
}

#endif
/* conclusion：
    字符串：形参不加const就是传出参数（就是被修改的值），加上const就是传入参数（不能被改变）
    整数：加上指针就是传出参数（就是要被修改的值），不加指针的就是传入参数（能被修改，不影响实参）
 */

int main()
{
#if 0
    int num1 = 100;
    int num2 = 200;
    /* 调用函数的参数叫：实参  要想改变实参的值就得用传出参数*/
    swapData(num1, num2);
    printf("num1:%d\tnum2:%d\n", num1, num2);

    /* 传出参数一定会改变实参的值 */
    swapRealData(&num1, &num2);
    printf("num1:%d\tnum2:%d\n", num1, num2);
#endif

#if 0
    int *str = "hello world";
    printfArray(str);
#endif

    return 0;
}