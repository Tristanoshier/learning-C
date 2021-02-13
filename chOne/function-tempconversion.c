#include <stdio.h>

float celsiusToFahr(float celsius);


int main(){

    float fahr, celsius;

    for(celsius = 0; celsius <= 300; celsius = celsius + 20) {

        fahr = celsiusToFahr(celsius);

        printf("%6.1f\t%6.1f\n", celsius, fahr);
    }

}

float celsiusToFahr(float celsius)
{
    return celsius * 9.0/5.0 + 32.0;

}


