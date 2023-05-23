#include <iostream>
#include <algorithm>

using namespace std;

int binnary(int arr[], int search_one, int search_two, int key)
{
    while (search_one <= search_two)
    {
        int hasil = search_one + (search_two - search_one) / 2;
        if (arr[hasil] == key)
        {
            return hasil;
        }
        else if (arr[hasil] < key)
        {
            search_one = hasil + 1;
        }
        else
        {
            search_two = hasil - 1;
        }
    }
    return -1;
}

int main()
{
    int arr[] = {12, 15, 25, 17, 11, 19, 21, 22, 13, 24, 29};
    int n = sizeof(arr) / sizeof(arr[0]);

    sort(arr, arr + n);

    int key;

    cout << "\n";
    cout << "Masukan Target Yang Dicari : ";
    cin >> key;
    cout << "\n";

    int res = binnary(arr, 0, n - 1, key);

    if (res == -1)
    {
        cout << "Hasil Target Tidak Ditemukan."
             << "\n";
    }
    else
    {
        cout << "Hasil Target Ditemukan."
             << "\n";
    }
}