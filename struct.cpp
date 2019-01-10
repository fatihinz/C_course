#include <stdio.h>

typedef enum{
	bay,
	bayan
} cinsiyet;
typedef enum{
	ptesi,
	sali,
	crs,
	per,
	cuma,
	ctesi,
	pazar
} gunler;

typedef struct{
	int yas;
	char * isim;
	cinsiyet c;
	gunler tatilgunu;
	} insan;
int main(){
	int a;
	insan ali;
	ali.yas =30;
	ali.c=bay;
	ali.tatilgunu = per;
	printf("alinin yasi: %d %u %u \n",ali.yas,ali.c,ali.tatilgunu);
	
}
