#include <iostream>

using namespace std;

int main()

{
	/*
	0001
	0010
	0100
	1000      burada 0,0 ; 1,0 ; 2,0 şeklinde koordinat düzlemini düşün
	*/ 

	
	cout << "ters birim matrisin kenar birim sayisini giriniz" << endl;
	int kac;
	cin >> kac;
	
	for (int i = 0; i < kac; i++) {
		for (int j = 0; j < kac ; j++) {
			if (i + j == 3 )  // bunun yapılma sebebi i ve j nin satırının toplamı 3 olduğu için
				cout << "1";
			else
				cout << "0";
		}
		cout << endl;
	}
	
	
	return 0;
}
