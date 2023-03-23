#include<iostream>
using namespace std;


void inputArray(int arr[], int size)
{

    cout<<"Enter the Array Elements :-" <<endl;
    for(int i = 0; i <size; i++)
        cin>>arr[i];

}


void printArray(int arr[], int n)
{

    for(int i = 0; i<n; i++)
        cout<<arr[i] <<" ";
    cout<<endl;

}

void reverseArray(int arr[], int n)
{

    for(int i = 0, j=n-1; i<=j; i++,j--)
    {
        swap(arr[i], arr[j]);
    }

}

int main()
{

    int arr[100000];
    int size;
    cout<<"Enter the size of the Array" <<endl;
    cin>>size;    

    inputArray(arr, size);

    cout<<"The reverse array is :-" <<endl;

    reverseArray(arr,size);
    printArray(arr,size);

    return 0;

}