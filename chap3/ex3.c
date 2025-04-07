#include <stdio.h>

//a function that expands notations like a-z in s1 to abcde...xyz in s2
//for now i will consider that the user will type correctly

void expand(char s1[], char s2[]);

int main(){
    char set[] = {'a','-','z'};
    char set2[1000];
    expand(set, set2);
    printf("%s", set2);
}

void expand(char s1[], char s2[]){
    char c;
    int i = 0;
    int index = 0;
    while((c = s1[i++]) != '\0' && s1[i] == '-'){
        int asciiNumber = s1[i + 1] - c;
        for(int j = 0; j <= asciiNumber; j++){
            s2[index++] = c + j;
        }
    }
    s2[index] = '\0';
}