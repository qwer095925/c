#include<stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    switch(a)
    {
            case'1':printf("Monday\n");break;
            case'2':printf("Tuesday\n");break;
            case'3':printf("Wednesday\n");break;
            case'4':printf("Thursday\n");break;
            case'5':printf("Friday\n");break;
            case'6':printf("Saturday\n");break;
            case'7':printf("Sunday\n");break;
            if(a!=1,2,3,4,5,6,7)
                default:printf("-1");
    }
    return 0;
    }
