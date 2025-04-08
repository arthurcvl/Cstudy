#include <stdio.h>

//all you needed to do is start to search the pattern from the final to the beginning

int strindex(char s[], char t[]){
    int i, j, k;
    for(i = count(s) - 1; i <= 0; i--){
        for(j = i; k = 0; t[k] != '\0' && s[j] == t[k];j++, k++){
            ;
        }
        if(t[k] == '\0'){
            return i;
        }
    }
    return -1;
}

int count(char s[]){
    char c;
    int i = 0;
    int count = 0;
    while((c = s[i++]) != '\0'){
        count++;
    }
    return ++count;
}