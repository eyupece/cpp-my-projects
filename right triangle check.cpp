#include <iostream> 

using namespace std; 

  

int main() 

{ 

    cout << "birinci kenari giriniz" << endl; 

    int a,b,c; 

    cin >> a; 

     cout << "ikinci kenari giriniz" << endl; 

    cin >> b; 

     cout << "ucuncu kenari giriniz" << endl; 

    cin >> c; 

  

    if (a*a + b*b == c*c || a * a + c * c == b * b || c * c + b * b == a * a) {  // == olarak kullanmayı unutma ! 

        //  ||(or) ifadesini kullanma sebebimiz hipotenüsü ortada veya başta girme ihtimalinden dolayıdır 

     cout << "bu ucgen bir dik ucgendir" << endl; 

} 

    else{ 

     cout << "bu ucgen bir dik ucgen degildir" << endl; 

} 

    return 0; 

}    
