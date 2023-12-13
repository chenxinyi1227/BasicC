#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define BUFFER_SIZE 12
int main()
{
#if 0
    /*指针怎么定义
    //基础数据类型
    建议：定义变量（任意类型）记得初始化*/
    int a = 0;
    long b = 0;

    //指针的定义
    int *p = NULL;
#endif

#if 1
    //指针的使用:指针内部存放的是某变量的地址
    int a = 5;
    int *p = &a;
    int array[] = {1,1,7,3,5};
    // int *pstr = array;
    // int array[] = (int *)malloc(sizeof(int)*4);

    printf("a=%d\n", a);
    printf("&a:%p\n", &a);
    //非常重要
    printf("*(&a):%d\n", *(&a));

    printf("*p=%d\n", *p);
    printf("p:%p\n", p);
    printf("&p:%p\n", &p);
    printf("*(&p):%p\n", *(&p));

#if 0
    //整个地方不对
    int *ptr = &p;
    printf("ptr:%p\n", ptr);
#else
    int **ptr = &p;
    printf("ptr:%p\n", ptr);
    printf("*ptr:%p\n", *ptr);
  
    //非常重要 非常重要
    printf("*(*ptr):%d\n", *(*ptr));
#endif
#endif

#if 0
    //指针的特性：指针占用的内存大小是8个字节（64位）
    int a = 10;
    int len = sizeof(a);
    printf("len:%d\n", len);

    char p = 97;
    len = sizeof(p);
    printf("len:%d\n", len);

    char *ptr = &p;
    printf("ptr:%p   *ptr:%c\t *ptr:%d\n", ptr, *ptr,*ptr);
    len = sizeof(ptr);
    printf("len:%d\n", len);

    int *ptrInt = &a;
    printf("*(&a):%d\n", *(&a));
    printf("*ptrInt:%d\n",*ptrInt);
    len = sizeof(ptrInt);
    printf("len:%d\n", len);

#endif

#if 0
    /*指针特性2：指针和字符串
    字符串是区别于字符数组的。*/
    char *ptr = "hello world";
    int len = sizeof(ptr);
    printf("len:%d\n",len);

    //Q1：获取字符串长度
    int length = strlen(ptr);
    printf("lenghth:%d\n",length);
    
    //Q2:字符数组的赋值
    char name[BUFFER_SIZE] = { 0 };   
    strcpy(name,"zhangsan");
    printf("name:%s\n", name);

    //Q3:字符串赋值
    char *ptr2 = NULL;
#if 1
    ptr2 = "zhangsan";
#else
    strcpy(ptr2, "zhangsan");
#endif
    printf("ptr2:%s\n", ptr2);

    //堆空间
    //void*是一个指针，这个指针被成为万能指针
    char *ptr = (char *)malloc(sizeof(char) * BUFFER_SIZE);
    strcpy(ptr, "zhangsan");
    printf("ptr:%s\n", ptr);
    
#endif
    return 0;
}