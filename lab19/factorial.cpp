#include <iostream>
using namespace std;

int factorial(int x){
	if(x<=1) return 1;
	return x*factorial(x-1);
}

int main(){
	int n;
	cout<<"enter n: ";
	cin>>n;
	cout<<n<<" factorial is "<<factorial(n)<<endl;
	return 0;

}
