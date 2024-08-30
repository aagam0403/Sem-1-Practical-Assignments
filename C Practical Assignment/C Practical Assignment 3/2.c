#include <stdio.h>
int main(int argc, char const *argv[])
{
	FILE *fp=fopen("3.txt","w");
	int a;
	printf ("Enter Number");
	scanf ("%d",&a);
	fprintf(fp,"%d",a);
	fclose(fp);
}