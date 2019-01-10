#include <stdio.h>
int main(){
	int n=0;
	int top=0;
	int c=0;
	while(n>=0){
	printf("yasinizi girin:");
	scanf("%d",&n);
	printf("yasiniz:%d\n",n);
	c++;
	top=top+n;
}
	c--;
	printf("ortalama :%f",(float)top/(float)c);
	printf("toplam :%d",top);

}

