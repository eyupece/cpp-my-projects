#include <iostream> 
using namespace std;

// Mersenne Sayısı = 2^n - 1 

/*

mersenne(4) = mersenne(3)*2 + 1

mersenne(3) = mersenne(2)*2 + 1

mersenne(2) = mersenne(1)*2 + 1
*/

int mersenne(int n) {

	if (n == 0)
		return 0;

	return mersenne(n - 1) * 2 + 1;
}

bool asalmi(int a) {
	if (a < 2)
		return false;
	for (int j = 2; j <= a / 2; j++) {
		if (a % j == 0) {
			return false;
		}
	}
	return true;
}

int main() {

	int count = 0;
	int i = 1;

	cout << "How many prime Mersenne numbers do you want to display? ";
	cin >> count;
	cout << "------------" << endl;

	while (count > 0) {
		if (asalmi(mersenne(i))) {
			cout << mersenne(i) << endl;
			count--;
		}
		i++;
	}

	return 0;
}
