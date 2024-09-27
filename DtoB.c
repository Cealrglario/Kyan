// Base 10 to base 2 converter.
# include <stdio.h>
# include <string.h>
# include <stdlib.h>

void base10_to_binary(int quotient);
void base10_to_octal(int quotient);
void base10_to_hex(int quotient);

int main() {
	int input;
	
	int choice;
	
	printf("Please select an option (Enter 1, 2, or 3):\n");
	printf("1. Decimal to Binary\n");
	printf("2. Decimal to Octal\n");
	printf("3. Decimal to Hexadecimal\n");
	
	int chk = scanf("%d", &choice);
	
	if(chk != 1) {
		printf("Invalid Input. Please try again!");
		exit(1);
	}
	
	if (choice == 1){
		printf("Enter the positive integer number in base 10 to convert to base 2: ");
		scanf("%d", &input);
		
		base10_to_binary(input);
	} else if (choice == 2){
		printf("Enter the positive integer number in base 10 to convert to base 8: ");
		scanf("%d", &input);
		
		base10_to_octal(input);
	} else if (choice == 3){
		printf("Enter the positive integer number in base 10 to convert to base 16: ");
		scanf("%d", &input);
		
		base10_to_hex(input);
	} else {
		printf("Invalid Choice. Please try again!");
		exit(1);
	}
	
	return 0;
}

void base10_to_binary(int quotient){
	char converted_num[64] = {0};
	int index = 0;
	
	while (quotient > 0) {
		int remainder = quotient % 2;
		quotient = quotient / 2;
		
		converted_num[index++] = remainder + '0';
	}
	
	printf("Binary: ");
	for (int i = index - 1; i >= 0; i--) {
		printf("%c", converted_num[i]);
	}
}

void base10_to_octal(int quotient){
	char converted_num[64] = {0};
	int index = 0;
	
	while (quotient > 0) {
		int remainder = quotient % 8;
		quotient = quotient / 8;
		
		converted_num[index++] = remainder + '0';
	}
	
	printf("Octal: ");
	for (int i = index - 1; i >= 0; i--) {
		printf("%c", converted_num[i]);
	}
}

void base10_to_hex(int quotient){
	char converted_num[64] = {0};
	int index = 0;
	
	while (quotient > 0) {
		int remainder = quotient % 2;
		quotient = quotient / 2;
		
		converted_num[index++] = remainder + '0';
	}
	
	printf("Hex: ");
	for (int i = index - 1; i >= 0; i--) {
		printf("%c", converted_num[i]);
	}
}