#include <iostream>
using namespace std;

int sum(int a,int b){
	int s;
	s=a+b;
	return s;
}
void reset(int a,int b){
	a=a+b;
	b=a-b;
	a=a-b;
	cout<<"z:"<<a<<" y:"<<b<<endl;

	int t;
	t=b;
	b=a;
	a=t;
	cout<<"z:"<<a<<" y:"<<b<<endl;
}

void makeNegative(int a){
a= a*(-1);
}

void boost(int a,int b){
	for(int i=1;i<=b;i++){
		a=a+b;
		cout<<a;
	}
}

int mystery(int a,int b){
 return a;	
}

int main(){

	cout<<" PART 1: "<<endl;
	int x=0,y=1,z=2;
	
	x=sum(z,y);//(a) Set x to the sum: 3
	cout<<"sum(z,y) is "<<x;
	cout<<endl;

	cout<<"Initially z:"<<z<<" y:"<<y<<endl;
	reset(y,z);//(b) Replace y by the value of z
	
	makeNegative(z);

	boost(x,y);

	boost(y,mystery(y,z));


	cout<<endl;
	return 0;
}
