#include <iostream>
#include <conio.h>

using namespace std;

int data[10], data2[10];
int n;

int swap(int a, int b)
{
    int t;
    t = data[b];
    data[b] = data[a];
    data[a] = t;
}

int input()
{
    cout << "Masukan Jumlah Data : ";
    cin >> n;

    cout << "\n";

    for (int i = 0; i < n; i++)
    {
        cout << "Masukan Data Ke " << i + 1 << " : ";
        cin >> data[i];
        data2[i] = data[i];
    }
    cout << "\n";
}

int show()
{
    for (int i = 0; i < n; i++)
    {
        cout << "[" << data[i] << "]";
    }
    cout << "\n";
}

int bubblesort()
{
    for (int i = 1; i < n; i++)
    {
        for (int y = n - 1; y >= i; y--)
        {
            if (data[y] < data[y - 1])
            {
                swap(y, y - 1);
            }
        }
        show();
    }
    cout << "\n";
}

int main()
{
    cout << "Bubble Sort"
         << "\n";
    cout << "-----------"
         << "\n";
    input();
    cout << "\n";

    cout << "Proses bubble sort"
         << "\n";
    show();
    bubblesort();
    return 0;
}