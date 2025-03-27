#include <stdio.h>

#define max 300
// rewrite section 1.2 conversion program to use a function for conversion

int conversion(int);

int main(){
    printf("Fahr - Celsius\n");
    for(int fahr = 0; fahr <= max; fahr += 20){
        printf("%4d - %7d\n", fahr, conversion(fahr));
    }
}

int conversion(int fahr){
    return 5 * (fahr - 32) / 9;
}