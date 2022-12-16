#include <stdio.h>
#include <stdarg.h>

float calcAverage(int count, ...){
    float average = 0;
    va_list mylist;
    va_start(mylist, count);
    for(int i = 0; i < count; i++){
        average += va_arg(mylist, int);
    }
    va_end(mylist);
    return (average / count);
}

int main(){
    printf("Average 1: %.2f\n", calcAverage(4, 4, 5, 3, 5));
    printf("Average 2: %.2f\n", calcAverage(6, 4, 5, 3, 5, 3, 3));
    return 0;
}