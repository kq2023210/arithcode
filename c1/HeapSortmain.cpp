#include "sort.h"
#define LeftChild(i) (2 * (i) + 1)


void PercDown(int  A[], int i, int N)
{ //ֻ��֤A[i]Ϊ����� 
    int child;
    int Tmp;
    for (Tmp = A[i]; 2*i+1 < N; i = child){
        child = 2*i+1; 
		//ע�������±��Ǵ�0��ʼ�ģ��������Ӳ���2*i
        if (child != N - 1 && A[child + 1] > A[child])
            ++child;       //�ҵ����Ķ��ӽڵ�
        if (Tmp < A[child])
            A[i] = A[child];
        else
            break;
    }
    A[i] = Tmp;//A[i] Ϊ�������Һ����е���� 
}
void HeapSort(int A[], int N)
{
    int i;
    //�ӵ�һ����Ҷ�ӽ�㿪ʼ���� 
    for (i = N / 2-1; i >= 0; --i)
         PercDown(A, i, N);  
	//���˳�ʼ��֮���������
    for(i=N-1;i>0;--i)
    {
        Swap(&A[0],&A[i]);        
//�����Ԫ�أ�����������ĩβԪ�ؽ������Ӷ�ɾ�����Ԫ�أ����¹����
         PercDown(A, 0, i);
    }
}


int HeapSortmain()
{
    
    printf("������ǰ\n");
    Print(arr,N);
    printf("\n");
    HeapSort(arr,N);
    printf("�������\n");
    Print(arr,N);
    printf("\n");
    return 0;
}
