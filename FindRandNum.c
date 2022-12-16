#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define MIN 0
#define MAX 1000
#define COUNT 500

int rand_num()
{
    return (int)((rand() / (float)RAND_MAX) * (MAX - MIN)) + MIN;
}

void write_rand_to_file(char *file_name)
{
    FILE *file = fopen(file_name, "w");
    if (file == NULL)
    {
        printf("Failed to open the file\n");
        return;
    }
    for (int i = 0; i < COUNT; i++)
    {
        fprintf(file, "%d\n", rand_num());
    }

    fclose(file);
}

int *read_from_file(char *file_name)
{
    FILE *file = fopen(file_name, "r");
    if (file == NULL)
    {
        printf("Failed to open the file\n");
        return NULL;
    }

    int *base_ptr = calloc(COUNT, sizeof(int));

    int *ptr = base_ptr;
    for (int i = 0; i < COUNT; i++)
    {
        fscanf(file, "%d", ptr);
        ptr++;
    }

    fclose(file);
    return base_ptr;
}

int main(void)
{
    srand((unsigned)time(NULL));

    int n;
    do
    {
        printf("Input the number within [0,1000]: ");
        scanf("%d", &n);
    } while (n < MIN || n > MAX);

    write_rand_to_file("./TextAndBinaryFiles/FindRandNum.txt");

    int *base_ptr = read_from_file("./TextAndBinaryFiles/FindRandNum.txt");
    if (base_ptr == NULL)
    {
        printf("Failed to read numbers from file\n");
        return 1;
    }

    int *ptr = base_ptr;
    for (int i = 0; i < COUNT; i++)
    {
        int num = *ptr;
        if (num == n)
        {
            printf("Number %d is found after %d steps with the index of %d.\n", num, i + 1, i);
            free(base_ptr);
            return 0;
        }
        ptr++;
    }

    printf("Number %d is not found.\n", n);
    free(base_ptr);
    return 0;
}