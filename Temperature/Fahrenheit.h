
#pragma once

class Celsius;
#include <iostream>
using namespace std;

class Fahrenheit
{
private:
	float temp;
public:
	Fahrenheit(float);
	~Fahrenheit();
	float getTemp()const;
	Fahrenheit& operator=(const Celsius & c);
	operator Celsius()const;
};

ostream& operator<<(ostream& os, Fahrenheit f);

