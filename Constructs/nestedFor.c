#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(){
    int arr[] = {11,2,4,100,5,6,99,77,42,1};
    int arrLen = 10;
    int temp;

    for (int i = 0; i<arrLen; i++){
        for(int j = 0; j < arrLen; j++){
            if(arr[j] < arr[i]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }

    // for(int i = 0; i < arrLen; i++){
        // printf("arr[%d] = %d\n",i,arr[i]);
    // }
}
