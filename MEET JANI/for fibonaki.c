#include<stdio.h>
void main(){
	int n,i,n1,n2,n3;
	printf("enter the number:");
	scanf("%d",&n);
	printf("%d",0);
	for(i=3;i<=n;i++){
		n3=n1+n2;
		printf(",%d",n3);
		n1=n2;
		n2=n3;
		
	}
}

