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

void ins_sort(int arr[], int size)
{
    for(int i = 1; i<size; i++)
    {
        int j;
        int temp = arr[i]; //storing the current value
        for(j = i-1; j>=0; j--)
        {
            if(arr[j] > temp)
                arr[j+1] = arr[j]; //copying the element to the next index(shift)

            else
                break;
        }
        arr[j+1] = temp; //replacing the value to the correct position
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
    ins_sort(arr, size);
    cout << "After :- " << endl;
    displayArray(arr, size);

    return 0;
}