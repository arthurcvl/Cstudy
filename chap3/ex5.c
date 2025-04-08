#include <stdio.h>


// a function that take a number n(in decimal / base 10) and converts it to a base b and add that number as digits in a string

void itob(int n, char s[], int b);
void reverse(char s[], int length);
int count(char s[]);

int main(){
    char s[100];
    itob(419, s, 8);
    reverse(s, count(s));
    printf("%s\n", s);
}

void itob(int n, char s[], int b){
    int converted;
    int i = 0;
    char hexa;
    do{
        converted = n % b;
        char hexa = converted >= 10 ? converted + '7' : converted + '0';
        s[i++] = hexa;
    }while((n /= b) >= b);
    hexa = n >= 10 ? n + '7' : n + '0';
    s[i++] = hexa;
    s[i] = '\0';
}

void reverse(char s[], int length){
    int start = 0;
    int end = length - 2;
    char temp;
    while(start < end){
        temp = s[start];
        s[start] = s[end];
        s[end] = temp;
        start++;
        end--;
    } 
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