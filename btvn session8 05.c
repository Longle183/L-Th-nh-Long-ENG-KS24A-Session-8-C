#include <stdio.h>
int main(){
    int num[4][4]={
        {1,2,3,4},
        {5,6,7,8},
        {9,10,11,12},
        {13,14,15,16}
    };
    int rows=4;
    int cols=4;
    int tong=0;
    for (int i=0;i<rows;i++){
        for(int j=0;j<cols;j++){
            if(i==0||i==rows-1||j==0||j==cols-1){
                tong+=num[i][j];
            }
        }
    }
    printf("Tong cac phan tu tren duong bien la: %d",tong);
    return 0;
}
