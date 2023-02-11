#include "sort.h"
void Selectsort(int r[], int n){
	int i,j;
	for (i=0;i<n-1;i++){
		int min=i;
	for (j=i+1;j<n;j++)
		if(r[j]<r[min])min=j;
	if(min!=i){
		int temp=r[min];
		r[min]=r[i];
		r[i]=temp;
	}
	} 
}

int Selectsortmain()
{
   
    printf("选择排序前\n");
    Print(arr,N);
    printf("\n");
    Selectsort(arr,N);
    printf("选择排序后\n");
    Print(arr,N);
    printf("\n");
    return 0;
}
