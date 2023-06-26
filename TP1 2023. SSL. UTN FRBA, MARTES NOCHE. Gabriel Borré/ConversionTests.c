#include <stdio.h>
#include <assert.h>
#include <math.h>
#include "Conversion.h"

#define COTA_ERROR 0.01 // Margen de error tolerable


//Casos de prueba de la conversión de Celsius a Fahrenheit
void testsFahrenheitACelsius() {
    assert(fabs(FahrenheitACelsius(32) - 0) < COTA_ERROR);
    assert(fabs(FahrenheitCelsius(68) - 20) < COTA_ERROR);
    assert(fabs(FahrenheitCelsius(98.6) - 37) < COTA_ERROR);
    assert(fabs(FahrenheitCelsius(212) - 100) < COTA_ERROR);
    assert(fabs(FahrenheitCelsius(-40) + 40) < COTA_ERROR);
    assert(fabs(FahrenheitCelsius(50) - 10) < COTA_ERROR);
    assert(fabs(FahrenheitCelsius(75.5) - 24.17) < COTA_ERROR);
    assert(fabs(FahrenheitCelsius(90.3) - 32.39) < COTA_ERROR);
}

//Casos de prueba de la conversió
void testCelsiusAFahrenheit() {
    assert(fabs(CelsiusAFahrenheit(0) - 32) < COTA_ERROR);
    assert(fabs(CelsiusAFahrenheit(20) - 68) < COTA_ERROR);
    assert(fabs(CelsiusAFahrenheit(37) - 98.6) < COTA_ERROR);
    assert(fabs(CelsiusAFahrenheit(100) - 212) < COTA_ERROR);
    assert(fabs(CelsiusAFahrenheit(-40) + 40) < COTA_ERROR);
    assert(fabs(CelsiusAFahrenheit(50) - 122) < COTA_ERROR);
    assert(fabs(CelsiusAFahrenheit(75.5) - 167.9) < COTA_ERROR);
    assert(fabs(CelsiusAFahrenheit(90.3) - 194.54) < COTA_ERROR);
}

int main() {
    testsFahrenheitACelsius();
    testsCelsiusAFahrenheit();
    printf("Pasaron todos los tests\n");
    return 0;
}
