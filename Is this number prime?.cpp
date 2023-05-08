#include <iostream> 

  

using namespace std; 

  

bool asalmi(int n) { 

    if (n < 2) { // n değeri 2'den küçükse, false döndür 

        return false; 

    } 

    for (int i = 2; i <= n / 2; i++) { // i'nin değeri n/2'den büyük olamaz 

        if (n % i == 0) { 

            return false; 

        } 

    } 

    return true; 

} 

  

int main() { 

    cout << "Asal Sayi ise 1 degilse 0 dondur" << endl; 

    cout << "-1 girersen program sonlanir " << endl; 

    int x; 

    while (true) { // sonsuz döngü oluşturuldu 

        cin >> x; 

        if (x == -1) { // kullanıcının -1 girdiğinde döngüden çıkılıyor 

            break; 

        } 

        cout << asalmi(x) << endl; 

    } 

    return 0; 

} 
