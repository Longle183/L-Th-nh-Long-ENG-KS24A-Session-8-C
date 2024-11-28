#include<stdio.h>
int main(){
	int num[]={1,3,5,7,9};
	int size = sizeof(num)/sizeof(num[0]);
	for(int i=size-1;i>=0;i--){
		printf("%d ",num[i]);
	}
	return 0;
}
