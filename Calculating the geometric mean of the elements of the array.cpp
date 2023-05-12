#include <iostream> 
#include <cmath>
using namespace std;

int main() {
    cout << "Enter the size of the array.   ";
    int size;
    cin >> size;
    int* arr = new int[size];
    cout << "Enter the " << size << " elements of the array. " << endl;

    for (int i = 0; i < size; i++) {

        cin >> arr[i];
    }
    float carpim = 1;

    for (int i = 0; i < size; i++) {
        carpim *= arr[i];
    }

    cout << "geometric mean = " << pow(carpim, 1.0 / size) << endl;
    return 0;
}

/* (en) why 1.0 on line 16
The error occurs because of the interpretation of a fractional expression as integer division when using the pow function. 
In C++, when dividing integers, the division is performed as integer division, and the result is also an integer. 
For example, the expression 1/7 is evaluated as integer division and results in 0.

However, in the calculation of the geometric mean, the divisor should be a non-zero value. 
Therefore, to obtain the correct result, the division needs to be performed among decimal numbers. 
To achieve this, one of the numbers 1 or 7 should be expressed as a decimal number. 
For instance, expressions like 1.0/7 or 1/7.0 will yield the correct result because in these cases, the division is performed among decimal numbers, and the result is a decimal number.

Hence, in order to use the pow function with the correct result, it is necessary to interpret the fractional expression as a decimal number.

*/

/* (tr) neden 1.0 16.satırda
Bu hata, pow fonksiyonunun kullanımındaki bir kesir ifadesinin tamsayı bölmesi olarak değerlendirilmesinden kaynaklanıyor. 
C++ dilinde, tamsayılar arasındaki bölme işlemi tam bölme olarak gerçekleştirilir ve sonuç da bir tamsayı olur. 
Örneğin, 1/7 ifadesi tamsayı bölmesi olduğu için sonucu 0 olarak hesaplar.

Geometrik ortalama hesaplamasında ise, bir sayının 0'dan farklı olması gerekiyor. 
Bu nedenle, doğru sonucu elde etmek için bölme işlemini ondalık sayılar arasında gerçekleştirmek gerekiyor. 
Bunu yapmak için 1 veya 7 sayılarından birini ondalık sayı olarak ifade etmek gerekiyor. 
Örneğin, 1.0/7 veya 1/7.0 gibi ifadeler doğru sonucu verecektir, çünkü bu durumda bölme işlemi ondalık sayılar arasında gerçekleşir ve sonuç da ondalık bir sayı olur.

Dolayısıyla, pow fonksiyonunu doğru sonuçla kullanabilmek için kesir ifadesinin ondalık olarak değerlendirilmesi gerekmektedir.
*/
