#include <stdio.h>
#include <stdlib.h>
#include <math.h>

void x1x2(float a, float b, float c, float *s1, float *s2){
    *s1=(-b-sqrt(b*b-4*a*c))/(2*a);
    *s2=(-b+sqrt(b*b-4*a*c))/(2*a);  
}

int main(){
    float x1=0, x2=0, a, b, c;
    printf("Enter a, b, c: ");
    scanf("%f%f%f", &a, &b, &c);
    printf("(B4) x1; %.2f, x2: %.2f\n", x1, x2);
    x1x2(a, b, c, &x1, &x2);
    printf("(After) x1: %.2f, x2: %.2f\n", x1, x2);
    return 0;
}