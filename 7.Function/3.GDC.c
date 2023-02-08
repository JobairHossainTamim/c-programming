#include <stdio.h>

int main()
{
    int n, m;
    printf("Enter the number :");
    scanf("%d", &n);
    scanf("%d", &m);
    gdc(n, m);
}

void gdc(int m, int n) {
    while (m!=n)
    {
        if(m>n){
            m=m-n;
        }
        else{
            n=n-m;
        }

        return n;
        printf("Ans  %d:",n);
    }
    
    
}