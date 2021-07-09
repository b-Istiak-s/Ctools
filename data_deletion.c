#include<stdio.h>
void main(){
	int a[8]={2,5,7,4,7,5,3,1},i,index,size=8;
	
	scanf("%d",&index);
	
	for(i=index;i<size-1;i++)
		a[i] = a[i+1];
	size--;
	
	for(i=0;i<7;i++)
		printf("Array[%d] %d \n",i,a[i]);
	
}
