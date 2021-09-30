#include <stdio.h>
#include <string.h>
#include <stdbool.h>
int main(){
    int i = 0;
    int arr[] = {1,2,3,4,5,6,7,8,9,10};
    int arrLen = 10;
    bool found = false;
    int key = 5;

    while(!found && i< arrLen){
        if(key == arr[i]) found = true;
        else{
            i++;
        }
    }
//     if(!found) printf("%d Was Not Found\n",key);
//     else  
//         printf("%d Was Found\n",key);
}
