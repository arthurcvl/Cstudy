#include <stdio.h>
#include <ctype.h>

#define NUMBER '0'
// the scope of a define is from definition to the end of the source file being compiled

//modify getop so it doesnt need to ungetch, to it use an internal static variable
// why is important the fact that buffer is 'static': 
/* because with static make the variable be allocated in data segment not in the functionstack frame
so it stay in memory even after the function stack frame is deallocated*/
// with static you also restrict the acess to the buffer to the only function that uses and controls it, not used in this case
//be cause the variable its alredy local

int getch(void);
void ungetch(int);

int getop(char s[]){
    int i, c;
    static int buffer = 0;

    if(buffer == 0){
        c = getch();
    }
    else{
        c = buffer;
        buffer = 0;
    }
    while((s[0] = c) == ' ' || c == '\t')
            c = getch();
    if(!(isdigit(c)) && c != '.'){
        s[1] = '\0';
        return c;
    }
    i = 0;
    if(isdigit(c)){
        while(isdigit(s[++i] = c = getch()))
        ;
    }
    if(c == '.'){
        while(isdigit(s[++i] = c = getch()))
        ;
    }
    s[i] = '\0';
    if(c != EOF){
        buffer = c;
    }
    return NUMBER;
}