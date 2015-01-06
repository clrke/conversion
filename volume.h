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
