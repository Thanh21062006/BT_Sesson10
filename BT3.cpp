#include <stdio.h>

int main() {
	int array[7] = {6, 2, 7, 3, 9, 0, 8};
	int size = sizeof(array)/sizeof(int);
	
	printf("Mang cu array[%d] = ", size);
	for(int i = 0;i < size;i++){
		printf("%d ", array[i]);
	}
	
	for(int i = 1;i < size;i++){
		int numb = array[i], j;
		j = i - 1;
		while(j >= 0 && array[j] > numb){
			array[j + 1] = array[j];
			j--;
		} 
		array[j + 1] = numb;
	}
	
	printf("\nMang moi array[%d] = ", size);
	for(int i = 0;i < size;i++){
		printf("%d ", array[i]);
	}
	return 0;
}
