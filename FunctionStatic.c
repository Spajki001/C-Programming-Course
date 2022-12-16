#include <stdio.h>

int countCalls(){
    static int c = 0;
    c++;
    return c;
}

int main(){
    for(int i = 0; i < 100; i++){
        countCalls();
    }
    printf("Function called %d times.\n", countCalls());
    //Funkcija ispisuje "101 times" jer poziva countCalls 101. put u printf komandi.
    return 0;
}