#include<stdio.h>
int main()
{
char ch[20]={000,001,010,100,101,110,1110};
int k;
scanf("%d",&k);
if(ch[0]=='000'&&ch[1]=='001'&&ch[2]=='010'&&ch[3]=='100'&&ch[4]=='110'&&ch[5]=='1110')
{
for(k=1;k<=3;k++)
{
printf("%d",ch);
}
else
{
printf("Invalid");
}
return 0;
}
