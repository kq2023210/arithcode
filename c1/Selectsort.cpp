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
   
    printf("ѡ������ǰ\n");
    Print(arr,N);
    printf("\n");
    Selectsort(arr,N);
    printf("ѡ�������\n");
    Print(arr,N);
    printf("\n");
    return 0;
}
