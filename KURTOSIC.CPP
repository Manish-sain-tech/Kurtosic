#include<conio.h>
#include<stdio.h>
#include<math.h>
void main()
{
int n,i;
float x2=0,a[10],x1=0,c=0,y1=0,y2=0,y3=0;
clrscr();
printf("enter the no of x values\n");
scanf("%d",&n);
if(0<n<11)
{
printf("enter the values of x\n");
for(i=0;i<n;i++)
{
scanf("%f",&a[i]);
if(a[i]<0)
{
c++;
printf("not enogh values\n");
break;
}
}


if(c==0)
{
for(i=0;i<n;i++)
{
x1=x1+a[i];
}
x2=x1/n;
printf("mean:%f",x2);

for(i=0;i<n;i++)
{
y1=y1+(a[i]-x2)*(a[i]-x2)*(a[i]-x2)*(a[i]-x2);
y2=y2+(a[i]-x2)*(a[i]-x2) ;
}
y2=y2*y2;
y3=y1/y2;
y3=n*y3;
if(y2==0)
printf("\nundefine kurtosis\n");
else
printf("\nkurtosis:%f",y3);
 }
}
 else
 {
 printf("you can enter only 1 to 10 values of x");
 }
  getch();
}