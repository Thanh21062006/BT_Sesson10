#include <stdio.h>

int main() {
	int array[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10}, number, check;
	printf("Moi ban nhap vao phan tu bat ki: ");
	scanf("%d", &number);
	
	for(int i = 0;i < sizeof(array)/sizeof(int);i++){
		check = 1;
		if(array[i] == number){
			printf("\narray[%d] = %d", i, number);
			check = 0;
			break;
		}
	}
	if(check){
			printf("\nPhan tu khong ton tai trong mang!");
	return 0;
	}
}
