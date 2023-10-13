#include<stdio.h>
void main(){
	int n,i,ans;
	printf("enter the value of n:");
	scanf("%d",&n);
	for(i=n;i>0;i--){
		ans=ans*i;
	}
	printf("%d",ans);
}

