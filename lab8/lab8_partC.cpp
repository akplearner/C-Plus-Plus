#include <iostream>
using namespace std;

int main() {
	int start=2,end=100,num_per_line=0;

	while(start<=end) {
		cout<<start<<" ";
		num_per_line +=1; //after every print,cout it once!
		if (num_per_line%10==0){ //at the 10th print,print the newline
			cout<<endl;
		}
		start +=2; //increment by 2 since we only want even!
	}
	return 0;
}
