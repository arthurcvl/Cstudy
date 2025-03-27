#include <stdio.h>


// A program to count the number of occurrences of each digit '0' to '9', of withe space chars(/n,/t ' ') and others
int main(){
    int white, others, c;
    int digits[10];
    white = others = 0;

    for(int i = 0; i < 10; i++){
        digits[i] = 0;
    }

    while((c = getchar()) != EOF){
        //se C estiver entre 0 e 9, nesse caso como é uma operação matematica os digitos são convertidos implicitamente para seus valores ASCII 
        if(c >= '0' && c <= '9'){
            /* o ++array[i] vai incrementar o valor que estiver dentro do array na posição i 
            ja em relação ao 'digito' - '0' isso funciona porque os digitos em operações numericas vão atuar como se fossem
            seus numeros ASCII e por exemplo 57(9) - 0(48) = 9 então qualquer digito(seu numero ascii) - 0(numero ascii) = proprio numero */
            ++digits[c - '0'];
        }
        else if(c == '\t' or c == '\n' or c == ' ')
            white++;
        else
            others++;
    }
    printf("\nDigits: ");
    for(int i = 0; i < 10; i++){
        printf("%d ", digits[i]);
    }
    printf(" White: %d  Others: %d\n", white, others);

}