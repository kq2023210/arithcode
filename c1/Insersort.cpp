#include "sort.h"
void Insertsort(int r[], int n){
	int i,j;
	for (i=1;i<n;i++){
		int temp=r[i];
	for (j=i-1;j>=0&&temp<r[j];j--)
		r[j+1]=r[j];
	r[j+1]=temp;
	} 

}
//��r[0]Ϊ����λ����������Ϊ int arr[8+1]={0��8,7,6,5,4,3,2,1};
void Insertsort2(int r[], int n){
	int i,j;
	for (i=2;i<=n;i++){
		r[0]=r[i];
		for (j=i-1;r[0]<r[j];j--)
			r[j+1]=r[j];
		r[j+1]=r[0];
	} 

}
int Insertsortmain()
{
   
    printf("��������ǰ\n");
    Print(arr,N);
    printf("\n");
    Insertsort(arr,N);
    printf("���������\n");
   	Print(arr,N);
    printf("\n");
    return 0;
}
