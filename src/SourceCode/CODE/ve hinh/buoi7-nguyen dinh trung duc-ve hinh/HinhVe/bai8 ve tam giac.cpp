/* bai 8 ve tam giac vuong nguoc phai rong */

#include<stdio.h>
int main (){
	int i,j,n;
	scanf("%d", &n);
	for(i=1;i<=n;i++){
		for(j=1;j<i;j++){
			printf("~");
		}
		for(j=1;j<=n-i+1;j++){
			if(i==1||j==n-i+1)
			printf("*");
			else printf(".");
		}
		printf("\n");
	}
}

