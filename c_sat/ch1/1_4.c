#include<stdio.h>
int main(){
    float f;
    printf("Enter the temperature(in F): ");
    scanf("%f",&f);
    float c = ((f-32)*5)/9;
    printf("The temperature in celcius: %0.2f",c);
}