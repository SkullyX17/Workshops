#include <iostream>
#include <cmath>
using namespace std;
//turns base 10 to base 2


void base2_convert(int input){
	int base2=1;
	int power=-1;
	int number=input;

	while(base2<=input){			//finds the base power
		base2=base2*2;
		power++;
	}
		while(power>=0){
			if (number>=pow(2,power)){			//formula for convert
				cout<<1<<endl;
				number=number-pow(2,power);
				power--;
				
			}else {
				cout<<0<<endl;
				power--;
			}
		}
}