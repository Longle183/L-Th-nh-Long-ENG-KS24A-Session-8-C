#include<stdio.h>
int main(){
	int x;
	printf("Moi ban nhap kich thuoc ma tran vuong: ");
	scanf("%d",&x);
	int num[x][x];
	for(int i=0;i<x;i++){
		for(int j=0;j<x;j++){
			printf("num[%d][%d] = ",i,j);
			scanf("%d",&num[i][j]);
		}
	}
	for(int i=0;i<x;i++){
		for(int j=0;j<x;j++){
			printf("%d ",num[i][j]);
		}
		printf("\n");
	}
	return 0;
}
