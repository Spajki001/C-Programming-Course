#include <stdio.h>
#include <stdlib.h>

typedef struct point{
    float x;
    float y;
    float z;
}POINT;

int main(){
    POINT *ptr;
    float x_max, y_max, z_max=0;
    int i_max, i;
    ptr=(POINT*)calloc(3, sizeof(POINT));
    for(i=1;i<=10;i++){
        switch(i){
            case 1:
                printf("Define X for %dst point: ", i);
                scanf("%f", &ptr->x);
                printf("Define Y for %dst point: ", i);
                scanf("%f", &ptr->y);
                printf("Define Z for %dst point: ", i);
                scanf("%f", &ptr->z);
                printf("\n");
                break;
            case 2:
                printf("Define X for %dnd point: ", i);
                scanf("%f", &ptr->x);
                printf("Define Y for %dnd point: ", i);
                scanf("%f", &ptr->y);
                printf("Define Z for %dnd point: ", i);
                scanf("%f", &ptr->z);
                printf("\n");
                break;
            case 3:
                printf("Define X for %drd point: ", i);
                scanf("%f", &ptr->x);
                printf("Define Y for %drd point: ", i);
                scanf("%f", &ptr->y);
                printf("Define Z for %drd point: ", i);
                scanf("%f", &ptr->z);
                printf("\n");
                break;
            default:
                printf("Define X for %dth point: ", i);
                scanf("%f", &ptr->x);
                printf("Define Y for %dth point: ", i);
                scanf("%f", &ptr->y);
                printf("Define Z for %dth point: ", i);
                scanf("%f", &ptr->z);
                printf("\n");
                break;
        }
        if(ptr->z>z_max){
            x_max=ptr->x;
            y_max=ptr->y;
            z_max=ptr->z;
            i_max=i;
        }
    }
    printf("----------------------------\n");
    printf("Index -> %d", i_max);
    printf("\nX -> %.2f", x_max);
    printf("\nY -> %.2f", y_max);
    printf("\nZ -> %.2f", z_max);
    free(ptr);
    return 0;
}