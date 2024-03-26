#ifndef Musician_h
#define Musician_h
using namespace std;

class Musician{
private:
	string instrument_name;
	int XPyears;
public: 
Musician();                  // a default constructor 
// a constructor that takes the instrument played and the years of experience
Musician(std::string instrument, int experience);      
string get_instrument();    // returns the instrument played
int get_experience();       // returns the number of years experience
};
#endif