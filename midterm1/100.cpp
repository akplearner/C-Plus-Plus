#include <iostream>
using namespace std;
int main() {
	int n=7;    	
	
	int middle = (n / 2) + 1;
	for (int r = 1; r <= n; r++) {
		   for (int c = 1; c <= n; c++) {
			         if (r == middle && c == middle)
						          cout << "*";
					       else if ((r == c && r + c == n + 1) || c < middle)
							            cout << "x";
						         else if ((r == c && r + c == n + 1) || c > middle)
									          cout << "+";
								       else
										            cout << " ";
									      } //for
		      cout << endl;
	} //for

	

 middle = (n / 2) + 1;
for (int r = 1; r <= n; r++) {
	   for (int c = 1; c <= n; c++) {
		         if (r == middle && c == middle)
					          cout << "*";
				       else if ((r == c || r + c == n + 1) && c < middle)
						            cout << "x";
					         else if ((r == c || r + c == n + 1) && c > middle)
								          cout << "+";
							       else
									            cout << " ";
								      } //for
	      cout << endl;
} //for





	
 middle = (n / 2) + 1;
for (int r = 1; r <= n; r++) {
	   for (int c = 1; c <= n; c++) {
		         if (r == middle && c == middle)
					          cout << "*";
				       else if ((r == c || r + c == n + 1) && c < middle)
						            cout << "+";
					         else if ((r == c || r + c == n + 1) && c > middle)
								          cout << "x";
							       else
									            cout << " ";
								      } //for
	      cout << endl;
} //for

	return 0;
}
