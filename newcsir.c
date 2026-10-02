#include<stdio.h>
void main(){
    int arr[5]={10,20,30,40,50};
    int max=arr[0];
    for(int i=0;i<5;i++){
        if (arr[i]>max){
        max = arr[i];
    }
    }
    printf("maximum element=%d",max);
}
