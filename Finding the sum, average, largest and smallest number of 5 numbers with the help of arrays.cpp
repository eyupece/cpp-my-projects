#include <iostream>

using namespace std;


int main() {
    cout << "Enter 5 Numbers" << endl;
    int a[5];
    int toplams = 0;
    
    for (int i = 0; i < 5; i++) {
        cin >> a[i];
      
        toplams += a[i];
        
    
    }
    int eb = a[0];
    int ek = a[0];
        for (int i = 0; i < 5; i++) {
            if (a[i] > eb)
                eb = a[i];
            if (a[i] < ek)
                ek = a[i];
        }
        cout << "biggest of 5 numbers = " << eb << endl;
        cout << "smallest of 5 numbers = " << ek << endl;
        cout << "Total =  " << toplams << endl;
        cout << "Average =  " << (float)toplams/5 << endl;
    
    return 0;
}
