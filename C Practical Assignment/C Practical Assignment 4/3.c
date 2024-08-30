#include<stdio.h>
int sq(int x);
int main()
{
    int squ;
    squ=sq(8);
    printf ("Square=%d",squ);
    return 0;
}
int sq(int x)
{
    int ans;
    ans=x*x;
    return(ans);
}