#include <iostream>
using namespace std;

int main() {
	int num,temp;
	cout<<"Please input a 4-digit positive integer: ";
	cin>>num;
	
	temp=num;

	if(temp>=1000 || temp<=9999){
		int d1,d2,d3,d4,sum;
		d1=temp/1000; temp%=1000;
		d2=temp/100; temp%=100;
		d3=temp/10; temp%=10;
		d4=temp/1;
		
		sum=d1+d2+d3+d4;

		cout<<"The sum of all digits in "<<num<<" therefore sum of "<<d1<<"+"<<d2<<"+"<<d3<<"+"<<d4<<" is "<<sum;

	}
	return 0;
}
