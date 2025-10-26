#include <stdio.h>

int main(){
	char str[100];
	int count = 0, i = 0;
	printf("Enter string with whitespaces : ");
	//scanset used to enter string with whitespaces until "Enter [\n]" is not pressed
	scanf("%[^\n]", str);
	printf("String Entered : %s\n", str);
	for(int i = 0; i < 100; i++)
		if(str[i] == ' '){
			count++;
		}
	printf("Whitespaces entered in string : %d", count);
	return 0;
}
