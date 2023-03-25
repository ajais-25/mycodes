#include<bits/stdc++.h>
using namespace std;

//array of size n contains 1 to n-1 elements atleast once and a single value id=s present twice,  find the element

int duplicate(int arr[], int n)
{

    int ans = 0;

    //XOR ing all elements in the array
    for(int i = 0; i<n; i++)
        ans = ans ^ arr[i];

    //XOR ing [1 to n-1]
    for(int i = 0; i<n ; i++)
        ans = ans ^ i;

    return ans;

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
    int n;

    cout<<"Enter the size of the array" <<endl;
    cin>>n;

    inputArray(arr, n);

    cout<<"The duplicate element is : " <<duplicate(arr, n) <<endl;
}