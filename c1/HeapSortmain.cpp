#include "sort.h"
#define LeftChild(i) (2 * (i) + 1)


void PercDown(int  A[], int i, int N)
{ //只保证A[i]为大根堆 
    int child;
    int Tmp;
    for (Tmp = A[i]; 2*i+1 < N; i = child){
        child = 2*i+1; 
		//注意数组下标是从0开始的，所以左孩子不是2*i
        if (child != N - 1 && A[child + 1] > A[child])
            ++child;       //找到最大的儿子节点
        if (Tmp < A[child])
            A[i] = A[child];
        else
            break;
    }
    A[i] = Tmp;//A[i] 为父，左右孩子中的最大 
}
void HeapSort(int A[], int N)
{
    int i;
    //从第一个非叶子结点开始调整 
    for (i = N / 2-1; i >= 0; --i)
         PercDown(A, i, N);  
	//有了初始堆之后进行排序
    for(i=N-1;i>0;--i)
    {
        Swap(&A[0],&A[i]);        
//将最大元素（根）与数组末尾元素交换，从而删除最大元素，重新构造堆
         PercDown(A, 0, i);
    }
}


int HeapSortmain()
{
    
    printf("堆排序前\n");
    Print(arr,N);
    printf("\n");
    HeapSort(arr,N);
    printf("堆排序后\n");
    Print(arr,N);
    printf("\n");
    return 0;
}
