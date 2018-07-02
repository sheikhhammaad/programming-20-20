#include<stdio.h>
#include<math.h>
void main()
{
int n,i=2,sum=0;
float m=0.0;
scanf("%d",&n);
for(i=1;i<=n;i++)
{
m = float(1/i);
sum=sum+m;
}
printf("%d",sum);
getch();
}
