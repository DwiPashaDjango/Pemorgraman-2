#include <iostream>

using namespace std;

void selectionsort(int arr[], int length)
{
    int temp;
    int loc_min;

    for (int i = 0; i < length; i++)
    {
        loc_min = i;
        for (int y = i; y < length; y++)
        {
            if (arr[y] < arr[loc_min])
            {
                loc_min = y;
            }
        }
        temp = arr[i];
        arr[i] = arr[loc_min];
        arr[loc_min] = temp;
    }
}

void printarray(int arr[], int length)
{
    for (int i = 0; i < length; i++)
    {
        cout << arr[i] << " ";
    }
    cout << "\n";
}

int main()
{
    int number[11] = {12, 15, 25, 17, 11, 19, 21, 22, 13, 24, 29};
    cout << "\n";

    cout << "Sebelum Selection Sort : ";
    printarray(number, 11);
    selectionsort(number, 11);

    cout << "\n";

    cout << "Sesudah Selection Sort : ";
    printarray(number, 11);

    cout << "\n";
    return 0;
}