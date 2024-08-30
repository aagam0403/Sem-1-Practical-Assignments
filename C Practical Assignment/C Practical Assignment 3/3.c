//create a c program which will display numbers from 1 to 100 in a text file and
//then print all the even no. and odd no. from text file (both diffrent file)
#include <stdio.h>
int main(int argc, char const *argv[])
{
	FILE *fp1,*fp2;
	int i;
	fp1=fopen("2.txt","w");
	fp2=fopen("3.txt","w");
	for (int i=1; i<=100; i++)
	{
		if(i%2==0)
		{
			fprintf (fp1,"\n %d",i);
		}
		else
		{
			fprintf (fp2,"\n %d",i);
		}
		
	}
	fclose(fp1);
	fclose(fp2);
	return 0;
}