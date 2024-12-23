#include <stdio.h>

int main(){
	int array[] = {4, 5, 7, 8, 5, 9, 10, 8, 5, 7, 3, 1, 8, 9, 1, 8};
	int size = sizeof(array)/sizeof(int), numb;
	printf("Moi ban nhap mot so bat ki de kem tra vi tri trong mang: ");
	scanf("%d", &numb);
	
	int arrayNumb[100], n = 0;
	for(int i = 0;i < size;i++){
		if(array[i] == numb){
			arrayNumb[n] = i;
			n++;
		}
	}
	
	if(n > 0){
		printf("Vi tri cua %d trong mang la: \n",numb);
		for(int j = 0;j < n;j++){
			printf("array[%d] \n", arrayNumb[j]);
		}
	}
	else{
		printf("Phan tu khong ton tai trong mang!");
	}
	
	return 0;
}
