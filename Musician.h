#ifndef Musician_h
#define Musician_h
using namespace std;

class Musician{
private:
	string instrument_name;
	int XPyears;
public: 
Musician();
Musician(string intrument, int ecperience);
string get_instrument();
int get_experience();


};
#endif

