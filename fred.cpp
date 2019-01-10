#include <stdio.h>
int main()
{
	FILE *f;
	char buffer[11];
	if (f=fopen("testdata","r"))
	{
	fread(buffer,1,10,f);
	buffer[10]=0;
	fclose(f);
	printf("first 10 chars of file :\n %s \n",buffer);
	}
 return 0;
}
