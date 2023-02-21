#include <stdio.h>

int main(){
    int i, j;
    int total_mark[]={8,9,52,5,9,5};
    int mark_count[5];
    for(i=0; i<5; i++){
        mark_count[i]=0;
    }
    for(i=0; i<6; i++){
        mark_count[total_mark[i]++];
        for(j=0; j<=10 ; j++){
            printf("%d ", mark_count[j]);
        }
        printf("\n");
    }
}