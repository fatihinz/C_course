#include <stdio.h>
#include <stdlib.h>

void f(int*a,int boyut,int*toplam,int*ortalama,int*ebuyuk){
	int t=0,eb=a[0];
	for(int i=0;i<boyut;i++){
		if(a[i]>eb)
			eb=a[i];
	t+=a[i];

	}
*toplam = t;
*ortalama=t/boyut;
*ebuyuk=eb;

}

int main(){
	int a[5]={3,8,2,5,1};
	int *toplam=(int*)malloc(sizeof(int));
	int *ortalama=(int*)malloc(sizeof(int));
	int *ebuyuk=(int*)malloc(sizeof(int));
	f(a,5,toplam,ortalama,ebuyuk);
	printf("toplam:%d\n,ortalama:%d\n,enbuyuk:%d\n",*toplam,*ortalama,*ebuyuk);




}



