#define binary 1
#define octal 2
#define decimal 3
#define hexadecimal 4
#define string char*

#include <string.h>
#include <math.h>

char digits[] = {
	'0', '1', '2', '3',
	'4', '5', '6', '7',
	'8', '9', 'A', 'B',
	'C', 'D', 'E', 'F'
};

void convert_base(int convert_type, string number) {
	int i;
	switch(convert_type) {
		case 1:
			break;
		case 2: {
			int length = strlen(number);
			int answer = 0;
			for(i = 0; i < length; i++) {
				answer += number[i] == '0'? 0: pow(2, length-i-1);
			}
			printf("%d", answer);
		}
	}
}

void base_conversion() {
	printf("base Conversion\n");

	printf("[1]  binary to octal\n");
	printf("[2]  binary to decimal\n");
	printf("[3]  binary to hexadecimal\n");
	printf("[4]  octal to binary\n");
	printf("[5]  octal to decimal\n");
	printf("[6]  octal to hexadecimal\n");
	printf("[7]  decimal to binary\n");
	printf("[8]  decimal to octal\n");
	printf("[9]  decimal to hexadecimal\n");
	printf("[10] hexadecimal to binary\n");
	printf("[11] hexadecimal to octal\n");
	printf("[12] hexadecimal to decimal\n");

	printf(">>> ");
	int convert_type;
	scanf("%d", &convert_type);

	if(convert_type >= 1 && convert_type <= 12) {
		switch(convert_type) {
			case 1:
			case 2:
			case 3:
				printf("binary: ");
				break;
			case 4:
			case 5:
			case 6:
				printf("octal: ");
				break;
			case 7:
			case 8:
			case 9:
				printf("decimal: ");
				break;
			case 10:
			case 11:
			case 12:
				printf("hexadecimal: ");
				break;
		}
		char number[100];
		scanf("%s", &number);

		switch(convert_type) {
			case 1:
			case 8:
			case 11:
				printf("octal");
				break;
			case 2:
			case 5:
			case 12:
				printf("decimal");
				break;
			case 4:
			case 7:
			case 10:
				printf("binary");
				break;
			case 3:
			case 6:
			case 9:
				printf("hexadecimal");
				break;
		}
		printf(": ");
		convert_base(convert_type, number);
		printf("\n");
	}
	else {
		printf("You entered an invalid choice.\nPlease restart the program.");
	}
}
