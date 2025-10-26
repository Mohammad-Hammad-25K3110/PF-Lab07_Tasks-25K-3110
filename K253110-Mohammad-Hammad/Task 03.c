#include <stdio.h>

int main(){
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
	}
	printf("Elements of array : ");
	for(int i = 0; i < length ; i++){
		printf("%d ", arr[i]);
	}
	
	int repeated[length/2];
	int repcount = 0;
	for(int i = 0; i < length; i++){
		for(int j = i + 1; j < length; j++){
			if(arr[i] == arr[j]){
				//checking if duplicate already detected or not
				int repflag = 0;
				for(int k = 0; k < repcount; k++){
					if(arr[i] == repeated[k]){
						repflag = 1;
						break;
					}
				}
				//if new duplicate detected then adding it to repeated array using repcount as index
				if(repflag == 0){
					repeated[repcount] = arr[i];
					repcount++;
				}
				break;
			}
		}
	}
	if(repcount > 0){
		printf("\nNumbers repeated in array : ");
		for(int i = 0; i < repcount; i++){
			printf("|%d| ", repeated[i]);
		}
	}
	else{
		printf("No duplicates in array.");
	}
	return 0;
}
