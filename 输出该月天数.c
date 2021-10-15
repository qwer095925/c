#include<stdio.h>
int main()
{
	int days,year,month,t;
	scanf("%d %d",&year,&month);
	if(year%4==0&&year%100!=0||year%400==0)
	{
		t=1;
	}
	else
	{
		t=0;
	}
	if(t==1&&month==2)
	printf("year = %d month = %d days=29\n",year,month,days);
	else
	if(t==0&&month==2)
	printf("year = %d month = %d days=28\n",year,month,days);
	else
    if(month==1||month==3||month==5||month==7||month==8||month==10||month==12)
	printf("year = %d month = %d days=31\n",year,month,days);
	else 
	if(month==4||month==6||month==9||month==11)
	printf("year = %d month = %d days=30\n",year,month,days);
	return 0;
}
