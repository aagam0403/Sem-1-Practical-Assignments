#include<stdio.h>
int swap(int x, int y);
int main()
{
    int swa;
    swa=swap(5,10);
    return 0;
}
int swap(int x,int y)
{
x=x+y;
y=x-y;
x=x-y;
   printf("X=%d",x);
   printf("Y=%d",y);
   return 0;
}