#include <stdio.h>

int main()
{

	float celsius, fahr;

	for (celsius = 300.0; celsius >= 0; celsius = celsius - 20.0) {
		fahr = celsius * 9.0/5.0 + 32.0;
		printf("%6.1f\t%6.1f\n", celsius, fahr);
	}	
}
