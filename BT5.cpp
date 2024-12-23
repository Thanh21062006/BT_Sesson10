#include <stdio.h>

int main(){
	int array[] = {1, 3, 5, 8, 9, 4, 10, 13, 15};
	int size = sizeof(array)/sizeof(int), numb;
	
	printf("Mang chua sap xep array[%d] = ",size);
	for(int i = 0;i < size;i++){
			printf("%d ", array[i]);
		}
	
	for(int i = 0;i < size - 1;i++){
		for(int j = 0;j < size - i - 1;j++){
			if(array[j] > array[j+1]){
				int temp = array[j + 1];
				array[j + 1] = array[j];
				array[j] = temp;
			}
		}
	}
	
	printf("\nMang da sap xep array[%d] = ",size);
	for(int i = 0;i < size;i++){
		printf("%d ", array[i]);
	}
	
	int start = 0, end = size - 1, mid, check = 1;
	printf("\n\nMoi ban nhap mot so bat ki de tim vi tri: ");
	scanf("%d", &numb);
	
	while(start <= end){
		mid = (start + end)/2;
		if(array[mid] == numb){
			printf("vi tri cua phan tu %d la array[%d].", numb, mid);
			check = 0;
			break;
		}
		else{
		if(array[mid] > numb){
			end = mid - 1;
		}
		else{
			start = mid + 1;
		}
		}
	}
	if(check){
		printf("Phan tu khong ron tai trong mang!");
	}
	return 0;
}
