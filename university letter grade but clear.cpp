 

#include <iostream> 

using namespace std; 

  

int main() 

{ 

cout << "Hos geldiniz,Notunuzu giriniz" << endl; //  " welcome pls enter point

int sinavNotu; 

cin >> sinavNotu; 

if (sinavNotu < 50) { 

cout << sinavNotu << " F Aldiniz" << endl; 

} 

else if ( sinavNotu < 70) { 

cout << sinavNotu << " C Aldiniz" << endl; 

} 

else if ( sinavNotu < 90) { 

cout << sinavNotu << " B Aldiniz" << endl; 

} 

else if ( sinavNotu <= 100) { 

cout << sinavNotu << " A Aldiniz Tebrikler" << endl; 

} 

else { 

cout << "Lutfen 0-100 arasi sayi giriniz!" << endl; 

} 

return 0; 

} 
