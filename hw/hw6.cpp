// Pena, Anthony
// CS111 11A (11E or 22A) Homework 6

#include <iostream>
using namespace std;
#include<cstring>

int smallCol(int x[][3],int r,int c){
	int ans=100;
	//int sum=0;
	int n;
	for(int i=0;i<c;i++){
		int sum=0;
		cout<<sum<<endl;
		for(int j=0;j<r;j++){
			sum+=x[j][i];
			cout<<"i="<<i<<endl;
			cout<<"sum="<<sum<<endl;
		}
			if(sum<ans){ 
				ans=sum;
				//n=i;
			}
		cout<<"ans="<<ans<<endl;
		cout<<"n="<<n<<endl;
	}
	return ans;
}
void toUpperCase (string& x){
     for (int i=0; i<x.length();i++)
		// x[i];
		 if (x[i]>='a' && x[i]<='z')
			 x[i]=(char)(x[i]-32);
	     else  x[i];
}

void toLowerCase (string& x){
	 for (int i=0; i<x.length();i++)
	 //x[i];
		 if (x[i]>='A' && x[i]<='Z')
	     x[i]=(char)(x[i]+32);
	 else  x[i];
}

bool equals( string a, string b){
	if (a==b)return true;
	return false;
}


int main(){
	cout<<"-----part A:-----"<<endl;
	int x[2][3] = {{3, 1, 4}, {1, 5, 9}};
	cout <<"Smallest column sum = " << smallCol (x, 2, 3) << endl;
	// from the 2-d array x that has size 2 x 3, find the smallest col sum
	// output will be 4 since col#0 contains 3 and 1 is smallest.
	
	cout<<"-----part B:-----"<<endl;
	string a,b;
	cout<<"Sample I/O#1:\n";
	cout<<endl;
	cout<<"Please enter two words: ";
	cin>>a>>b;

	cout<<endl;
	cout<<"words in uppercase: ";
	toUpperCase(a);
	toUpperCase(b);
	cout<<a<< " " <<b<< endl;

	cout<<"Words in lowercase: ";
	toLowerCase(a);
	toLowerCase(b);
	cout<<a<< " " <<b<< endl;

 	if (equals(a,b))
		cout<< "Both strings are equal.";
	else cout<< "The input strings are different";	
	cout<<endl;

	return 0;
}
