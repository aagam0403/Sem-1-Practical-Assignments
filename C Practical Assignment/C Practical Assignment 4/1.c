#include <stdio.h>
int add(int x, int y,int z);
int main()
{
	int addition;
	addition=add(10,20,30);
	printf("Add=%d",addition);
	return 0;
}
int add(int x, int y, int z)
{
	int ans;
	ans=x+y+z;
	return(ans);
}