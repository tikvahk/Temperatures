#include "Celsius.h"
#include "Fahrenheit.h"


Celsius::Celsius(float myTemp)
{
	this->temp = myTemp;
}


Celsius::~Celsius()
{
}


ostream& operator<<(ostream& os, Celsius c)
{
	os << c.getTemp();
	return os;
}

Celsius& Celsius::operator=(const Fahrenheit & f)
{
	float help = f.getTemp();
	help -= 32;
	help *= 5;
	help /= 9;
	this->temp = help;
	return *this;
}

Celsius::operator Fahrenheit() const
{
	float help = this->temp;
	help *= 9;
	help /= 5;
	help += 32;
	return Fahrenheit(help);
}

float Celsius::getTemp()const
{
	return this->temp;
}

