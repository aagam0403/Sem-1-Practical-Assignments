#include <stdio.h>
#include <ctype.h>
int main(int argc, char const *argv[])
{
	FILE *fp1;
	char ch;
	fp1=fopen("2.txt","r");
	while((ch=getc(fp1))!=EOF)
	{
		printf ("%c",toupper(ch));
	}
	fclose(fp1);
	fp1=fopen("2.txt","r");
	while((ch=getc(fp1))!=EOF)
	{
		printf ("%c",tolower(ch));
	}
	fclose(fp1);
	return 0;
}