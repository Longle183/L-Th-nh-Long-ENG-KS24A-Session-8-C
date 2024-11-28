#include<stdio.h>
int main(){
	int num[]={2,4,6,8,10};
	int size = sizeof(num)/sizeof(num[0]);
	int x;
	int yes=0;
	printf("Nhap phan tu can tim: ");
	scanf("%d",&x);
	for(int i=0;i<size;i++){
		if(num[i]==x){
			printf("Vi tri phan tu trong mang la: %d\n",i);
			yes=1;
			break;
		}
	}
	if(!yes){
		printf("Phan tu khong ton tai trong mang\n");
	}
	return 0;
}
