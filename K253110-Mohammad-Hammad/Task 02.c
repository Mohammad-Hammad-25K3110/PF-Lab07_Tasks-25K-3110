#include <stdio.h>

int main(){
	int length;
	do{
		printf("Enter length of array (must be greater than 0): ");
		scanf("%d", &length);
	}
	while (length < 1);	int arr[length];
	for(int i = 0; i < length; i++){
		printf("Enter %d element : ", i+1);
		scanf("%d", &arr[i]);
	}
	printf("Normal order of elements of array : ");
	for(int i = 0; i < length ; i++){
		printf("%d ", arr[i]);
	}
	printf("\nReversed order of elements of array : ");
	for(int i = length - 1; i >= 0; i--){
		printf("%d ", arr[i]);
	}
return 0;
}
