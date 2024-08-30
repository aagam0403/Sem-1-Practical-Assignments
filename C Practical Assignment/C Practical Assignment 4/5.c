#include<stdio.h>
int no(int x);
int main()
{
    int num;
    num=no(6);
    return 0;
}
int no(int x)
{
    if (x%2==0)
    {
        printf("Even Number");
    }
    else 
    {
        printf("Odd Number");
    }
    return 0;
}