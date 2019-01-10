#include <stdio.h>
int main(){
	int n;
	
	printf("bir sayi giriniz :");	
	scanf("%d",&n);
	int i;
	int c=0;
	
for(i=1;i<n;i=i*2){
	c++;
	printf("%di, %dn,%dc \n",i,n,c);
		
	}
		printf("%d\n",c);
}
	


