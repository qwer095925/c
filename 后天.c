/*如果今天是星期三，后天就是星期五；如果今天是星期六，后天就是星期一。我们用数字1到7对应星期一到星期日。给定某一天，请你输出那天的“后天”是星期几。*/
#include<stdio.h>
int main()
{
    int x,y;
    scanf("%d",&x);
    if(x<6)
        y=x+2;
    else
        y=x-5;
    printf("%d",y);
    return 0;
}
