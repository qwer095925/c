#include<stdio.h>
int main()
{
    int a;
    scanf("%d",&a);
    if(a>=90)
    printf("A\n");
    if(a<90&&a>=80)
    printf("B\n");
    if(a<80&&a>=70)
    printf("C\n");
    if(a<70&&a>=60)
    printf("D\n");
    if(a<60)
    printf("E\n");
    
        return 0;
}
