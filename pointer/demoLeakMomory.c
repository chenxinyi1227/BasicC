#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define BUFFER_SIZE 16
/*内存泄漏:3中场景
1、野指针
2、malloc出的堆空间 没有释放
3、踩内存（read / write is invalid(无效))
*/

int main()
{
    //1、什么情况下会导致内存泄漏
    //case 1: 野指针
#if 0
    int a;
    printf("a:%ls\n", a);

    int array[BUFFER_SIZE];
    for(int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("%d\t", array[idx]);
    }
#endif

#if 0
    char *p;
    printf("\n");
    
#endif

    //case 2:
    char *ptr = (char *)malloc(sizeof(char) * BUFFER_SIZE);
    if(!ptr)
    {
        /*todo...*/
        //状态码
        return -1;
    }
    //使用malloc分配的空间, 数据是脏的（脏数据）（未初始化）
    memset(ptr, 0, sizeof(char) * BUFFER_SIZE);
   
#if 0
    //极度危险的函数，改用strncpy
    strcpy(ptr, "hello world");
#endif

    //使用安全
    strncpy(ptr, "hello w434354545orld", BUFFER_SIZE - 1);//没有结束符 BUFFER_SIZE - 1
    printf("ptr:%c\n", *ptr);
    //释放内存
    if(ptr != NULL)
    {
        free(ptr);
        ptr = NULL;
    }

    return 0;
}