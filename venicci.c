#include <stdio.h>
#include <conio.h>
#define fahrenheit 1
#define celsius 2
#define kelvin 3

float convert_temperature(int convert_type, float temperature) {
	switch(convert_type) {
		case fahrenheit:
			return temperature*1.8f + 32;
		case celsius:
			return (temperature-32) / 1.8f;
		case kelvin:
			return ((temperature-32) / 1.8f) + 273.15;
		default:
			return 0;
	}
}

void temperature_conversion() {
	printf("Temperature Conversion\n");
	printf("[1] Celsius to Fahrenheit\n");
	printf("[2] Fahrenheit to Celsius\n");
	printf("[3] Fahrenheit to Kelvin\n");

	printf(">>> ");
	int convert_type;
	scanf("%d", &convert_type);

	if(convert_type == 1 || convert_type == 2 || convert_type == 3) {
		printf("%s: ", convert_type != fahrenheit ? "Fahrenheit" : "Celsius"); // ternary
		float temperature;
		scanf("%f", &temperature);

		switch(convert_type) {
			case fahrenheit:
				printf("Fahrenheit");
				break;
			case celsius:
				printf("Celsius");
				break;
			case kelvin:
				printf("Kelvin");
				break;
		}
		printf(": %.2f\n", convert_temperature(convert_type, temperature));
	}
	else {
		printf("You entered an invalid choice.\nPlease restart the program.");
	}
}

#define cm 1
#define inch 2
#define foot 3

float convert_height(int convert_type, float height) {
	switch(convert_type) {
		case 1:
			return height/2.54;
		case 2:
			return height/30.48;
		case 3:
			return height/12;
		case 4:
			return height*2.54;
		case 5:
			return height*30.48;
		case 6:
			return height*12;
	}
}

void height_conversion() {
	printf("Height Conversion\n");

	printf("[1] cm to inch\n");
	printf("[2] cm to foot\n");
	printf("[3] inch to foot\n");
	printf("[4] inch to cm\n");
	printf("[5] foot to cm\n");
	printf("[6] foot to inch\n");

	printf(">>> ");
	int convert_type;
	scanf("%d", &convert_type);

	if(convert_type >= 1 && convert_type <= 6) {
		switch(convert_type) {
			case 1:
			case 2:
				printf("cm: ");
				break;
			case 3:
			case 4:
				printf("inch: ");
				break;
			case 5:
			case 6:
				printf("foot: ");
				break;
		}
		float height;
		scanf("%f", &height);

		switch(convert_type) {
			case 6:
			case 1:
				printf("inch");
				break;
			case 2:
			case 3:
				printf("foot");
				break;
			case 4:
			case 5:
				printf("cm");
				break;
		}
		printf(": %.2f\n", convert_height(convert_type, height));
	}
	else {
		printf("You entered an invalid choice.\nPlease restart the program.");
	}
}

#define kg 1
#define lb 2
#define g 3

float convert_weight(int convert_type, float weight) {
	switch(convert_type) {
		case 1:
			return weight*2.2;
		case 2:
			return weight*1000;
		case 3:
			return weight/2.2 * 1000;
		case 4:
			return weight/2.2;
		case 5:
			return weight/1000;
		case 6:
			return convert_weight(5, weight) * 2.2;
	}
}

void weight_conversion() {
	printf("weight Conversion\n");

	printf("[1] kg to lb\n");
	printf("[2] kg to g\n");
	printf("[3] lb to g\n");
	printf("[4] lb to kg\n");
	printf("[5] g to kg\n");
	printf("[6] g to lb\n");

	printf(">>> ");
	int convert_type;
	scanf("%d", &convert_type);

	if(convert_type >= 1 && convert_type <= 6) {
		switch(convert_type) {
			case 1:
			case 2:
				printf("kg: ");
				break;
			case 3:
			case 4:
				printf("lb: ");
				break;
			case 5:
			case 6:
				printf("g: ");
				break;
		}
		float weight;
		scanf("%f", &weight);

		switch(convert_type) {
			case 6:
			case 1:
				printf("lb");
				break;
			case 2:
			case 3:
				printf("g");
				break;
			case 4:
			case 5:
				printf("kg");
				break;
		}
		float answer = convert_weight(convert_type, weight);
		printf(": %.2f\n", answer);
	}
	else {
		printf("You entered an invalid choice.\nPlease restart the program.");
	}
}

#define oz 1
#define L 2
#define gal 3

float convert_volume(int convert_type, float volume) {
	switch(convert_type) {
		case 1:
			return volume/33.814;
		case 2:
			return volume/128;
		case 3:
			return volume/3.7854;
		case 4:
			return volume*33.814;
		case 5:
			return volume*128;
		case 6:
			return volume*3.7854;
	}
}

void volume_conversion() {
	printf("volume Conversion\n");

	printf("[1] oz to L\n");
	printf("[2] oz to gal\n");
	printf("[3] L to gal\n");
	printf("[4] L to oz\n");
	printf("[5] gal to oz\n");
	printf("[6] gal to L\n");

	printf(">>> ");
	int convert_type;
	scanf("%d", &convert_type);

	if(convert_type >= 1 && convert_type <= 6) {
		switch(convert_type) {
			case 1:
			case 2:
				printf("oz: ");
				break;
			case 3:
			case 4:
				printf("L: ");
				break;
			case 5:
			case 6:
				printf("gal: ");
				break;
		}
		float volume;
		scanf("%f", &volume);

		switch(convert_type) {
			case 6:
			case 1:
				printf("L");
				break;
			case 2:
			case 3:
				printf("gal");
				break;
			case 4:
			case 5:
				printf("oz");
				break;
		}
		printf(": %.2f\n", convert_volume(convert_type, volume));
	}
	else {
		printf("You entered an invalid choice.\nPlease restart the program.");
	}
}

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


int main()
{
	printf("Choose from the menu:\n");
	printf("[1] Temperature Conversion\n");
	printf("[2] Height Conversion\n");
	printf("[3] Weight Conversion\n");
	printf("[4] Volume Conversion\n");
	printf("[5] Base Conversion\n");

	printf(">>> ");
	int choice;
	scanf("%d", &choice);

	switch(choice) {
		case 1:
			temperature_conversion();
			break;
		case 2:
			height_conversion();
			break;
		case 3:
			weight_conversion();
			break;
		case 4:
			volume_conversion();
			break;
		case 5:
			base_conversion();
			break;
	}

	getch();
	return 0;
}
