#include <stdio.h>
#define BUFFER__SIZE 10

int main()
{
#if 0
    //如何获取数组有多少个元素：数组的长度/ 每个元素的长度
    int array[BUFFER__SIZE]  = { 0 };
    int arrayLen = sizeof(array);
    printf("len:%d\n",arrayLen);
    int elementLen = sizeof(array[0]);
    printf("len:%d\n",elementLen);

    int length = arrayLen / elementLen;
    printf("len:%d\n",length);
#endif

    //字符数组
    char pNum = 'a';
    printf("pNum:%c\n",pNum);
    //代码规范：只要是指针的变量，变量定义第一个需要是p开头
    char *ptr = "hello world";
    printf("ptr:%s\n",ptr);

    //字符数组初始化定义的两种方式

    char  buffer1[] = "helloworld";
    //如果是一双引号（字符串）的方式，默认加上'\0'
    char  buffer2[] = {'h','e','l','l','o','w','r','o','l','d'};//没有'\0'，会一直打印
    //如果是以单引号（字符）的方式，默认不会加上'\0'
    char  buffer3[] = {'h','e','l','l','o','w','r','o','l','d'};
    
    int buflen1 = sizeof(buffer1); 
    int buflen2 = sizeof(buffer2);
    
    printf("&buffer1:%p\n",buffer1);
    printf("&buffer2:%p\n",buffer2);
    printf("&buffer2:%p\n",buffer3);

    printf("buflen:%d,\tbuffer1:%s\n",buflen1,buffer1);
    printf("buffer1:%s\n",buffer1);
    printf("buffer2:%s\n",buffer2);
    printf("buffer3:%s\n",buffer3);
    return 0;
}
//字符数组的表达方式