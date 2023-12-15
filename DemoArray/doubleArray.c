#include <stdio.h>
#include <string.h>

#define BUFFER_SIZE 5
#define ROW     3
#define COLUMN  3

int main()
{
#if 0
    /* 从一位数组到二维数组 */
    int array[BUFFER_SIZE] = {0};
    int len = sizeof(array);
    printf("len:%d\n", len);
#endif
    /* 二维数组定义 */
    int array2[ROW][COLUMN] = {0};
    int len = sizeof(array2);
    printf("len:%d\n", len);

    array2[0][0] = 100;
    printf("array[0][0]:%d\n", array2[0][0]);

    int count = 1;
    /* 给二维数组赋值 */
    for(int idx = 0; idx < ROW; idx++)
    {
        for(int jdx = 0; jdx < COLUMN; jdx++)
        {
            array2[idx][jdx] = count;
            count++;
        }
    }
#if 0
    /* 二维数组的取值 */
    count = 0;
    for(int idx = 0; idx < ROW; idx++)
    {
        for(int jdx = 0; jdx < COLUMN; jdx++)
        {
            printf("array2[%d][%d] = %d\t", idx, jdx, array2[idx][jdx]);
            count++;
            // if(count % 3 == 0)
            // {
            //     print("\n"); //3的倍数被循环
            // }
        }
        printf("\n");
    }
    printf("\n");
#endif
    /*  二维数组的地址*/
    printf("array2[0]:%p\n", array2[0]);
    printf("array2[0][0]:%p\n", &array2[0][0]);
    printf("array2 + 0:%p\n", array2);
    printf("\n");

    printf("array[1]:%p\n", array2[1]);
    printf("array[2]:%p\n", array2[2]);

    /* 数组即指针 */
    /* array[2] = *(array + 2)
    array[2][1] = *(*array + 2) + 1) */
    printf("a[2][2] = %d, *(*(array2 + 2) + 2) = %d\n", array2[2][2], *(*(array2 + 2) + 2));

    /* 作业1：二维数组的翻转 */
    return 0;
}