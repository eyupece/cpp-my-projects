 // longversion branch has different path

#include <iostream> 

using namespace std; 

  

int main() 

{ 

    cout << "birinci sayiyi giriniz" << endl; 

  

    int a, b, c; 

    cin >> a; 

  

     cout << "ikinci sayiyi giriniz" << endl; 

    cin >> b; 

  

     cout << "ucuncu sayiyi giriniz" << endl; 

    cin >> c; 

   

    int enBuyuk = a; 

    if (b > enBuyuk) 

        enBuyuk = b; 

  

    if (c > enBuyuk) 

        enBuyuk = c; 

        

    cout << "en Buyuk " << enBuyuk << endl; 

     

   return 0; 

} 
