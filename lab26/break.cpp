#include <iostream>
using namespace std;

int main(){
	int n,even,count=0;
	cout<<"Enter number that is even less then 100: ";
	cin>>n;
	for(int i=0;i<n;i++){
		cout<<i<<"";
		if(i/2>100){break;}
		cout<<endl;
	}
	return 0;
}
