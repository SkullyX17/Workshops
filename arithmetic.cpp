#include <iostream>
#include <cmath>
using namespace std;


int binright(int array[],int n){
int newarray[n]=array[0];
int total=0;
	for (int i =0; i < n; i++){

		newarray[i]=array[i+1];

		if(arrayA[n-i-1]==1){
		total=total+pow(2,i);

		}
	}
	newarray[n]=array[0];
return total;
}















int binsub(int arrayA[],int arrayB[],int n,int n2){
int sum1=0;
int sum2=0;
int total;
	for (int i = 0;i < n; i++){
		if(arrayA[n-i-1]==1){
		sum1=sum1+pow(2,i);

		}
	}
	//cout<<sum1<<endl;
	for (int i=0; i < n2; i++){
				if (arrayB[n-i-1]==1){
			sum2=sum2+pow(2,i);
			
		}
	}

total=sum1-sum2;
return total;
}


int binadd(int arrayA[],int arrayB[],int n,int n2){
	int sum1=0;
	int sum2=0;
	int total;
	for (int i = 0;i < n; i++){
		if(arrayA[n-i-1]==1){
		sum1=sum1+pow(2,i);

		}
	}
	//cout<<sum1<<endl;
	for (int i=0; i < n2; i++){
				if (arrayB[n-i-1]==1){
			sum2=sum2+pow(2,i);
			
		}
	}

total=sum1+sum2;
return total;
}




int main(){
	int array1[12] = {1,1,1,0,1,1,1,0,1,0,1,1};
	int array2[2] = {1,1};
	int n1=12;
	int n2=2;
cout<<binright(array1,n)<<endl;
return 0;
}