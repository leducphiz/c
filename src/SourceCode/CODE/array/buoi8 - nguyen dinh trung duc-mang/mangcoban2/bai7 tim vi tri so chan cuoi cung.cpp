/* bai 7 tim vi tri so chan cuoi cung */

#include<stdio.h>
int main(){
	int n;
	scanf("%d", &n);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d", &a[i]);
	}
	for(int i=n-1; i>=0;i--){
		if(a[i]%2==0){
			printf("%d", i+1);
			return 0;
		}
	}
		printf("-1");
	return 0; 
}
