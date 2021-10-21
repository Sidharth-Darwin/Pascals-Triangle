#include <stdio.h>
void main(){
    int array1[20],array2[20],base=1;
    for(int i=0;i<10;i++){
        if(i%2!=0){
            base+=1;
            array1[0]=1;
            for(int s=1;s<i-1;s++){
                array1[s]=array2[s-1]+array2[s]; 
            }
            array1[i-1]=1;
            for(int j=0;j<i;j++){
                printf("%d ",array1[j]);
            }
            printf("\n");
        }else{
            base+=1;
            array2[0]=1;
            for(int s=1;s<i-1;s++){
                array2[s]=array1[s-1]+array1[s];                
            }
            array2[i-1]=1;
            for(int j=0;j<i;j++){
                printf("%d ",array2[j]);
            }
            printf("\n");
        }
        

    }

}

/*
1 
1 1
1 2 1
1 3 3 1
1 4 6 4 1
1 5 10 10 5 1
1 6 15 20 15 6 1
1 7 21 35 35 21 7 1
1 8 28 56 70 56 28 8 1
*/
