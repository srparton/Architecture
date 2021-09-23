#include <stdio.h>
int binarySearch(int low, int high, int size, int key, int arr[]){
    int mid;
    if(low>high){
        return 0;
    }
    else{
        mid = (low+high)/2;
        // printf("mid = %d\n",mid);
        if(key==arr[mid]){
            return mid;
        }
        else if(key < arr[mid]){
            return binarySearch(low,mid-1,size,key,arr);
        }
        else    
            return binarySearch(mid+1,high,size,key,arr);
        }

}

int main(){
    int waldo[10] = {1,2,3,4,5,6,7,8,9,10};

    printf("Waldo is at %d",binarySearch(0,10,10,4,waldo));

    return 0;
}
