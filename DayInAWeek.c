#include <stdio.h>
#include <string.h>

int i,j,max=0;
char* days[]={"Monday","Tuesday","Wednesday","Thursday","Friday","Saturday","Sunday"};

int count_consonant(){
    int consonant,d;
    char ch;
    for(i=0;i<7;i++){
        consonant=0;
        char* str=(*(days+i));
        for(j=0;str[j]!='\0';j++){
            ch=str[j];
            if(ch!='a'&&ch!='e'&&ch!='i'&&ch!='o'&&ch!='u'&&ch!='A'&&ch!='E'&&ch!='I'&&ch!='O'&&ch!='U'){
                consonant++;
            }
        }
        if(consonant>=max){
            max=consonant;
            d=i;
        }
    }
    char* t_day=*(days+d);
    int l=strlen(t_day);
    for(int i=l-1;i>=0;i--){
        printf("%c",t_day[i]);
    }
}

int main(){
    int d;
    do{
        printf("Input the number of the day: ");
        scanf_s("%d", &d);
        if(d<1||d>7){
            printf("\nWrong day number!\n");
        }
    }while(d<1||d>7);
    printf("The day is %s\n",*(days+(d-1)));
    count_consonant();
    return 1;
}