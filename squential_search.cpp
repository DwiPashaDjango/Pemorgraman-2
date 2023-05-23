#include <iostream>

using namespace std;

int squential(int arr[], int n, int key)
{
    for (int i = 0; i < n; i++)
    {
        if (arr[i] == key)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {12, 15, 25, 17, 11, 19, 21, 22, 13, 24, 29};
    int n = sizeof(arr) / sizeof(arr[0]);

    int key;
    cout << "\n";
    cout << "Masukan Angka Yang Di Cari : ";
    cin >> key;
    cout << "\n";

    int res = squential(arr, n, key);

    if (res == -1)
    {
        cout << "Angka Tidak Ada Di Dalam Elemen Array."
             << "\n";
    }
    else
    {
        cout << "Angka Yang Di Cari Berada Di Indeks Ke - " << res << "\n";
    }

    return 0;
}
