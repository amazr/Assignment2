#include <iostream>
using namespace std;

int main() {
	
	int L;
	cout << "How many numbers would you like to check for prime-ness: ";
	cin >> L;

	int numbers[L];
	bool isPrime[L];
	bool primeFlag = false;
	
	//Set the numbers array
	for (int i = 0; i < L; i++) {
		numbers[i] = (i + 1);
	}

	//Set the isPrime array
	for (int i = 0; i < L; i++) {

		if (numbers[i] < 2) {
			primeFlag = false;
		}

		for (int j = 2; j < numbers[i]; j++) {
			if (numbers[i] % j == 0) {
				primeFlag = false;
				break;
			}
		}

		if (primeFlag) {
			isPrime[i] = true;
		}
		else {
			isPrime[i] = false;
		}

		primeFlag = true;

	}

	//display isPrime array
	cout << "numbers      p=1 !p=0" << endl;
	for (int i = 0; i < L; i++) {
		cout << "   " << numbers[i] << "	        " << isPrime[i] << endl;
	}

	return 0;
}
