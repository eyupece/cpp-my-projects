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
	return  mersenne(n - 1) * 2 + 1;
}


int main() {
	int howMany =0;
	cout << "how many Mersenne Numbers do you want us to enter ? " << endl;
	cin >> howMany;
	for (int i = 1; i <= howMany; i++) {
		
		

		cout << mersenne(i) << endl;
	}
	return 0;
}
