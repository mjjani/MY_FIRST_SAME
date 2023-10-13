#include<stdio.h>
void main(){
	int n,count=0;
	printf("enter the number:");
	scanf("%d",&n);
	for(;n>=10;){
		n=n/10;
		count++;

		}
		printf("%d",count+1);
	}

