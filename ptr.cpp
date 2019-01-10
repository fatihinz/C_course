#include <stdio.h>
#include <stdlib.h>
	int g(int);
	int f(int *);
	int main(){
	int *p;
	int a=10;
	p=&a;
	printf("pointer: %d",*p);
	*p=20;
	printf("\n a :%d\n",a);
	
	int *q = (int *)malloc(sizeof(int)*a);
	q[3]=70;
	printf("q[3] %d\n",q[3]);
	
	f(&a);
	printf("f deger:%d\n"),a;
 
	g(a);
	printf("g deger: %d\n" ,a);	
	}

int g(int a){

a=90;

}



int f(int *a){
*a=80;



}




