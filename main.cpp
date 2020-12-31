#include <iostream>
#include "adder.h"
using namespace std;

//float add(float a,float b);

int factorial(int n) {
	if (n == 1) {
		return 1;
	}
	else {
		return n * factorial(n - 1);
	}
}

int main(){
	//cout << "HelloW!\n"; 
	//cout << factorial(6);
	//cout << "\n\n\n";
	cout << add(62.1f, 532.1f) << "\n\n";
	return 0;
}