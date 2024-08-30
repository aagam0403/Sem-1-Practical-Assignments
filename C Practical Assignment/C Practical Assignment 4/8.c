#include<stdio.h>
int avg(int a, int b, int c, int d, int e);
int main()
{
    int a,b,c,d,e,aver;
    printf("Subject 1");
    scanf("%d",&a);
    printf("Subject 2");
    scanf("%d",&b);
    printf("Subject 3");
    scanf("%d",&c);
    printf("Subject 4");
    scanf("%d",&d);
    printf("Subject 5");
    scanf("%d",&e);
    aver=avg(a,b,c,d,e);
    printf("Average is %d",aver);
    return 0;
}
int avg(int a, int b, int c, int d, int e)
{   int average;
    average=(a+b+c+d+e)/5;
    return average;
}