#include <stdio.h>
int main(){
    int arr[30];
        int j = 0;

    for(int i = 1; j<30; i+=2){
        arr[j++] = i;
        // printf("arr[%d] = %d\n",j-1,arr[j-1]);
    }
}