#include<stdio.h>
int multi(int x,int y);
int divis(int p,int q);
int main()
{
    int mul,div;
    mul=multi(10,5);
    div=divis(15,3);
    printf ("Mul=%d",mul);
    printf ("Div=%d",div);
    return 0;
}
int multi(int x, int y)
{
    int ans;
    ans=x*y;
    return(ans);
}
int divis(int p,int q)
{
    int ans;
    ans=p/q;
    return(ans);
}