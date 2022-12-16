#include <stdio.h>
#include <time.h>

int main(){
    int n,i,j,counter=0,time_taken_m=0,time_taken_h=0;
    clock_t t;
    printf("Enter the number to which the prime numbers count: ");
    scanf("%d",&n);
    t=clock();
    for(i=2;i<=n;i++){
        for(j=2;j<=i;j++){
            if(i%j==0){
                break;
            }
        }
        if(j==i){
            counter++;
            printf("\n%d",i);
        }
    }
    t=clock()-t;
    int time_taken_s=t/CLOCKS_PER_SEC;
    time_taken_h=(time_taken_s/60)/60;
    time_taken_m=(time_taken_s/60)-(time_taken_h*60);
    time_taken_s=time_taken_s-((time_taken_m)*60);
    printf("\nThere is %d prime numbers in the interval [1,%d].\n",counter,n);
    printf("The program took %d hours, %d minutes and %d seconds to calculate.",time_taken_h,time_taken_m,time_taken_s);
    printf("\nEnd of program!");
    return 1;
}