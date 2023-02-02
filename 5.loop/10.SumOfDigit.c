#include <stdio.h>

int main(){
     int n, sum=0,rem;
    printf("Enter Number: ");
    scanf("%d", &n);
    while(n!=0){
        rem=n%10;
        n=n/10;
        sum=sum+rem;
    }
    printf("%d",sum);
}