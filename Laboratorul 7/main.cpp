#include <iostream>
#include <stdio.h>


using namespace std;


float operator"" _Kelvin(unsigned long long int a )
{
    float Celsius;
    Celsius = a - 273.15;
    return Celsius;
}

float operator"" _Fahrenheit(unsigned long long b)
{
    return (b - 32) / 1.8;
}
int main() {

    float a = 300_Kelvin;

    float b = 120_Fahrenheit;
    cout << a << " " << b;

    return 0;

}