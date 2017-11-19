#pragma once
class Fahrenheit;
#include <iostream>
using namespace std;


class Celsius
{
private:
	float temp;
public:
	Celsius(float);
	~Celsius();
	float getTemp()const;
	Celsius& operator=(const Fahrenheit &f);
	operator Fahrenheit()const;
};


ostream& operator<<(ostream& os, Celsius c);
