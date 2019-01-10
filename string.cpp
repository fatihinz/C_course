#include <stdio.h>
#include <stdlib.h>

int main(){
	char isim[20];
	char *soyisim;

:	soyisim= (char *)malloc(sizeof(char)*20);

	scanf("%s",isim);
	scanf("%s",soyisim);
	printf("tanistigimiza memnun oldum %s %s",isim, soyisim);

	printf("char %c %c",isim[3],soyisim[3]);	


}

