#include<iostream>
using namespace std, Musician;
#include "Musician.h"
class Musician
{
private:
	string instrument_name;
	int XPyears;
public: 
Musician()
	{
		instrument_name = "null";
		XPyears = 0;
	}
Musician(std::string instrument, int experience)
	{
		instrument_name = instrument;
		XPyears = experience;
	}

string get_instrument()
	{
		return instrument_name;
	}
int get_experience()
	{
		return XPyears;
	}
}