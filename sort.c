#include <stdio.h>

int part(int low, int high, int array[]){
    int i,j,piviotItem,temp,piviotpoint;

    piviotItem = array[low];
    j = low;
    for(i = low+1; i<=high; i++){
        if(array[i]<piviotItem){
            j++;
            temp = array[i];
            array[i] = array[j];
            array[j] = temp;
        }
    piviotpoint = j;
    array[low] = array[piviotpoint];
    array[piviotpoint] = piviotItem;
    printf("piviotpoint = %d piviotItem = %d array[%d] = %d\n",piviotpoint,piviotItem,low,array[low]);
    }
    return piviotpoint;
}

void quickSort(int low,int high,int array[]){
    int pi;
    int piviotpoint;
    if(low < high){
        // printf("low = %d\nhigh = %d\n",low,high);
        piviotpoint = part(low,high,array);
        quickSort(low,piviotpoint-1,array);
        quickSort(piviotpoint+1,high,array);
    }
}

int main(){
    // int myArray[10] = {1,33,20,77,3,10,99,42,11,12};
    int myArray[2] = {3,2};

    // int sortedArray[10];
    // sortedArray[] = quickSort(0,10,myArray);
    quickSort(0,2,myArray);

    for(int i = 0; i<=2; i++){
        printf("myArray[%d] = %d\n",i,myArray[i]);
    }

    return 0;
}