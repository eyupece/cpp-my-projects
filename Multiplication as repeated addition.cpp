#include <iostream>

using namespace std;

// Sadece toplama işlemini kullanarak çarpma işlemi yapan bir kod yazınız.
// 2 * 3 örneğine bakarsa 3 tane 2 demek yani 2 * 3 = 2+2+2
// kullanıcıdan x ve y değerlerini alıp y tane x i topla dememiz lazım


int ctopla(int x, int y) {
    if (x == 0 || y == 0)
        return 0;
    if(y >0) {
        return x + ctopla(x, y - 1);
    }
    else if (y < 0) {  // eğer ikinci ifade - olursa hata veriyor bu ifade onun için
        return x + ctopla(-x, (y - 1)*-1 );
    }
}

int main() {
    cout << "Hangi iki sayiyi carpmak istersin" << endl;
    int x, y;
    cin >> x >> y;
    cout << ctopla(x, y) << endl;
    return 0;
}
/*
ctopla fonksiyonu recursive olarak çağrıldığında, her seferinde x değeri kendisi ile toplanarak sonuca eklenecek ve y değişkeni bir azaltılarak kendini tekrar çağıracaktır. 
Bu işlem, y değişkeni sıfır olana kadar devam edecektir.

return x + ctopla(x, y-1); ifadesi, x değerinin kendisi ile toplandıktan sonra, y değişkeni bir azaltılarak ctopla fonksiyonunun kendini çağırdığını ifade etmektedir. 
Bu işlem, y değişkeni sıfır olana kadar recursive olarak tekrarlanacak ve sonunda tüm x değerleri toplamı elde edilecektir.

Örneğin, kullanıcı 3 ve 4 değerlerini girerse, ctopla(3, 4) fonksiyonu şu şekilde çalışacaktır:

1) ctopla(3, 4) fonksiyonu çağrıldı.

2) 3 değeri kendisi ile toplanarak, 3 + ctopla(3, 3) ifadesi oluştu.

3) ctopla(3, 3) fonksiyonu recursive olarak çağrıldı.

4) 3 değeri kendisi ile toplanarak, 3 + ctopla(3, 2) ifadesi oluştu.

5) ctopla(3, 2) fonksiyonu recursive olarak çağrıldı.

6) 3 değeri kendisi ile toplanarak, 3 + ctopla(3, 1) ifadesi oluştu.

7) ctopla(3, 1) fonksiyonu recursive olarak çağrıldı.

8) 3 değeri kendisi ile toplanarak, 3 + ctopla(3, 0) ifadesi oluştu.

9) ctopla(3, 0) fonksiyonu çağrıldı ve 0 değeri döndürüldü.

10) 3 + ctopla(3, 0) ifadesi 3 + 0 olarak değerlendirildi ve sonuç olarak 3 döndürüldü.

Sonuç olarak, ctopla(3, 4) ifadesi, 3 + 3 + 3 + 3 işlemine eşit olduğundan, 12 sonucu döndürülecektir.

*/
