#include <stdio.h>

#define arraySize 1000000

/* a program to remove all comments from a c program, since dont know any way to read from an external c file 
i will read the c program as a input using getchar and putting these files in an array at the same time i create an array 
whit the label array positions (that contain a /) to find the places with potential comments and after just remove theses from the array*/

// pra simplificar eu so vou considerar comentarios como // 

void readProgram(char array[]);
void findSlashSlash(char array[]);
void findBackSlash(char array[]);
void removeArrayInt(int array[], int index, int size);
void removeArrayChar(char array[], int index, int size);

int main(){
    char array[arraySize];
    readProgram(array);
    findSlashSlash(array);
    findBackSlash(array);
    printf("\n\n\n\n\n\n");
    printf("%s", array);
    
    

}

void readProgram(char array[]){
    char c;
    for(int i = 0; (c = getchar()) != EOF; i++){
        array[i] = c;
    }
}

void findSlashSlash(char array[]){
    for(int i = 0; i < arraySize; i++){
        if(array[i] == '/' && array[i + 1] == '/'){
            int j = i;
            char c = array[j];
            while(c != '\n'){
                removeArrayChar(array, j, arraySize);
                c = array[j];
            }
        }
    }
}

void findBackSlash(char array[]){
    for(int i = 0; i < arraySize; i++){ 
        if(array[i] == '/' && array[i + 1] == '*'){
            int j = i;
            char c = array[j];
            printf("\n------------ %c --------------\n", c);
            while(c != '*' || (array[j + 1]) != '/'){
                removeArrayChar(array, j, arraySize);
                c = array[j];
            }
            removeArrayChar(array, j, arraySize); // remove /
            removeArrayChar(array, j, arraySize); // remove *
        }
    }
}


void removeArrayInt(int array[], int index, int size){
    for(int i = index + 1; i < size; i++){
        array[i - 1] = array[i];
    }
    array[size - 1] = 0;
}

void removeArrayChar(char array[], int index, int size){
    for(int i = index + 1; i < size; i++){
        array[i - 1] = array[i];
    }
    array[size - 1] = '0';
}
