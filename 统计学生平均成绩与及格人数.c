/*输入在第一行中给出非负整数N，即学生人数。第二行给出N个非负整数，即这N位学生的成绩，其间以空格分隔。*/
/*本题要求编写程序，计算学生们的平均成绩，并统计及格（成绩不低于60分）的人数。题目保证输入与输出均在整型范围内。*/
#include<stdio.h>
#include<math.h>
int main()
{
    int N,i,grade,count=0;
    int sum=0;
    double average=0;
    scanf("%d",&N);
    if(N==0){
        average=0;
        count=0;
    }else{
        for(i=1;i<=N;i++){
            scanf("%d",&grade);
            if(grade>=60){
                count++;
            }
            sum=sum+grade;
        }
        average=1.0*sum/N;
    }
    printf("average = %.1f\n",average);
    printf("count = %d",count);
           return 0;
}
