#include<bits/stdc++.h>
using namespace std;

void reverse(int arr[], int n)
{
    int i = 0, j = n-1;
    while(i<=j)
    {
        swap(arr[i], arr[j]);
        i++;
        j--;
    }
}

void input(int arr[], int n)
{
    cout << "Enter the array elements" << endl;
    for(int i = 0; i<n; i++)
        cin >> arr[i];
}

void display(int arr[], int n)
{
    cout << "The array elements are :-" << endl;
    for(int i = 0; i<n; i++)
        cout << arr[i] << " ";
    cout << endl;
}

int main()
{

    int arr[10000], size, k;
    cout << "Enter the size of the array" << endl;
    cin >> size;

    input(arr, size);
    
    cout << "Enter the no of positions to rotate" << endl;
    cin >> k;

    reverse(arr, size - k);
    reverse(arr + size - k, k);
    reverse(arr, size);

    display(arr, size);

    return 0;
}