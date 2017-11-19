#include "Fahrenheit.h"
#include "Celsius.h"



Fahrenheit::Fahrenheit(float myTemp)
{
	this->temp = myTemp;
}


Fahrenheit::~Fahrenheit()
{
}


Fahrenheit& Fahrenheit::operator=(const Celsius & c)
{
	float help = c.getTemp();
	help *= 9;
	help /= 5;
	help += 32;
	this->temp = help;
	return *this;
}

Fahrenheit::operator Celsius()const
{
	float help = this->temp;
	help -= 32;
	help *= 5;
	help /= 9;
	return Celsius(help);
}

float Fahrenheit::getTemp()const
{
	return temp;
}

ostream& operator<<(ostream& os, Fahrenheit f)
{
	os << f.getTemp();
	return os;
}