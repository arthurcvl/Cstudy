#include <stdio.h>

#define lim 10

// write the example for loop without && and ||
int main(){
    char c;
    char s[lim];
    for(int i = 0; ((i <lim - 1) + ((c = getchar()) != '\n') + (c != EOF)) == 3; i++){
        s[i] = c;
    }
    printf("%s", s);
}