#include <stdio.h>
// a pointer version of the funcion strcat in chap 2

void mystrcat(char *s, char *t);

int main(){
    //just a test
    char s[100] = {'H', 'e', 'l', 'l', 'o', '\0'};
    char t[] = ",World";
    mystrcat(s, t);
    printf("%s", s);
}

void mystrcat(char *s, char *t){
    while(*s)
        s++;
    while(*s++ = *t++)
        ;
}