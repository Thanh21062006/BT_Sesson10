#include <stdio.h>

int main() {
	int array[9] = {4, 6, 5, 8, 1, 7, 3, 9, 2};
	int size = sizeof(array)/sizeof(int);
	
	for(int i = 0;i < size;i++){
		int min = array[i];
		for(int j = i + 1;j < size;j++){
			if(array[j] < min){
				min = array[j];
				array[j] = array[i];
				array[i] = min; 
			}
		}
	}
	for(int i = 0;i < size;i++){
		printf("%d ", array[i]);
	}
	return 0;
}
