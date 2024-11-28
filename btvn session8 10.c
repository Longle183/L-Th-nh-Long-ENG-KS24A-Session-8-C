#include<stdio.h>
int main(){
	int arr[]={1,2,1,2,4,1,4,7,9,2};
	int result[100]={0};
	int maxCount;
	int index=0;
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
		}
	}
	for(int i=0;i<lengthArr;i++){
		int count=0;
		for(int j=0;j<lengthArr;j++){
			if(arr[i]==arr[j]){
				count++;
			}
		}
		if(count==maxCount){
			int flag=-1;
			for(int k=0;k<100;k++){
				if(arr[i]==result[k]){
					flag=1;
					break;
				}
			}
			if(flag==-1){
				result[index]=arr[i];
				index++;	
			}
			flag=-1;
		}
	}
	for(int i=0;i<index;i++){
		printf("Phan tu xuat hien nhieu nhat %d voi so lan %d \n",result[i],maxCount);
	}
	return 0;
}
