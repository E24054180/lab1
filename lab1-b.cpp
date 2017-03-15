#include<iostream>
using namespace std;
int main(){

	int num1,num2;
	
	cout<<"Please enter a number:"<<endl;
	
	cin>>num1;
	
	cout<<num1<<endl;
	
	while(num1>1){

	num2=num1%2;
	
	if(num2==1){
	
	num1=3*num1+1;
	}
	
	else{
	
	num1=num1/2;
	}

	cout<<num1<<endl;
	
	}
	return 0;
	}





