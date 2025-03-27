#include <stdio.h>

#define max 100

void reverse(char array[]);
void lineGetter(char array[], int);

int main(){
    char array[max];
    lineGetter(array, max);
    printf("%s", array);
    reverse(array);
    printf("%s", array);
}

void lineGetter(char array[], int maxLength){
    int c, i;
    for(i = 0; i < maxLength - 1 && (c = getchar()) != EOF && c != '\n'; i++){
        array[i] = c;
    }
    if(c == '\n'){
        array[i] = c;
        i++;
    }
    array[i] = '\0';
    return;
}

void reverse(char array[]){
    int head, tail;
    tail = head = 0;
    // e um for pra eu encontrar o ultimo char do array usando o fato de que os chars reais do array 'terminam' no index de '\n'
    char c = array[0];
    for(int i = 1; c != '\n'; i++){
        tail++;
        c = array[i];
    }
    // tail-- porque o tail vai parar na posição que o \n esta
    tail--; 
    // aqui e so um reverse array banal  
    while(head < tail){
        c = array[head];
        array[head] = array[tail];
        array[tail] = c;
        tail--;
        head++;
    }
}