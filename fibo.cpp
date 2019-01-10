#include <stdio.h>
int main(){
	
	int a[10];
	int i;
	for(i = 0;i<10;i++)
	{	printf("%d numarali ogrenci notunu giriniz :",i);
		scanf("%d",&a[i]);
		
	}

	int eb = 0;
	int ek = 100;
  	int top = 0;
		for(i=0;i<10;i++){
			if(a[i]>eb){
			eb=a[i];
			}}
			for(i=0;i<10;i++){
			if(a[i]<ek){
			ek=a[i];
			}
		top=top+a[i];
			}
	int ort = top/10;
	printf("top: %d\n",top);
	printf("ort: %d\n",ort);
	
	printf("bir not daha giriniz:");
	int ynot;
	scanf("%d",&ynot);
	int x=0;
		for(i=0;i<10;i++){
		if(ynot==a[i]){
		x=1;
		printf("not girilmis!");
	break;
		}}
	if(x==0){
	printf("not girilmemis");	}
	
}

