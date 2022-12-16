#include <stdio.h>
#include <math.h>

typedef struct komplex{
    float real;
    float imaginary;
}KOMPLEX;
//quotient product 
int main(){
    KOMPLEX num1, num2, res;
    printf("Input the first real number: ");
    scanf("%f", &num1.real);
    printf("Input the first imaginary number: ");
    scanf("%f", &num1.imaginary);
    printf("Input the second real number: ");
    scanf("%f", &num2.real);
    printf("Input the second imaginary number: ");
    scanf("%f", &num2.imaginary);
    //Addition
    res.real=num1.real+num2.real;
    res.imaginary=num1.imaginary+num2.imaginary;
    printf("\nSum -> %.2f + %.2fi",res.real,res.imaginary);
    //Subtraction
    res.real=num1.real-num2.real;
    res.imaginary=num1.imaginary-num2.imaginary;
    if(res.imaginary<0){
        printf("\nDifference -> %.2f - %.2fi", res.real, (res.imaginary*(-1)));
    }
    else{
        printf("\nDifference -> %.2f + %.2fi", res.real, res.imaginary);
    }
    //Multiplication
    res.real=(num1.real*num2.real)-(num1.imaginary*num2.imaginary);
    res.imaginary=(num1.real*num2.imaginary)+(num1.imaginary*num2.real);
    if(res.imaginary<0){
        printf("\nProduct -> %.2f - %.2fi", res.real, (res.imaginary*(-1)));
    }
    else{
        printf("\nProduct -> %.2f + %.2fi", res.real, res.imaginary);
    }
    //Division
    res.real=((num1.real*num2.real)+(num1.imaginary*num2.imaginary));
    res.imaginary=((num1.imaginary*num2.real)-(num1.real*num2.imaginary));
    printf("\nQuotient -> (%.2f + %.2fi) / %.2f", res.real, res.imaginary, (pow(num2.real,2) + pow(num2.imaginary,2)));
    //Module
    res.real=sqrt(pow(num1.real,2)+pow(num1.imaginary,2));
    printf("\nModule -> %.2f", res.real);
    return 0;
}