#include <stdio.h>
int main(int argc, char const *argv[])
{
	FILE *fp;
	char ch;
	fp=fopen("2.txt","r");
	while((ch=getc(fp))!=EOF)
	{
		printf ("%c",ch);
	}
	fclose(fp);
	return 0;
}