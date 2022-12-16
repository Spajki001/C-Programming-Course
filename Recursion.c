#include <stdio.h>

// N! = 1 * 2 * ... * (N - 1) * N
// N! = N * (N - 1) * ... * 2 * 1
// N! = N * (N - 1)!
// 0! = 1, 1! = 1

int Fibonacci(int N){
    if(N <= 1) return 1;
    return Fibonacci(N - 1) + Fibonacci(N - 2);
}

int factorial(int N){
    if(N > 1){
        printf("%d * ", N);
    }
    else{
        printf("1");
    }
    if(N <= 1) return 1;
    return N * factorial(N - 1);
}

int main(){
    int f;
    f = factorial(6);
    printf("\n6! = %d\n", f);
    printf("Fib(12) = %d\n", Fibonacci(12));
    return 0;
}