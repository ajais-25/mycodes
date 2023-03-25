#include<bits/stdc++.h>
using namespace std;

//an arrray contains 2m+1 numbers, where m numbers occur twice, find the unique element


int uniqueElement(int arr[], int n)
{

    int unique = 0;
    for(int i = 0; i<n; i++)
    {
        unique = unique ^ arr[i];
    }

    return unique;

}

void inputArray(int arr[], int size)
{

    cout<<"Enter the Array Elements :-" <<endl;
    for(int i = 0; i <size; i++)
        cin>>arr[i];

}

int main()
{

    int arr[100000];
    int size;

    cout<<"Enter the size of the Array" <<endl;
    cin>>size;

    inputArray(arr, size);

    cout<<"The unique element is : " <<uniqueElement(arr, size) <<endl;

    return 0;

}