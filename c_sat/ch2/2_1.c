#include<stdio.h>
int main(){
    int n;
    printf("Enter a five digit number: ");
    scanf("%d",&n);
    int sum=0;
    while(n>0){
        sum=sum+(n%10);
        n=n/10;
    }
    printf("Sum of the digits is: %d",sum);
}