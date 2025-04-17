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

    for (int i=0;i<n;i++)
    {
       cout << "array index ke- " << i << " : ";
       cin >> arr[i];
    }
}

// create function mergesort 
void mergesort(int low,int high)
{
    
    if (low >= high) // step 1
    {
        return; // step 1 a
    }

    int mid = (low + high) / 2; // step 2

    // step 3
    // fungsi rekursi - memanggil diri sendiri
    mergesort(low, mid); // step 3a
    mergesort(mid + 1, high); // step 3b

    // step 4
    int i = low; // step 4a
    int j = mid + 1; // step 4b
    int k = low; // srep 4c

    while (i <= mid && j <= high) // step 4d
    {
        if (arr[i] <= arr[j]) 
        {
            B[k] = arr[i];
            i++;
        }
        else 
        {
            B[k] = arr[j];
            j++;
        }
        k++;
    }
    while (j <= high)
    {
        B[k] = arr[j];
        j++;
        k++;
    }

    // step 5
    for (int y = low; y <= high; y++)
    {
        arr[y] = B[y];
    }
}

void output() {
    cout << "\ndata setelah diurutkan (mergesort):";
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main()
{
    input();
    mergesort(0, n -1);
    output();
}