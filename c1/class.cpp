#include <stdio.h>
#include <stdlib.h>
void Print(int A[],int N){
	int i;
	for (i=0;i<N;i++)
		printf("%d ",A[i]);
}
	
void Swap(int* a,int* b){
	int temp;
	temp=*a;
	*a=*b;
	*b=temp;
}
