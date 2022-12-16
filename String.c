#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int myStrLen(char *s) {
    int i = 0;
    while(s[i] != '\0') i++;
    return i;
}

char *myStrCopy(char *source) {
    char *newString;
    int i = 0;
    int sourceLength = myStrLen(source);
    newString = (char *)malloc(sourceLength + 1);
    while(source[i] != '\0') {
        newString[i] = source[i];
        i++;
    }
    newString[i] = '\0';
    return newString;
}

char *numStrCopy(char *s, char *d) {
    char *saved = d;
    while (*s)
    {
       *d++ = *s++;
    }
    *d = 0;
    return saved;
}

int myStrCmp(char *s1, char *s2) {
    int i = 0;
    while(s1[i] != '\0' && s2[i] != '\0') {
        if(s1[i] < s2[i]) return -1;
        if(s1[i] > s2[i]) return 1;
        i++;
    }
    if(myStrLen(s1) == myStrLen(s2)) return 0;
    if(myStrLen(s1) < myStrLen(s2)) return -1;
    if(myStrLen(s1) > myStrLen(s2)) return 1;
}

int main(int argc, char const *argv[])
{
    char myString[1024];
    char *otherString;
    char s1[] = "johntra ";
    char s2[] = "Johntra ";
    int i;
    printf("Enter some string: ");
    fgets(myString, 1024, stdin);
    i = 0;
    while(myString[i] != '\n' && i < 1023) i++;
    myString[i] = '\0';
    numStrCopy(myString, otherString);
    printf("Copied string: %s\n", otherString);
    free(otherString);
    printf("Result: %d\n", myStrCmp(s1, s2));
    return 0;
}