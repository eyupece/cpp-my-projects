#include <iostream>
using namespace std;

int main() {

	int a[3][2] = { 5,4,1,4,0,4};
	int b[3][2] = { 0,8,3,9,3,6};
	int c[3][2];
	for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 2; j++) {
				c[i][j] = a[i][j] + b[i][j];
			}
		}
		for (int i = 0; i < 3; i++) {
			for (int j = 0; j < 2; j++) {
				cout << c[i][j] << " ";
			}
			cout << endl;
		}
	return 0;
}
