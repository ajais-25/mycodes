#include<bits/stdc++.h>
using namespace std;

void displayArray(int arr[], int size)
{
    for(int i = 0; i<size; i++)
        cout << arr[i] << " " ;

    cout << endl;
}

void inputArray(int arr[], int size)
{
    cout << "Enter the array elements" << endl;
    for(int i = 0; i<size; i++)
        cin >> arr[i];
}

void bubl_sort(int arr[], int size)
{
    for(int i = 1; i<size; i++)
    {
        bool swaped = false;
        for(int j = 0; j<size-i; j++)
        {
            if(arr[j] > arr[j+1])
            {
                swaped = true; //checking if already sorted if not
                swap(arr[j], arr[j+1]);
            }
        }
        if(swaped == false)
            break;
    }
}

int main()
{

    int arr[10000];
    int size;

    cout <<"Enter the size of the array" << endl;
    cin >> size;

    inputArray(arr, size);
    cout << "Before :- " << endl;
    displayArray(arr, size);
    bubl_sort(arr, size);
    cout << "After :- " << endl;
    displayArray(arr, size);

    return 0;
}