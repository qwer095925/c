#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a<100||a>999)
        return 0;
    if(a%100)
    {
        if(a%10)
           printf("%d%d%d",a%10,(a/10)%10,a/100);
        else
           printf("%d%d",(a/10)%10,a/100);
    }
    else
    {

        printf("%d",a/100);
    }
    return 0;
}
