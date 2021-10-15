/*根据钱江晚报官方微博的报导，最新的肥胖计算方法为：体重(kg) / 身高(m) 的平方。如果超过 25，你就是胖子。于是本题就请你编写程序自动判断一个人到底算不算胖子。*/
#include<stdio.h>
int main()
{
    float a,b,c;
    scanf("%f %f",&a,&b);
    c=(a/b/b);
    if(c>25)
        printf("%.1f\nPANG\n",c);
    else
        printf("%.1f\nHai Xing\n",c);
    return 0;
}
