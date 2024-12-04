#include <iostream>
#include "mytemperature.h"
using namespace std;
int main() {
    cout << "Celsius\tFahrenheit\t|\tFahrenheit\tCelsius" << endl;
    double celsius_values[] = { 40.0, 39.0, 31.0 };
    double fahrenheit_values[] = { 105.0, 102.0, 87.8 };

    for (int i = 0; i < 3; i++) {
        double celsius = celsius_values[i];
        double fahrenheit = fahrenheit_values[i];

        double fah_converted = celsius_to_fah(celsius);
        double cel_converted = fahrenheit_to_cels(fahrenheit);

       cout << celsius << "\t" << fah_converted << "\t\t|\t" << fahrenheit << "\t" << cel_converted << endl;
    }

    return 0;
}