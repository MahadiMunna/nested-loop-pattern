#include <stdio.h>

int main(){
    int n;
    scanf("%d",&n);
    int k=n,s=1;
    for(int i=0;i<n;i++){
        for(int j=0;j<k;j++){
            printf(" ");
        }
        for(int j=0;j<s;j++){
            printf("*");
        }
        printf("\n");
        k--;
        s+=2;
    }
    return 0;
}