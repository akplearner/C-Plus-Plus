#include <iostream>
using namespace std;

int main(){
	cout<<"---Part 1---"<<endl;
	string words[4]={"How","are","you?",""};
	for(int i=0;i<=2;i++){
		cout<<words[i];//line a)howareyou?
	}cout<<endl;
	for(int i=0;i<=2;i++){
		cout<<words[i][i]; //line b)Hru
	}cout<<endl;

	return 0;
}
