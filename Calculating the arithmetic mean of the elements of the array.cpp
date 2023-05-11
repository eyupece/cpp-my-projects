#include <iostream> 
using namespace std;


int main() {
	cout << Enter 7 numbers and calculate the arithmetic mean";
	int a[7];

	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5] >> a[6]; 
	int toplam = 0;
	
	
		for (int i = 0; i < 7; i++) {
			toplam += a[i];
		}
		
	cout << "arithmetic mean = " << (float)toplam / 7 << endl;
		return 0;
}
