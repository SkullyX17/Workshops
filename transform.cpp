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

	int n=power+1; // i need the correct amount of loops
	int array[n];
		for(int i=0;i < n; i++){
			if (number>=pow(2,power)){			//formula for convert
				array[i]=1;
				number=number-pow(2,power);
				power--;
				
			}else {
				array[i]=0;
				power--;
			}
		cout<<array[i];
		}
cout<<endl;
}

int main (){
int input = 5;
base2_convert(input);
	return 0;
}