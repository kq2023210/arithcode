#include "sort.h"
int arr[7]={16,7,3,20,17,8,1};
int N=7;
void Sort_menu(){
	
	printf("    *******һ��������***********\n"	);
	printf("    1 ֱ�Ӳ�������\n"	);
	printf("    2 ѡ������\n"	);
	printf("    3 ������\n"	);
	printf("    0 �˳�\n"	);
	printf("    **********************\n"	);
	printf("    ����Ҫִ�е���� n\n");
}

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int Sort_main() {
	int n;
	Sort_menu();
	do
	{ scanf("%d",&n);
	  switch(n){
	  	case 0:printf("�˳� һ��������\n") ;break;
	    case 1: Insertsortmain();break;
	  	case 3: HeapSortmain();break;
	  	case 2: Selectsortmain();break;
	  	default:printf("please input n correctly\n");
	  	}
	 	
	}while(n);
	return 0;
}
