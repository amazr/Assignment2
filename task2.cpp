#include <iostream>
#include <array>
using namespace std;

int main() {
	int numbers[5] = { 1, 2, 3, 4, 5 };
	bool isPrime[5];
	bool primeFlag = false;

	int arraySize = sizeof(numbers) / sizeof(numbers[0]);

	//Set the isPrime array
	for (int i = 0; i < arraySize; i++) {

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
	for (int i = 0; i < arraySize; i++) {
		cout << numbers[i] << " " << isPrime[i] << endl;
	}

	return 0;
}
