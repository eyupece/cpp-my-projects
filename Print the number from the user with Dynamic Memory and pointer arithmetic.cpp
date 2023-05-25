#include <iostream>
using namespace std;

int main() {

	cout << "Please enter 5 numbers " << endl;

	int* p = (int*)malloc(sizeof(int) * 5);
	
	for (int i = 0; i < 5; i++) {  // dynamic memory
		cin >> p[i];
	}
	for (int i = 0; i < 5; i++) {
		cout << p[i] << " ";
	}
	cout << endl;
	cout << "----------" << endl;

	for (int i = 0; i < 5; i++) {  // pointer arithmetic
		cin >> *(p+i);	
	}
	for (int i = 0; i < 5; i++) {
	
		cout << *(p + i) << " ";
	}

	return 0;
}
