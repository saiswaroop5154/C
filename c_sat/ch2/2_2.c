#include<stdio.h>
int main(){
    int n;
    printf("Enter a 5 digit number: ");
    scanf("%d",&n);
    int x=0;
    while(n>0){
        x=(x*10+(n%10));
        n=n/10;
    }
    printf("%d",x);
}