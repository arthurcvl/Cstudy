#include <stdio.h>
#include <math.h>

// for now i will made the assumption that no decimal part 
// ficou faltando o opcional 0x ou 0X e faltou as letras do exadecimal poderem ser minusculas

int hexaConversion(char string[], int size);
void reverse(char string[], int size);

int main(){
    //just a test
    char string[] = {'1', 'A', '3'};
    printf("%s\n", string);
    int temp = hexaConversion(string, 3);
    printf("%d", temp);
}

int hexaConversion(char string[], int size){
    int temp;
    reverse(string, size);
    char c = string[0];
    int total = 0;
    for(int i = 0; i < size; i++, c = string[i]){
        // todos os digitos dos decimais são maiores que os digitos numericos
        // fazendo as contas na tabela ASCII o valor numerico de todos os numeros HEXADECIMAIS são 'hexa' - '7' 
        // isso acontece pois todos eles estão em ordem, um depois do outro
        temp = c > '9' ? c - '7' : c - '0';
        total += temp * pow(16, i);
    }
    return total;
}

void reverse(char string[], int size){
    int j = size - 1;
    char head, tail, temp;
    for(int i = 0; i < j; i++){
        temp = string[i];
        tail = string[j];
        string[i] = tail;
        string[j] = temp;
        j--;
    }
}