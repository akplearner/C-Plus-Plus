#include<iostream>
using namespace std;

int toBinary(int n){
	if(n<2) return n;
	return 10*toBinary(n/2)+(n%2);
}
int main() {
	int x;
	x=toBinary(23);
	cout << x << endl;;   
	return 0;
}

