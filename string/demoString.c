#include <stdio.h>
#include <string.h>
#define BUFFER_SIZE 16
//数组大小
int main()
{
#if 0
    //字符数组
    char array[BUFFER_SIZE];
    //初始化
    memset(array, 0 , sizeof(array));//用0 初始化
#endif

#if 0
    char array[BUFFER_SIZE] = "hello world";
    int len = sizeof(array);
    printf("len:%d array:%s\n",len,array);
#endif 

#if 0
    char array[BUFFER_SIZE] = "hello world";
    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        array[idx] = idx;
    }
    //strlen:排除'\0',计算长度
    int len = strlen(array);
    printf("len:%d\n",len);

    //strcpy
    char array2[BUFFER_SIZE];
    memset(array2, 0 , sizeof(array2));//用0 初始化
    strcpy(array2, "zhangsan");
    printf("array2:%s\n",array2);
    puts(array2);

    //strcat
    strcat(array2,"lisi");
    printf("array2:%s\n",array2);

    /*strcmp:如果字符串1与字符串2相同，则函数值为0。 s1 < s2  n<0;s1 > s2 n>0;
    若出现不相同的字符，则以第一对不相同的字符比较结果为准。（'a'<'z'；'A'<'Z'）。*/
    char array3[BUFFER_SIZE] = "wangwu";
    int n = strcmp(array2,array3);
    printf("n = %d\n",n);
#endif 

#if 0
    //字符串
    //指针出入
    char *ptr = "hello world";
    int len = strlen(ptr);
    int size = sizeof(ptr);

    printf("len:%d\n",len);
    printf("size:%d\n",size);

    printf("*ptr:%c\t*ptr(ptr+1):%c,ptr:%s\n",*ptr,*(ptr+1),ptr);
    *ptr = 'H';
    printf("*ptr:%c\t*ptr(ptr+1):%c,ptr:%s\n",*ptr,*(ptr+1),ptr);
#endif
    return 0;
}