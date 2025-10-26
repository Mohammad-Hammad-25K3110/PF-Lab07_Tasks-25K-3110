#include <stdio.h>

int main(){
	int arr[10], search, index, found = 0;
	printf("Enter elements of array\n");
	for(int i = 0; i < 10; i++){	
		printf("Enter %d element : ", i + 1);
		scanf("%d", &arr[i]);
	}
	printf("Enter number to search in array : ");
	scanf("%d", &search);
	for(int i = 0; i < 10; i++){
		if(arr[i] == search){
			index = i;
			found = 1;
			break;
		}
	}
	//in case of duplicates of search value in array
	//the first index at which found is displayed
	printf("Elements of array : ");
	for(int i = 0; i < 10; i++){
		printf("%d ", arr[i]);
	}
	if(found){
		printf("\n%d found at index %d in array.", search, index);
	}
	else{
		printf("\n%d not found in array.", search);
	}
	return 0;
}
