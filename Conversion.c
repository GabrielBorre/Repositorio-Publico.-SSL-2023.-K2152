#include "Conversion.h"

double FahrenheitACelsius (double fahrenheit){
    return (fahrenheit-32)*5/9;
}

double CelsiusAFahrenheit (double celsius){
    return celsius * 9/5 +32;
}

