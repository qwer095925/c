#include<stdio.h>
int main()
{
    int a,b,c,d,e,f,g;
    scanf("%d",&a);
    b=a/10000;
    c=(a-b*10000)/1000;
    d=(a-b*10000-c*1000)/100;
    e=(a-b*10000-c*1000-d*100)/10;
    f=(a-b*10000-c*1000-d*100-e*10);
    g=f*10000+e*1000+d*100+c*10+b;
    if(a==g)
    printf("%d yes",g);
    else
    printf("%d no",a);
    return 0;
    
}
