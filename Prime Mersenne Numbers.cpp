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

	return mersenne(n - 1) * 2 + 1;
}

bool asalmi(int a) {
	if (a < 2)
		return false;
	for (int j = 2; j <= a / 2; j++) {
		if (a % j == 0) {
			return false;
		}
	}
	return true;
}

int main() {

	int howMany = 0;

	cout << "How many prime Mersenne numbers do you want to display? ";
	cin >> howMany;
	cout << "------------" << endl;


	for (int i = 1; howMany > 0; i++) {
		if (asalmi(mersenne(i))) {
			cout << mersenne(i) << endl;
			howMany--;
		}
	}
	return 0;
}
/*
int i = 1; ifadesi, döngünün başlangıcında i değişkenine 1 değerinin atanmasını sağlar. i değişkeni, Mersenne sayılarının sırasını tutmak için kullanılır.

howMany > 0; ifadesi, döngünün kaç kez çalışacağını belirler.
howMany değişkeni, kullanıcının belirlediği asal Mersenne sayısı sayısıdır.
howMany değişkeninin değeri sıfır olana kadar döngü çalışır.

i++ ifadesi, her döngü turunda i değişkeninin 1 artırılmasını sağlar.
Bu sayede, Mersenne sayılarının sırası birer birer arttırılır.

if (asalmi(mersenne(i))) { ... } ifadesi, Mersenne sayılarının asal olup olmadığını kontrol eder.
Eğer Mersenne sayısı asal ise, cout << mersenne(i) << endl; ifadesi ile o Mersenne sayısı ekrana yazdırılır.

howMany--; ifadesi, her asal Mersenne sayısı bulunduğunda howMany değişkeninin değerini 1 azaltır.
Bu sayede, kullanıcının belirlediği sayıda asal Mersenne sayısı bulunana kadar döngü devam eder.
*/
