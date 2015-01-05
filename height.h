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
