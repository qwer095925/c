#include <stdio.h>
int main()
{
    int a,b,c,d,sum;
    float f;
    scanf("%d %d %d %d",&a,&b,&c,&d);
    sum=a+b+c+d;
    f=sum/4.0;
    printf("Sum = %d; Average = %.1f",sum,f);
    return 0;
}
