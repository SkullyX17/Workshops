#ifndef Musician_h
#define Musician_h

class Musician{
private:
	string instrument_name;
	int XPyears;
public: 
Musician();
Musician(string intrument, int experience);
string get_instrument();
int get_experience();


};
#endif

