/*本题要求将输入的任意3个整数从小到大输出。*/
#include <stdio.h>
int main()
{
int x,y,z,t;
scanf("%d %d %d",&x,&y,&z);
if(x>y)
{
t=x,x=y,y=t;
}
if(x>z)
{
t=z,z=x,x=t;
}
if(y>z)
{
t=y,y=z,z=t;
}
printf("%d->%d->%d",x,y,z);
return 0;
}
