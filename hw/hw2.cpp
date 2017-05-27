/*
Anthony Pena
homework 2
csci111
   */

#include <iostream>
#include <iomanip>
using namespace std;

int main(){
	int weight,height;
	double BMI;
	
	cout<<"Body Mass Index Program\n";
	cout<<"What is  your height measure in inches? ";
	cin>>height;
	if(height<=10){
		cout<<"Input for height must be 10 inches or more. \n";
		cout<<"Terminating the program";
		return 0;
	}

	cout<<"What is your weight measure in pounds? ";
	cin>>weight;
	while(weight<=0){
		cout<<"Please enter a weight greater than 0 lb: ";
		cin>>weight;
	}

	BMI=((double)weight*703)/(height*height);
 	cout<<"Your BMI is "<<std::setprecision(4)<<BMI<<" and is conside to be ";
	if(BMI>=18.5&&BMI<=25){
		cout<<"normal.\n";
	}else if(BMI<18.5){
		cout<<" underweight.\n";
	}else if(BMI>25){
		cout<<" overweight.\n";
	}

	return 0;
}
