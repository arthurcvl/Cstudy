//write the functino strend(s, t) which returns 1 if the string t occurs at the end of the string s, and zero otherwise

#include <stdio.h>

int mystrend(char *s,char *t);

int main(){
    char s[] = "hello";
    char t[] = "lso";
    printf("%d", mystrend(s, t));
}

int mystrend(char *s, char *t){
    int i = 0;
    while(*s)
        s++;
    while(*(t + i)){
        s--;
        i++;
    }
    while(*s++ == *t++){
        if(!*s){
            return 1;
        }
    }
    return 0;

}

