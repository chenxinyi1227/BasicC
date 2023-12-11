#include <stdio.h>
#include <stdlib.h>

int printfString()
{
    int ret = 0;
    printf("print string!\n");
    return ret;
}
int main()
{
    int num1 = 10;
    printf("num1= %d\n",num1);
    printfString();
    return 0;
}
