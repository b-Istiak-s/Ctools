#include<stdio.h>

void main(){
    int array[10]={0,1,2,3,4,5,6,7,8,9},x;

    for(int i=0;i<10;i++)
        printf("Array[%d] = %d\n",i,array[i]);

    for(int i=0;i<5;i++)
        scanf("%d",&array[i]);
    
    for(int i=0;i<10;i++)
        printf("Array[%d] = %d\n",i,array[i]);

}