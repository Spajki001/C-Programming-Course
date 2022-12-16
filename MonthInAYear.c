#include <stdio.h>
#include <string.h>

int main(){
    int m,t=0;
    float max=0, sr_vr;
    char *months[]={"January","February","March","April","May","June","July","August","September","October","November","December"};
    do{
        printf("Input the number of the month: ");
        scanf_s("%d", &m);
        if(m<1||m>12){
            printf("\nWrong month number!\n");
        }
    }while(m<1||m>12);
    printf("The month is %s\n",*(months+(m-1)));
    for(int i=0;i<12;i++){
        sr_vr=(strlen(*(months+i))/12.0f);
        if(sr_vr>max){
            max=sr_vr;
            t=i;
        }
    }
    printf("Average value is %f\n",max);
    char *t_month=*(months+t);
    int l=strlen(t_month);
    for(int i=l-1;i>=0;i--){
        printf("%c", t_month[i]);
    }
    return 1;
}