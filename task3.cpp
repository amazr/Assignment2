#include <iostream>
using namespace std;

/*create bool array of length 100
  set indices to true or false based on prime-ness
  use sieve of erastosthenes */

int main() {

	int L = 100;
	bool isPrime[L];

	//Initialize isPrime to all true EXCEPT the first 2 indices
	for (int i = 0; i < L; i++) {
		if (i < 2) {
			isPrime[i] = false;
		}
		else {
			isPrime[i] = true;
		}
	}

	//Sets values to !prime
	//for loop starts at 2 and goes to 9, or i^2 < L, or i < sqrt(L)
	for (int i = 2; i * i < L; i++) {
		if (isPrime[i]) {	
			//starts at twice i and incrememnts to each !prime number and then sets that isPrime element to false
			for (int j = i * 2; j < L; j += i) {
				isPrime[j] = false;
			}
		}
	}
	
	//displays all the prime indices of isPrime array
	for (int i = 0; i < L; i++) {
		if (isPrime[i]) {
			cout << i << " is prime" << endl;
		}
	}





	return 0;
}