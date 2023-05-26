#include <iostream>
using namespace std;
			
int fark(int* x) {
	int boyut;

	int eb = INT_MIN; // en küçük değer
	int ek = INT_MAX; // en büyük değer

	
	cout << "What size do you want the array to be?(please do not exceed 100) ";
	cin >> boyut;

		for (int i = 0; i < boyut; i++) {
			cin >> x[i];
				if (x[i] > eb)
					eb = x[i];
				if (x[i] < ek)
					ek = x[i];
			}
		return eb-ek;
		}

int main()
{
		
	int a[100];
		cout << "Difference between largest and smallest number: " << fark(a) << endl;
	
	return 0;
}
