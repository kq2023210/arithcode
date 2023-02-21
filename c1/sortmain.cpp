#include "sort.h"
int arr[7]={16,7,3,20,17,8,1};
int N=7;
void Sort_menu(){
	
	printf("    *******一、内排序***********\n"	);
	printf("    1 直接插入排序\n"	);
	printf("    2 选择排序\n"	);
	printf("    3 堆排序\n"	);
	printf("    0 退出\n"	);
	printf("    **********************\n"	);
	printf("    输入要执行的序号 n\n");
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Sort_main() {
	int n;
	Sort_menu();
	do
	{ scanf("%d",&n);
	  switch(n){
	  	case 0:printf("退出 一、内排序\n") ;break;
	    case 1: Insertsortmain();break;
	  	case 3: HeapSortmain();break;
	  	case 2: Selectsortmain();break;
	  	default:printf("please input n correctly\n");
	  	}
	 	
	}while(n);
	return 0;
}
