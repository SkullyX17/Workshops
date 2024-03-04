#include <iostream>
#include <cmath>
using namespace std;
//turns base 10 to base 2


void base2_convert(int input){
	int base2=1;
	int power=-1;
	int number=input;
	int counter;
	while(base2<=input){
		base2=base2*2;
		power++;
	}
counter=power;
while(power>=0){
	//cout<<number<<"-"<<pow(2,power)<<endl;
if (number>=pow(2,power)){
	cout<<1<<endl;
	number=number-pow(2,power);
	power--;
	counter--;
}else {
	cout<<0<<endl;
	power--;
	//number=number-pow(2,power-1);
	counter--;
}
}
}