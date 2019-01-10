#include <stdio.h>
#include <stdlib.h> 
 
int main(){
        int a[5] = {1,2,3,4,5};
        for(int i=0;i<5;i++)
                printf("%d ",a[i]);
	int *b = (int *)malloc(sizeof(int)*5);
	b[3]=8;
	b[0]=2;
	*(b+1)=10;
	*(b+2)=11;
	b[4]=14;
	
		for(int i=0;i<5;i++)
			printf("%d ",b[i]);
}

