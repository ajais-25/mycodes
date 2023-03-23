#include<bits/stdc++.h>
using namespace std;


void inputArray(int arr[], int size)
{

    cout<<"Enter the Array Elements :-" <<endl;
    for(int i = 0; i <size; i++)
        cin>>arr[i];

}

int ArraySum(int arr[], int n)
{

    int sum = 0;

    for(int i = 0; i<n; i++)
        sum += arr[i];
    
    return sum;

}

int main()
{

    int arr[100000];
    int size;

    cout<<"Enter the size of the Array" <<endl;
    cin>>size;

    inputArray(arr, size);

    cout<<"The Sum of the Array elements is = " <<ArraySum(arr, size) <<endl;

    return 0;
}