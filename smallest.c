#include <stdio.h>

int smallest(int array[], int size){
    int i, smallestNum, smallestLoc;
    i = 0;
    smallestNum = 2147483647; //max int
    smallestLoc = 2147483647; //max int

    while(i < size){
        if (smallestNum > array[i]){
            smallestNum = array[i];
            smallestLoc = i;
        }
        i++;
    }
    return smallestLoc;
}

int main(){
    int array[5] = {1,2,99,5,44};

    int smallestNumIndex;

    smallestNumIndex = smallest(array,5);
    printf("Smallest number's location = %d\n",smallestNumIndex);
    printf("Smallest number = %d\n",array[smallestNumIndex]);
    return 0;
}