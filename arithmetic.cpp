#include <iostream>
#include <cmath>
using namespace std;


 void arithmetic(int array[], int array2[],char oppor){
int n=sizeof(array)/sizeof(int);
cout<<n<<endl;
int n2=sizeof(array2)/sizeof(int);
cout<<n2<<endl;
int sum1;
int sum2;

for (int i = 0;i < n;i++){
	
	if(array[n-i]==1){
		sum1=sum1+pow(2,n-i);
		cout<<sum1<<endl;
	}
}
}

 int main(){

 	int array[12] = {1,1,1,0,1,1,1,0,1,0,1,1};
 	int array2[2] = {1,1};
 	char oppor = 'add';

 	arithmetic(array,array,oppor);
 return 0;
 }