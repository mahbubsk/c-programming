#include <stdio.h>


int main(){
    int i, j, input, position, min;
    int array[1000];
    scanf("%d",&input);

    for(i=0; i<input; i++){
        scanf("%d",&array[i]);
    }

    for(i=0; i<input; i++){
        min = array[position];
        if(min>array[i]){
            min = array[i];
            position=i;
            min = array[position];
        }
    }
    printf("Menor valor: %d\nPosicao: %d\n",min,position);
    
    return 0;
}
