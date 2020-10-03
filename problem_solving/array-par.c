#include <stdio.h>

int main(){
    int input[15], par[5], impar[5];
    int g, h, i, j, k, imcount=0, count=0, l=0, m=0;
    for(i=0; i<15; i++){
        scanf("%d",&input[i]);
    }


    for(i=0; i<15; i++){

        if(count==5){
            for(j=0; j<5; j++){
                printf("par[%d] = %d\n",j,par[j]);
            }
            count=0;
        }
        if(imcount==5){
            for(k=0; k<5; k++){
                printf("impar[%d] = %d\n",k,impar[k]);
            }
            imcount=0;
        }

        if(input[i]%2==0){ 
            // even par[0] = input[0]
            // even par[1] = input[2]
            // even par[2] = input[6]
            // even par[3] = input[12]
            // even par[4] = input[14]
            par[l] = input[i];
            ++l;
            count++;
            if(l==5){
                l=0;
            }
        } 
        if(input[i]%2==1 || input[i]%2==-1){
            impar[m] = input[i];
            ++m;
            imcount++;
            if(m==5){
                m=0;
            }
        }
        
        
    }
    if(imcount>count){
        for(g=0; g<imcount; g++){
            printf("impar[%d] = %d\n",g,impar[g]);
        }
        for(h=0; h<count; h++){
            printf("par[%d] = %d\n",h,par[h]);
        }
        
    } else if(count>imcount){
        for(h=0; h<count; h++){
            printf("par[%d] = %d\n",h,par[h]);
        }
        for(g=0; g<imcount; g++){
            printf("impar[%d] = %d\n",g,impar[g]);
        }
    }
    return 0;
}