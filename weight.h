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
			return convert_weight(5, weight) * 2. 2;
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
