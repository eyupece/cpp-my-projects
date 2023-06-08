#include <iostream>  
using namespace std; 

// string için karakter sayısı + 1 kadar yer ayarlamamız gerekir. Misal  
// abc sayısı için a,b,c, \0 olmalı.  
// 04:27:46PM ifadesi gibi düşünürsek 10+1 den 11 karakter olmalı.  

int main() { 
    cout << "Please enter a time in hh:mm:ssAM/PM format! "; 
    char s[11]; 
    cin >> s; 

  if (s[8] == 'P') { 

    char x[3]; 
    x[0] = s[0]; 
    x[1] = s[1]; 
    x[2] = '\0'; 

/*  cout << (int)x[0] << endl; 
cout << (int)x[1] << endl; 
ASCII tablosuna göre rakamlar 48-57 */  // buradan comment işaretlerini silip değerleri kontrol et 

    int saat = 0; 
    saat += (x[0] - 48) * 10; // onlar basamağından dolayı  
    saat += x[1] - 48; 
    saat += 12; // + 12 sebebi 12'lik sistemden 24'lük sisteme geçiş. 

    s[0] = (saat / 10) +48; // + 48 in sebebi s char türünde bir değişken ve 48-57 arasında rakamlar var. 
    s[1] = saat%10 +48 ;  
  
    s[8] = '\0';
    cout << s << endl;
  }
  
  else if (s[8] == 'A') { 
    s[8] = '\0'; 
    cout << s << endl; 
  } 
  
  else { 
    cout << "Please available value" << endl; 
  } 
 
  return 0; 
} 
