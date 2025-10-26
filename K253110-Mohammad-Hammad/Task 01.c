#include <stdio.h>

int main(){
	int sum;
	int length;
	do{
		printf("Enter length of array (must be greater than 0): ");
		scanf("%d", &length);
	}
	while (length < 1);
	int arr[length];
	for(int i = 0; i < length; i++){
		printf("Enter %d element : ", i+1);
		scanf("%d", &arr[i]);
		sum += arr[i];
	}
	printf("Elements of array : ");
	for(int i = 0; i < length ; i++){
		printf("%d ", arr[i]);
	}
	printf("\nSum of elements of array : %d", sum);
	return 0;
}
