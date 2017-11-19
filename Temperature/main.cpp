#include <iostream>
#include <iomanip>
using namespace std;
#include "Fahrenheit.h"
#include "Celsius.h"



int main()
{
	Celsius boilingPointCelsius(100), freezingPointCelsius(0);
	Fahrenheit absoluteZeroFahrenheit(-459.67);

	const char separator = ' ';
	const int nameWidth = 22;
	const int numWidth = 12;

	cout << left << setw(nameWidth) << setfill(separator) << "";
	cout << left << setw(numWidth) << setfill(separator) << "Celsius:";
	cout << left << setw(numWidth) << setfill(separator) << "Fahrenheit:" << endl;
	cout << left << setw(nameWidth) << setfill(separator) << "Water boiling point:";
	cout << left << setw(numWidth) << setfill(separator) << boilingPointCelsius;
	cout << left << setw(numWidth) << setfill(separator) << (Fahrenheit)boilingPointCelsius << endl;
	cout << left << setw(nameWidth) << setfill(separator) << "Water freezing point:";
	cout << left << setw(numWidth) << setfill(separator) << freezingPointCelsius;
	cout << left << setw(numWidth) << setfill(separator) << (Fahrenheit)freezingPointCelsius << endl;
	cout << left << setw(nameWidth) << setfill(separator) << "Absolute zero:";
	cout << left << setw(numWidth) << setfill(separator) << (Celsius)absoluteZeroFahrenheit;
	cout << left << setw(numWidth) << setfill(separator) << absoluteZeroFahrenheit << endl;

}