#include <stdio.h>

int main(){
	char str[100];
	printf("Enter a string with numeric values: ");
	//scanset can only discard the first encountered negated value
	//the rest of the non negated value will also be discarded
	scanf("%[^0-9]", str);
	printf("%s", str);
	return 0;
}
