#include <stdio.h>
int main(){
	int n=5;
	//printf("kacin faktoriyeli olsun");
	//scanf("%d",&n);
	int f = 1;

	for(int i = 1;i<=n;n++){
		f = f*i;
	}
	
	printf("%d ",f);
}

