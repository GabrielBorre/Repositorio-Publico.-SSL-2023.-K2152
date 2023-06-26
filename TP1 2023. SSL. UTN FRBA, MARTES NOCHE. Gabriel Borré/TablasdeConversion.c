#include <stdio.h>
#include "Conversion.h"


int main() {
    float fahrenheit, celsius;
    int extremo_superior = 300, extremo_inferior = 0, incremento = 20;
    fahrenheit = extremo_inferior;

    printf("TABLA DE CONVERSION DE FARENHEIT A CELSIUS\n");
    while (fahrenheit <= extremo_superior) {
        printf("%3.0f %20.2f\n", fahrenheit, FahrenheitCelsius(fahrenheit));
        fahrenheit = fahrenheit + incremento;
    }

    celsius = extremo_inferior;
    printf("\nTABLA DE CONVERSION DE CELSIUS A FARENHEIT\n");
    while (celsius <= extremo_superior) {
        printf("%3.0f %20.2f\n", celsius, CelsiusAFahrenheit(celsius));
        celsius = celsius + incremento;
    }

    return 0;
}

