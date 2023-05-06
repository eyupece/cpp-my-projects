#include <iostream> 

#include <math.h> 

using namespace std; 

  

int main() 

{ 

      cout << "dik ucgenin birinci kenarini giriniz" << endl; 

      int a,b; 

      float c,d,e; 

    cin >> a; 

      cout << "dik ucgenin ikinci kenarini giriniz" << endl; 

    cin >> b; 

    c = sqrt(pow(a, 2) + pow(b, 2)); /*bu ifadeyi bir önceki örnekte açıkladım.Önce hipotenüsü bulduk. 

    Çünkü çevreyi bulurken ihtiyacımız olacak */ 

    d= a*b/2;  

   e = a + b + c; 

    cout << " ucgenin alani " << d << "'dir" << endl; 

    cout << " ucgenin cevresi " << e << "'dir" << endl; 

     

      return 0; 

} 
