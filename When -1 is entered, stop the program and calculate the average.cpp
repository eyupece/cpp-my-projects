#include <iostream> 

using namespace std;



int main()

{
	cout << "Hi! Please enter  numbers. But note that entering -1 will terminate the process.! " << endl;
	int toplam = 0;

	int sayi = 0;

	int okunan = 0;

	for (;;) {

		cin >> okunan;

		if (okunan == -1)

			break;

		toplam += okunan;

		sayi++; // girilme sebebi -1'i ortalamaya dahil etmeme

	}

	cout << "average is " << (float)toplam / sayi << endl;

	return 0;

}

