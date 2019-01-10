#include <stdio.h>

int main()
	{
	char ch;
	FILE *fp;
	fp=fopen("testdata","r");
	while (!feof(fp))
	{
	ch=getc(fp);
	printf("\n%c",ch);
	}
}
