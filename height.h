#define fahrenheit 1
#define celsius 2
#define kelvin 3

float convert_height(int convert_type, float height) {
	switch(convert_type) {
		case fahrenheit:
			return height*1.8f + 32;
		case celsius:
			return (height-32) / 1.8f;
		case kelvin:
			return ((height-32) / 1.8f) + 273.15;
		default:
			return 0;
	}
}

void height_conversion() {
	printf("Height Conversion\n");
	printf("[1] Celsius to Fahrenheit\n");
	printf("[2] Fahrenheit to Celsius\n");
	printf("[3] Fahrenheit to Kelvin\n");

	printf(">>> ");
	int convert_type;
	scanf("%d", &convert_type);

	if(convert_type == 1 || convert_type == 2 || convert_type == 3) {
		printf("%s: ", convert_type != fahrenheit ? "Fahrenheit" : "Celsius"); // ternary
		float height;
		scanf("%f", &height);

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
		printf(": %.2f\n", convert_height(convert_type, height));
	}
	else {
		printf("You entered an invalid choice.\nPlease restart the program.");
	}
}
