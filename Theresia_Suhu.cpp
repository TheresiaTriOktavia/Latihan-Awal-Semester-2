#include<iostream>
using namespace std;
int main(){

	double celcius;
	float reamur, fahrenhait, kelvin;
	
	cin>>celcius;
	reamur = celcius*4/5;
	fahrenhait = (celcius*9/5) + 32;
	kelvin = celcius + 273;
	
	cout<<"Celcius 	: "<<celcius;
	cout<<endl;
	cout<<"Reamur		: "<<reamur;
	cout<<endl;
	cout<<"Fahrenhait 	: "<<fahrenhait;
	cout<<endl;
	cout<<"Kelvin 		: "<<kelvin;
	
	return 0;

}
