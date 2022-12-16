#include <stdio.h>
#include <stdlib.h>
#include <math.h>

typedef struct point{
    float x, y;
}POINT;

typedef struct triangle{
    POINT *p1, *p2, *p3;
    float perimeter;
}TRIANGLE;

int main(){
    TRIANGLE *t;
    int n, i, m, max_index;
    float max_perim;
    do{
        printf("Number of triangles: ");
        scanf("%d", &n);
    }while(n < 1 || n >= 11);
    m = 3 * n;
    t = (TRIANGLE *)malloc(n * sizeof(TRIANGLE));
    float e1, e2, e3, x1, x2, x3, y1, y2, y3;
    for(i = 0; i < n; i++){
        t[i].p1 = malloc(sizeof(float));
        if(t[i].p1 == NULL){
            printf("Error ...");
            return 0;
        }
        t[i].p2 = malloc(sizeof(float));
        if(t[i].p2 == NULL){
            printf("Error ...");
            return 0;
        }
        t[i].p3 = malloc(sizeof(float));
        if(t[i].p3 == NULL){
            printf("Error ...");
            return 0;
        }
        //t[i].p1 = ...
        printf("\nFirst point coordinates (Triangle %d): ", i+1);
        scanf("%f, %f", &t[i].p1->x, &t[i].p1->y);
        //t[i].p2 = ...
        printf("Second point coordinates (Triangle %d): ", i+1);
        scanf("%f, %f", &t[i].p2->x, &t[i].p2->y);
        //t[i].p3 = ...
        printf("Third point coordinates (Triangle %d): ", i+1);
        scanf("%f, %f", &t[i].p3->x, &t[i].p3->y);
        //e1 = ... p1, p2
        e1 = sqrt(pow((t[i].p2->x - t[i].p1->x), 2) + pow((t[i].p2->y - t[i].p1->y), 2));
        //e2 = ... p2, p3
        e2 = sqrt(pow((t[i].p3->x - t[i].p2->x), 2) + pow((t[i].p3->y - t[i].p2->y), 2));
        //e3 = ... p3, p1
        e3 = sqrt(pow((t[i].p1->x - t[i].p3->x), 2) + pow((t[i].p1->y - t[i].p3->y), 2));
        t[i].perimeter = e1 + e2 + e3;
        if(i == 0){
            max_index = 1;
            max_perim = t[i].perimeter;
            x1 = t[i].p1->x;
            x2 = t[i].p2->x;
            x3 = t[i].p3->x;
            y1 = t[i].p1->y;
            y2 = t[i].p2->y;
            y3 = t[i].p3->y;
        }
        else{
            if(t[i].perimeter > max_perim){
                max_index = i+1;
                max_perim = t[i].perimeter;
                x1 = t[i].p1->x;
                x2 = t[i].p2->x;
                x3 = t[i].p3->x;
                y1 = t[i].p1->y;
                y2 = t[i].p2->y;
                y3 = t[i].p3->y;
            }
        }
    }
    printf("\nMax index -> %d", max_index);
    printf("\nMax perimeter -> %.2f", max_perim);
    printf("\nMax perimeter coordinates -> [%.1f, %.1f] [%.1f, %.1f] [%.1f, %.1f]", x1, y1, x2, y2, x3, y3);
    for(i = 0; i < n; i++){
        free(t[i].p1);
        free(t[i].p2);
        free(t[i].p3);
    }
    free(t);
    return 0;
}