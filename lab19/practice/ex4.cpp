#include<iostream>
using namespace std;

int printBinary(int n){
	if(n<=0) return 0;
	return 10*printBinary(n/2)+(n%2);
}
int main(){
	cout<<printBinary(23)<<endl;

	cout<<"3/2="<<3/2<<endl;
	cout<<"3%2="<<3%2<<endl;
	cout<<"1/2="<<1/2<<endl;
	cout<<"1%2="<<1%2<<endl;
	cout<<"1%3="<<1%3<<endl;
	return 0;
}
