/*键盘输入一个字符，要求判断是否为数字字符，如果是’a’~’z’或’A’~’Z’，则输出“character”，如果是‘0’~‘9’，则输出“digit”，如果都不是，则输出“ERROR”。*/
#include<stdio.h>
int main()
{
    char ch;
    scanf("%c",&ch);
    if((ch>='a'&&ch<='z')||(ch>='A'&&ch<='Z'))
        printf("character\n");
        else
    if(ch>='0'&&ch<='9')
        printf("digit\n");
    else
        printf("ERROR\n");
    return 0;
}

