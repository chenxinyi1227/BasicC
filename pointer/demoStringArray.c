#include <stdio.h>
#include <string.h>
#define BUFFER_SIZE 10
int main()
{
#if 0
    /*数组：一块连续的存储空间
    //1、数组是存储相同的数据类型
    int array[10];  整数数组
    char array[10]; 字符数组
    char *array[10]  字符串数组
    /todo......结构体数组
    */
    //字符数组的内存在栈区
    char name[BUFFER_SIZE];//字符数组
    memset(name, 0 ,sizeof(name));
    strncpy(name, "zhangsan", sizeof(name) - 1);
    printf("name:%s\n", name);

    printf("name[1] = %c\n", name[1]);
    name[1] = 'H'; // 可以修改
    printf("name:%s\n", name);


    //指针和数组不分家
    printf("*(name + 2):%c\n", *(name + 2));
    *(name + 2) = 'A'; //也可以修改
    printf("name:%s\n", name);

    /*总结：
    //指针和数组不分家： name[X] = *(name + X)   X是常量
    */ 
#endif

#if 1
    //字符串： 内存存在在全局常量区
    char *ptr = "zhangsan";

    //数组指针不分家
    printf("ptr[1]:%c\n", ptr[1]);
    printf("*(ptr + 1): %c\n", *(ptr + 1));
    ptr[0] = 'Z'; //不能修改， 字符串常量  全局区
    printf("ptr:%c\n", ptr[0]);
    /*总结：
    1、字符数组和字符串的区别：
    1、内存：字符数组内存存放在栈区，存储的值可以被修改
            字符串内存放在全局区，不可以被修改
    */
#endif
#if 1
   //字符串数组
   char *array[BUFFER_SIZE] = {0};
// memset(array, 0 ,sizeof(array));
    array[0] = "hello";
    array[1] = "world";
    array[2] = "nihao";
    array[3] = "zhangsan";
    array[4] = "china";

    for (int idx = 0; idx < BUFFER_SIZE; idx++)
    {
        printf("arrar[%d] = %s\n", array[idx]);
    }
    /*字符串数组：
    1、他是一个数组
    2、存放的是字符串
    */
   //伏笔
    printf("array[0][0] %c\n",array[0][0]) ;
#endif  


return 0;
}
