#include <stdio.h>
#include <stdlib.h>
#include <time.h>   
//状态码
enum STATUS_CODE
{
    REGISTER = 1,
    LOGIN,
    QIUT,
};

//宏定义
#define COUNT_NUM 100
#define RANGE_NUM 200
int  main()
{

#if 0
    //判断语句
   int money = 5000;

   int apple = 8900;
   int pear = 6787;
   int oringe = 7111;
   

   if(money = apple)
   {
    printf("get a apple!\n");
   }
   else if(money > pear)
   {
    printf("get a pear!\n");
   }
   else if(money > oringe)
   {
    printf("get a oringe!\n");
   }

#endif
    
#if 0
    int money = 5000;
    int budget = 939;
    int minbudgt = 939;
    int apple = 8900;
    int pear = 6787;
    int oringe = 7111;

    //两边哦都是1（成立）才成立
    if(minbudgt <budget && (budget < minbudgt))
    {
        printf("success get a computer\n");
    }
    else
    {
        printf("error get a computer\n");
    }
#endif

//代码规范1：一个函数尽量不要超过80行，做多不要超过120行
//switch
#if 0
    //坑1:每一个case都需要break
    int choice=0;
    printf("请输入你的选项：");
    scanf("%d",&choice);
    switch (choice)
    {
    case REGISTER:
    {
        //坑2:如果case里面的语句过多，一定要加{}来包含
        printf("welcome to register\n");
    }
        break;
    case LOGIN:
        printf("welocme to login\n");
        break;
     case QIUT:
        printf("welocme to  quit\n");
        break;
    default:
        printf("inout choice invalid\n");
        break;
    }

#endif

//for
#if 1
    srand(time(NULL));

    //循环
    //for循环 
    /*代码规范： 循环不允许使用i  index 索引
   代码规范：不允许使用魔鬼数字 宏定义 */
   int randomNum = 0;//外面定义，节省时间
    for(int idx; idx < COUNT_NUM; idx++)
    {
        //1-200的随机数
        randomNum =  rand() % RANGE_NUM + 1;
        printf("randomNum:%d\n",randomNum);
    }
#endif

//while
#if 1
    srand(time(NULL));
    //while 
    //编码规范：变量尽量使用驼峰式命名
    int CircleTimes = COUNT_NUM >> 1;
    int randomNum = 0;
    
    //一定需要由退出的条件
    while(CircleTimes--)
    {
        randomNum =  rand() % RANGE_NUM + 1;
        printf("randomNum:%d\n",randomNum);
    }

#endif

#if 1
    //用处：尝试用在宏函数里
    int VaraNum = 0;
    do
    {
        /* code */
        printf("varaNum:%d\n",VaraNum);
    } while (VaraNum);
    
#endif
    return 0;
}