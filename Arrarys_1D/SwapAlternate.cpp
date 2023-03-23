#include<bits/stdc++.h>
using namespace std;


void inputArray(int arr[], int size)
{

    cout<<"Enter the Array Elements :-" <<endl;
    for(int i = 0; i <size; i++)
        cin>>arr[i];

}


void swapAlter(int arr[], int n)
{

    for(int i = 0; i<n-1; i+=2)//i-1 to ignore the last element
    {
        swap(arr[i], arr[i+1]);
    }

}

void printArray(int arr[], int n)
{

    for(int i = 0; i<n; i++)
        cout<<arr[i] <<" ";
    cout<<endl;

}

int main()
{

    int arr[100000];
    int size;

    cout<<"Enter the size of the Array" <<endl;
    cin>>size;

    inputArray(arr, size);
    swapAlter(arr, size);

    cout<<"The modified array is :-" <<endl;

    printArray(arr, size);


    return 0;

}