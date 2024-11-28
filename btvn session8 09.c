#include<stdio.h>
int main(){
	int arr[]={1,2,1,2,4,1,2,7,9,2};
	int maxCount;
	int maxItem;
	int lengthArr=sizeof(arr)/sizeof(arr[0]);
	for(int i=0;i<lengthArr;i++){
		int count=0;
		for(int j=0;j<lengthArr;j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
		if(count>maxCount){
			maxCount=count;
			maxItem=arr[i];
		}
	}
	printf("Phan tu co gia tri la: %d xuat hien so lan nhieu nhat %d",maxItem,maxCount);
	return 0;
}
