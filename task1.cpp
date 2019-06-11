#include <iostream>
using namespace std;

int main() {
	bool stop = false;
	bool isPrime;
	int checkPrime = 0;
	string stopCheck;

	while (!stop) {
		cout << "Please enter an integer: ";
		cin >> checkPrime;
		
		isPrime = true;

		if (checkPrime > 1) {

			for (int i = 2; i < checkPrime; i++) {
				
				if (checkPrime % i == 0) {
					isPrime = false;
					break;
				}
			}
		}
		else {
			isPrime = false;
		}

		if (isPrime) {
			cout << checkPrime << " is a prime number!" << endl;
		}
		else {
			cout << checkPrime << " is NOT a prime number!" << endl;
		}

		cout << endl << "Would you like to check another number? ('y'/'n'): ";
		cin >> stopCheck;
		cout << endl;

		if (stopCheck == "n") {
			stop = true;
			cout << "Exiting..." << endl;
		}
	}
	return 0;
}
