#include <stdio.h>
int main(){
    int num[3][3]={
        {2,5,7},
        {1,4,9},
        {3,6,8}
    };
    int n=3;
    int tong=0;
    printf("Cac phan tu tren duong cheo chinh la:\n");
    for(int i=0;i<n;i++){
        printf("%d ",num[i][i]);
        tong+=num[i][i];
    }
    printf("Tong cac phan tu tren duong cheo chinh la: %d\n",tong);
    return 0;
}

