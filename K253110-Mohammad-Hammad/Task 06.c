#include <stdio.h>

int main(){
	int arr1[5], arr2[5], merged[10];
	printf("Enter elements for 1st array\n");
	for(int i = 0; i < 5; i++){	
		printf("Enter %d element : ", i + 1);
		scanf("%d", &arr1[i]);
	}
	printf("Enter elements for 2nd array\n");
	for(int i = 0; i < 5; i++){	
		printf("Enter %d element : ", i + 1);
		scanf("%d", &arr2[i]);
	}
	for(int i = 0, j = 0; i < 10; i++, j++){
		if(j > 4){
			j = 0;
		}
		if(i < 5){
			merged[i] = arr1[j];
		}
		else{
			merged[i] = arr2[j];
		}
	}
	printf("Merged array : ");
	for(int i = 0; i < 10; i++){
		printf("%d ", merged[i]);
	}
	return 0;
}
