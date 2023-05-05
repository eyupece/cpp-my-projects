#include <iostream>

using namespace std;

int main()

{
	cout << "birim matrisin kenar birim sayisini giriniz" << endl;
	int kac;
	cin >> kac;
	
	for (int i = 0; i < kac; i++) {
		for (int j = 0; j < kac ; j++) {
			if (i == j)
				cout << "1";
			else
				cout << "0";
		}
		cout << endl;
	}
	
	
	return 0;
}
