#include <stdio.h>

//rewrite te func lower to not use if else

int lower(int c);

int main(){
    char c;
    scanf("%c", &c);

    c = lower(c);
    printf("\n%c\n", c);

}

int lower(int c){
    return c > 'Z' ? c : c + 32;
}