#include <stdio.h>

int main(){
	int array[10] = {2, 4, 6, 3, 5, 9, 10, 11, 13, 8};
	int temp, size = sizeof(array)/sizeof(int);
	
	printf("Mang cu array[%d] = ",size);
	for(int i = 0;i < size;i++){
			printf("%d ",array[i]);
		}
	
	for(int i = 0;i < size -1;i++){
		for(int j = 0;j < size - i - 1;j++){
			if(array[j] > array[j + 1]){
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
		}
	}
	printf("\nMang moi array[%d] = ",size);
	for(int i = 0;i < size;i++){
		printf("%d ",array[i]);
	}
	return 0;
}
