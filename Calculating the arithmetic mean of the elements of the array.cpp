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
    int toplam = 0;

    for (int i = 0; i < size; i++) {
        toplam += arr[i];
    }

    cout << "arithmetic mean = " << (float)toplam / size << endl;
    return 0;
}
