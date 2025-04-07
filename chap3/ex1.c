#include <stdio.h>

int binarySearch(int x, int v[], int length);

int main(){
    //just a test here
    int v[] = {1,2,3};
    printf("%d", binarySearch(2,v,3));
}


int binarySearch(int x, int v[], int length){
    int low = 0;
    int high = length - 1;
    int mid;
    while(low <= high && (mid = (low + high) / 2) != x){
        if(x < v[mid]){
            high = mid - 1;
        }
        else{
            low = mid + 1;
        }
    }
    if(mid == x){
        return mid;
    }
    return -1;
}