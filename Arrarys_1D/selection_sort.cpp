#include<bits/stdc++.h>
using namespace std;

void displayArray(int arr[], int size)
{
    for(int i = 0; i<size; i++)
        cout << arr[i] << " " ;

    cout << endl;
}

void sel_sort(int arr[], int size)
{
    for(int i = 0; i<size; i++)
    {
        int minIndex = i;
        for(int j = i+1; j<size; j++)
        {
            if(arr[j] < arr[minIndex])
                minIndex = j; //finding the min Index
        }
        swap(arr[minIndex], arr[i]); //swaping the min Index and the i th Index
    }
}

void inputArray(int arr[], int size)
{
    cout << "Enter the array elements" << endl;
    for(int i = 0; i<size; i++)
        cin >> arr[i];
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
    sel_sort(arr, size);
    cout << "After :- " << endl;
    displayArray(arr, size);

    return 0;
}