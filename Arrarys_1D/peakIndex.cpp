#include<bits/stdc++.h>
using namespace std;


int peakIndex(int arr[], int n)
{

    int s = 0, e = n - 1;
    int mid = s + (e-s)/2;

    while(s<e)
    {
        if(arr[mid] < arr[mid+1])
            s =mid + 1;
        else
            e = mid;
        mid = s + (e-s)/2;
    }
    return mid;
}

void inputArray(int arr[], int size)
{

    cout<<"Enter the Array Elements :-" <<endl;
    for(int i = 0; i <size; i++)
        cin>>arr[i];

}



int main()
{

    int size;
    int arr[100000];

    cout<<"Enter the size of the array" <<endl;
    cin>>size;

    inputArray(arr, size);

    int peak = peakIndex(arr, size);

    cout<<"The peak index is : " <<peak <<endl;

    return 0;

}