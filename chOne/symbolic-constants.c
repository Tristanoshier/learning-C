#include <stdio.h>

/* symbolic constants are pretty much like constants in js, they should never change value */

#define LOWER 0

#define UPPER 300

#define STEP 20

int main()
{
	int fahr;
	
	for(fahr = LOWER; fahr <= UPPER; fahr = fahr + STEP) {
		printf("%3d%6.1f\n", fahr, (5.0/9.0)*(fahr - 32));
	}
	

}
