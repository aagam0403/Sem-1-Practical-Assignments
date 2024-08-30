#include<stdio.h>
int cub(int x);
int main()
{
    int cube;
    cube=cub(3);
    printf ("Cube=%d",cube);
    return 0;
}
int cub(int x)
{
    int ans;
    ans=x*x*x;
    return(ans);
}