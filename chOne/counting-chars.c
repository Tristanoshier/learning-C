#include <stdio.h>

int main()
{	/*
	long nf;
	nf = 0;

	while(getchar() != EOF) {
		++nf;
		printf("%ld\n", nf);
	}
	*/

	double nc;
	
	for (nc = 0; getchar() != EOF; ++nc){
		printf("%.0f\n", nc);
	}
}
