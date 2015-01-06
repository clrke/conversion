#include <stdio.h>
#include <conio.h>
#include "temperature.h"
#include "height.h"
#include "Weight.h"
#include "volume.h"
#include "base.h"

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
