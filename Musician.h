#ifndef Musician_h
#define Musician_h

class Musician{
private:
	std::string instrument_name;
	int XPyears;
public: 
Musician();
Musician(std::string intrument, int experience);
std::string get_instrument();
int get_experience();


};
#endif

