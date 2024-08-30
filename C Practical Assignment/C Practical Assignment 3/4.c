#include <stdio.h>
int main(int argc, char const *argv[])
{
	FILE *fp1,*fp2,*fp3;
	char a,b;
	fp3=fopen("3.txt","w");
	fp1=fopen("1.txt","r");
	while((a=getc(fp1))!=EOF)
	{
		fprintf (fp3,"%c",a);
	}
	fprintf (fp3," ");
	fp2=fopen("2.txt","r");
	while((b=getc(fp2))!=EOF)
	{
		fprintf (fp3,"%c",b);
	}	
	fclose(fp1);
	fclose(fp2);
	fclose(fp3);
}