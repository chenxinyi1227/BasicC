#include <stdio.h>
#include <stdlib.h>

//数据类型
//sizeof是计算字节的大小

int main()
{
#if 0
    long bigVuale = 0;
    int len_b = sizeof(bigVuale);      //整型就是整数
    printf("len:%d bigValue=%ld\n",len_b,bigVuale);

    //变量的命名：数字、字母、下划线。只能以字母和下划线开头
    //数据类型对应的是内存的储存空间
    int age = 32767;
    int len_i = sizeof(age);      //整型就是整数
    printf("len:%d age=%d\n",len_i,age);

    short smallValue = 8;
    int len_sm = sizeof(smallValue);      
    printf("len_short:%d smallValue=%d\n",len_sm,smallValue);

#if   0
    //浮点数
    float weight=54.5;
    int len_w=sizeof(weight);      //浮点型型就是小数
    printf("len:%d weight=%f\n",len_w,weight);
#else 
    double weight = 54.5;
    int len_d = sizeof(weight);      //浮点型型就是小数
    printf("len:%d weight = %f\n",len_d,weight);
#endif

    char sex = 'm';
    int len_s = sizeof(sex); 
    printf("len:%d sex:%c\n",len_s,sex);
#endif
#if 1
    char sex = -1;
    int len = sizeof(sex); 
    printf("len:%d sex = %c sex = %d\n", len, sex, sex);

    char default_vallue = 128;
    len = sizeof(default_vallue); 
    printf("len:%d sex = %c default_vallue = %d\n", len, default_vallue, default_vallue);

    //无符号 有符号的区别
    unsigned  char m_valude = -8;
    len = sizeof(m_valude); 
    printf("len:%d sex = %c m_valude = %d\n", len, m_valude, m_valude);
#endif

    //表达式 & 运算符&
    //运算符 + - * /
    int val = 10;
    printf("val:%d\n",val);

    //括号的优先级最高 运算符的优先级用括号的限制
    val++;//val = val + 1;
    printf("val:%d\n",val);

    val--;
    printf("val:%d\n",val);

    //前置++
    ++val;
    printf("val:%d\n",val);
    --val;
    printf("val:%d\n",val);

#if 0
    val = val + 100;
    printf("val:%d\n",val);
   
    val += 100;     //val = val + 100;
    printf("val:%d\n",val);

#endif
#if 0
    int m_value = 10;
    int discuss = m_value / 3;//商
    int remainder = m_value % 3;//余数 取模

    printf("discuss:%d\n",discuss);
    printf("remainder:%d\n",remainder);

    //随机数
    int randomVal = rand();
     printf("randomVal:%d\n",randomVal);

    //中奖率是25%
    int lotteryRate = randomVal % 4;;
    printf("lotteryRate:%d\n",lotteryRate);
#endif
#if 0
    //位运算
    // int a = 51 >> 1 ;
    // printf("a:%d\n",a);
    a <<= 1;
     // printf("a:%d\n",a);

    int val_1 = 51;
    int orVal = val_1 | 7;
    int andVal = val_1 & 2;

    printf("orVal:%d\n",orVal);
    printf("orVal:%d\n",andVal);

    //非
    int noteVal = !val_1;
    printf("noteVal:%d\n",noteVal);
#endif    
#if 0
    //且 或 非
    int condition1 = 1;
    int condition2 = 6;
    //或：只要有一个条件被满足，就返回1
    if((condition1 ==1) || (condition2 == 5))
        printf("hello world\n");
    else
        printf("error hello world\n");

    //且：两边都被满足，就返回1，否则返回0
    if((condition1 ==1) && (condition2 == 5))
        printf("hello world\n");
    else
        printf("hello world error\n");
#endif
//三目运算符
//运算符：双目运算符 & 三目运算符
    int num1 = 1;
    int num2 = 30;
    int num3 = (num1 > num2) ? 100 : 666;
    printf("num3:%d\n",num3);  
    return 0;
}