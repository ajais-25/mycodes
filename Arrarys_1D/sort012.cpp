#include<bits/stdc++.h>
using namespace std;


void printArray(int arr[], int n)
{

    for(int i = 0; i<n; i++)
        cout<<arr[i] <<" ";
    cout<<endl;

}


void inputArray(int arr[], int size)
{

    cout<<"Enter the Array Elements :-" <<endl;
    for(int i = 0; i <size; i++)
        cin>>arr[i];

}


void sort012(int a[], int n)
{
    int low = 0;
    int mid = 0;
    int high = n-1;
        
    while(mid<=high)
    {
        if(a[mid] == 0)
        {
            swap(a[mid], a[low]);
            low++;
            mid++;
        }
            
        else if(a[mid] == 1)
            mid++;
            
        else
        {
            swap(a[mid], a[high]);
            high--;
        }
    }

}

int main()
{

    int arr[100000];
    int size;

    cout<<"Enter the size of the Array" <<endl;
    cin>>size;

    inputArray(arr, size);

    sort012(arr, size);
    printArray(arr, size);

    return 0;
}