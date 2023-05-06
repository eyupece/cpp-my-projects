#include <iostream>
using namespace std;

// n!/(r!(n-r)!)

int fac(int x) {
	if (x == 0) { // 0!=1 
		return 1;
	}
	int sonuc =1;
for (int i=x; i > 0; i--) {
	sonuc *= i;
	
     }
return sonuc;
}

int main()
{
	cout << "Combination Calculator." << endl;
	cout << "Please enter the number pair(x,y)" << endl;
	char op;
	int sayi,sayi2;
	cin >> sayi >> op >> sayi2;
	if (op == ',')

		if (sayi < sayi2) {
			cout << "1st number cannot be less than 2nd number" << endl;
		}
		else if (sayi < 0 || sayi2 < 0) {
		cout <<" numbers cannot be less than 0 " << endl;
	}
	else {

		 cout << "Result = " << fac(sayi) / (fac(sayi2) * fac((sayi - sayi2))) << endl;
	}
	return 0;
}
