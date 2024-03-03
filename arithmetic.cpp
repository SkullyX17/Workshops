#include <iostream>
#include <cmath>

//turns base 10 to base 2


void base2_convert(int input);{
	int base2=input;
	//int counter

	while(base2>=2){
		if(input % 2 ==0){
			cout<<1
				<<endl;
		}else{
			cout<<0
				<<endl;
		}
		base2=base2/2;
	}
}
