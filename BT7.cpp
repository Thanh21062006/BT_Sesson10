#include <stdio.h>

int main(){
	int n, m;
	printf("Moi ban nhap so dong cho mang: ");
	scanf("%d", &n);
	printf("Moi ban nhap so cot cho mang: ");
	scanf("%d", &m);
	
	int array[n][m];
	printf("Moi ban nhap gia tri cho cac phsn tu: \n");
	for(int i = 0;i < sizeof(array)/sizeof(array[0]);i++){
		for(int j = 0;j < sizeof(array[0])/sizeof(int);j++){
			printf("\narray[%d][%d] = ", i, j);
			scanf("%d", &array[i][j]);
		}
	}
	
	printf("\n");
	printf("Mang chua sap xep: \n");
	for(int i = 0;i < sizeof(array)/sizeof(array[0]);i++){
		for(int j = 0;j < sizeof(array[0])/sizeof(int);j++){
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	
	for(int i = 0;i < n;i++){
		for(int j = 0;j < m;j++){
			int min = array[i][j];
			for(int a = j + 1;a < m;a++){
				if(array[i][a] < min){
					min = array[i][a];
					array[i][a] = array[i][j];
					array[i][j] = min;
				}
			}
		}
	}
	
	printf("Mang da sap xep: \n");
	for(int i = 0;i < sizeof(array)/sizeof(array[0]);i++){
		for(int j = 0;j < sizeof(array[0])/sizeof(int);j++){
			printf("%d ", array[i][j]);
		}
		printf("\n");
	}
	return 0;
}
