#include <stdio.h>

int main(){
    int arr[]={10,50,40,66,121,225,11,54,89};
    int arr2[10];
    int i ,j;
    for(i=0,j=9; i< 10 ; i++,j--){
        arr2 [j]= arr[i];

    }
    for(i=0; i<10; i++){
        printf("%d ",arr[i]);
    }
}