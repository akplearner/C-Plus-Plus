#include<iostream>
using namespace std;
//Not properly working and adequate for this example.
/*string rectangle(int a){
	if(a<=1){return "**********\n";}
	for(int row=0;row<=a;++row){
		for(int col=1;col<=10;++col){	
			cout<<"*";
		}
		cout<<endl;
	}
}*/
string rectangle(int a){
	if(a<=1){return "**********\n";}
	return rectangle(a-1)+rectangle(1);
}

int main(){
	int n;
	cout<<"Enter number of rows in rectangle: ";
	cin>>n;
	cout<<rectangle(n)<<endl;
	return 0;
}
