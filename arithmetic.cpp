#include <iostream>
#include <cmath>
using namespace std;
//turns base 10 to base 2


void base2_convert(int input){
	int base2=1;
	int number=input;
	int power=0;
	int counter;
	while(base2<=input){
		base2=base2*2;
		power++;
	}
base2=base2/2;

		while(base2>=1){
					
			counter=base2-number



				if(number <= base2 ==0){
					cout<<1
						<<endl;
						number=number/2;
						base2=base2/2;
				}else{
					cout<<0
						<<endl;
						base2=base2/2;
				}
			counter--;
		}
}
