#include<stdio.h>
int prime(int x);
int main()
{
    int prim;
    printf("Enter any Number");
    scanf("%d",&prim);
    prime(prim);
    return 0;
}
int prime(int x)
{
    int i,c=0;
    for(i=1;i<=x;i++)
    {
        if(x%i==0)
        {
        c++;
        }    
    }
    if(c==2)
    {
        printf("Prime Number");
    }
    else
    {
        printf("Not Prime Number");
    }
    return 0;
}