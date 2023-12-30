#include<stdio.h>
#include<math.h>
int main(){
    int a,b,c;
    printf("Enter the sides of the triangle: ");
    scanf("%d %d %d",&a,&b,&c);
    float s =(a+b+c)*0.5;
    float area=sqrt(s*(s-a)*(s-b)*(s-c));
    printf("Area of the triangle is: %0.2f",area);
}