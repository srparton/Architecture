#include <stdio.h>
int main(){
    int arr[10][10];

     for(int i = 0; i < 10; i++){
       for(int j = 0; j < 10; j++){
         arr[i][j] = i + j + 1;
       }
     }

    for (int row=0; row < 10; row++){
      for (int col=0; col < 10; col++){
        if(arr[row][col] < 10){
          printf(" %d ", arr[row][col]);
        }
        else
          printf(" %d", arr[row][col]);
      }
      printf("\n");
    }
}
