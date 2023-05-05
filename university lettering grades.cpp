#include <iostream> 

using namespace std; 

  

int main() 

{ 

cout << "Hos geldiniz,Notunuzu giriniz" << endl; 

int sinavNotu; 

cin >> sinavNotu; 

if (sinavNotu < 50) { 

cout << sinavNotu << " F Aldiniz" << endl; 

} 

else if (50 <= sinavNotu && sinavNotu < 70) { 

cout << sinavNotu << " C Aldiniz" << endl; 

} 

else if (70 <= sinavNotu && sinavNotu < 90) { 

cout << sinavNotu << " B Aldiniz" << endl; 

} 

else if (90 <= sinavNotu && sinavNotu <= 100) { 

cout << sinavNotu << " A Aldiniz Tebrikler" << endl; 

} 

else { 

cout << "Lutfen 0-100 arasi sayi giriniz!" << endl; 

} 

return 0; 

} 
