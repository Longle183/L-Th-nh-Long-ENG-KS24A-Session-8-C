#include<stdio.h>
int main(){
	int num[3][3]={
	{18,3,6},
	{12,1,61},
	{24,2,71}
	};
	int max=num[0][0];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			if(num[i][j]>max){
				max=num[i][j];
			}
		}
	}
	printf("Phan tu lon nhat trong mang la: %d\n",max);
	return 0;
}
