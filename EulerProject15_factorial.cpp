/*'''
Find nubmer of routs in 20 * 20 grid.
Mathematically, the anser is 40!/ (20!* 20!)
I guess 40!is such a big number, so that we need to use some clever way.
Or alternatively, the program probably asks to try out all the possible routes until there is no other ways.
However, I will just use my mathematical formula first
'''
*/

#include <iostream>
using namespace std;

/*
long long int factorial(int N) {
	long long int fact = 1;
	for (int i = 1; i < (N + 1);i++) {
		fact = fact*i;
	}
	return fact;
}
*/

int main() {

	long long int test2 = 1;
	for (long long int j = 21;j < 41;j++) {
		test2 = test2*j/(j-20);           // calculate 40!/ (20!* 20!) in a smart way!
	}
		cout << test2 << endl;
	system("pause");
	return 0;
}

// Answer: 137846528820