#include <iostream>
using namespace std;

int arr [20], B[20];

int n;

void input() {
    while (true){
        cout << "masukkan panjang element array: ";
        cin >> n;

        if (n <= 20) {
            break;
        }
        else {
            cout << "\nmaksimal panjang array adalah 20";
            
        }
    }

    cout << "\n========================";
    cout << "\nInputkan isi element array";
    cout << "\n========================" << endl;
}