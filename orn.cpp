#include <stdio.h>
int main()
{
	
	FILE *f;
	f = fopen("myfile.txt","w");
	fputs(" Fatih","w");
	fseek(f,5,SEEK_SET);
	fputs(" yay",f);
	fclose(f);
	return 0;



}
