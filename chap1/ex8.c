#include <stdio.h>

//Program to count blanks, tabs and newlines
int main(){
    int c;
    int count = 0;

    while((c = getchar()) != EOF){
        if(c == '\n' || c == '\t' || c == ' ')
            count++;
    }
    printf("\nBlanks, Tabs and Newlines = %d\n", count);
}