#include <stdio.h>

int main()
{
    float i,j;
    int convert_i,convert_j;
    for(i=0; i<=2.1; i+=0.2){
        for(j=1; j<=3.00; j++){
            if((i>0.0 && i<1.0)){
                printf("I=%0.1lf J=%0.1lf\n",i,j+i);
            }else if((i>1.00 && i<2.0)){
                printf("I=%0.1lf J=%0.1lf\n",i,j+i);
            } else{
                convert_i = (int)i;
                convert_j = (int)j+i;
                printf("I=%d J=%d\n",convert_i,convert_j);
            }
        }
    }

    return 0;
}
