#include <iostream> 
using namespace std;


int main() {
	cout << "Enter 7 numbers and find the largest 3 numbers ";
	int n;
	int a[n];

	cin >> a[0] >> a[1] >> a[2] >> a[3] >> a[4] >> a[5] >> a[6]; // NOT: ÇOK DAHA BASİT YOLU VAR FAKAT KONU OLARAK GÖRMEDİĞİM İÇİN EKLEMEK İSTEMEDİM !! 

	int eb = -1000000000; // 3 Identifierın bu şekilde olmasının sebebi girilen değerlerin en büyüğü baştaysa 3 değeri de bu en büyük sayı olarak algılıyor (a[0] girilmiş olsaydı
	int e2b = -1000000000; // The 3 Identifier is like this because if the largest of the entered values ​​is first, then 3 values ​​are perceived as the largest number (if a[0] was entered
	int e3b = -1000000000;
	for (int i = 0; i < 7; i++) {
		if (a[i] > eb) {
			e3b = e2b;
			e2b = eb;
			eb = a[i];
		}
		else if (a[i] > e2b) {
			e3b = e2b;
			e2b = a[i];
		}
		else if (a[i] > e3b )
			e3b = a[i];
	}
	cout << "largest number = " << eb << endl;
	cout << "2nd largest number = " << e2b << endl;
	cout << "3rd largest number = " << e3b << endl;

	return 0;
}
