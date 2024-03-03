#include <iostream>
#include <cmath>
using namespace std;
//turns base 10 to base 2


void base2_convert(int input){
	int base2=input;
	//int counter
	
		while(base2>2){
			if(base2 % 2 ==0){
				cout<<1
					<<endl;
					base2=base2/2;
			}else{
				cout<<0
					<<endl;
			}

		}
}
