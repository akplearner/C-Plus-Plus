#include <iostream>
using namespace std;

int triangle(int n){
	if(n==0) return 0;
	return n+triangle(n-1);
}
int main(){
	int n=0;
	cout<<triangle(n)<<endl;
	return 0;
}
