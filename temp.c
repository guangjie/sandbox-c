#import <stdio.h>

#define LOWER 	0
#define UPPER 	300
#define STEP 	20
// this is a comment for this function
int main()
{
	float fahr, celcius;

	fahr = LOWER;
	printf("============\n");
	printf("WHILE LOOP\n");
	printf("============\n");
	while (fahr <= UPPER) {
		celcius = 5 * (fahr - 32) / 9;
		printf("%ff\t%fc\t\n", fahr, celcius);
		fahr = fahr + STEP;
	}
	printf("\n");

	printf("============\n");
	printf("FOR LOOP\n");
	printf("============\n");
	for (fahr = 0; fahr <= UPPER; fahr = fahr + STEP) {
		printf("%3f\t%6.1f\n", fahr, (5.0/9.0) * (fahr-32));
	}

	return 0;
}