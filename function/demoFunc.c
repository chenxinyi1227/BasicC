#include "calculateFunc.h"
#include "myString.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>


/*函数参数：可以有也可以没有
函数返回值：
没有的话需要void
如果有，返回你想要的数据类型（int long short char float double）*/

//API(Application Programming Interface):应用程序接口

//函数的定义
#if 1
//case1:没有参数，没有返回值
void purchaseAppointThing()
{
    printf("purchase a phone\n");
}
#endif

#if 1
//case2:有参数，没有返回值
//函数参数一定有数据类型
void myAddNum(int num1, int num2)
{
    int sum = num1 + num2;
    printf("sum:%d\n",sum);
}
#endif

#if 1
//case3:有参数，有返回值
int myAddNum2(int num1, int num2)
{
    int sum = num1 + num2;
    //printf("sum:%d\n",sum);
    return sum;
}
#endif

#if 0
//取别名
typedef enum STAUS_CODE STAUS_CODE;//这种可以
#endif

int main()
{
#if 0
    // int a = 5;
    // printf("a:%d\n",a);
    //函数的调用
    purchaseAppointThing();
    
    int num1 = 1;
    int num2 = 4;

    //函数的使用
    myAddNum(num1,num2);
    int n= myAddNum2(num1,num2);
    printf("n=%d\n",n);

    int totalSum = myAddNum2(num1, num2);
    int transFormerPrice = 10;
    if(totalSum > transFormerPrice)
    {
        printf("get a transFormer\n");
    }
    else
    {
        printf("l not geted\n");
    }
#endif
#if 0
    STAUS_CODE status;
    int len = sizeof(status);
    printf("len = %d\n",len);
#endif
    int num1 = 50;
    int num2 = 60;
    int sum1 = calculateAdd(num1,num2);
    printf("sum1:%d\n",sum1);

    int sum2 = calculateASub(num1,num2);
    printf("sum2:%d\n",sum2);

    int sum3 = calculateMDiv(num1,num2);
    printf("sum3:%d\n",sum3);

    int sum4 = calculateMul(num1,num2);
    printf("sum4:%d\n",sum4);

    //char *ptr = "hello\0world";
    char *ptr = NULL;
    int len = 0;
#if 0
    len = strlen(ptr);
#else
    len = myStrlen(ptr);
#endif
    printf("len:%d\n", len);

    return 0;
}
