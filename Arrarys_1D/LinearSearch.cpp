#include<bits/stdc++.h>
using namespace std;


bool linSearch(int arr[], int n, int key)
{
    for(int i = 0; i<n; i++)
    {
        if(key == arr[i])
            return true;
    }

    return false;

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
    int size, key;
    
    cout<<"Enter the size of the Array" <<endl;
    cin>>size;

    inputArray(arr, size);

    cout<<"Enter the element to find" <<endl;
    cin>>key;

    bool find = linSearch(arr, size, key);
    if(find)
        cout<<"Element Present" <<endl;
    else
        cout<<"Element not Present" <<endl;


    return 0;

}