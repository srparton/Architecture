#include <stdio.h>
#include <string.h>
int main(){
    int i = 5;
    if (i < 4){
        i++;
    }
    else if(i == 4){
        i+=6;
    }
    else{
        i = 100;
    }
    // printf("i = %d\n",i);
}
