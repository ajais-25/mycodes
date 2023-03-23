#include<bits/stdc++.h>
using namespace std;

//in an array check if the occurence of the elements are unique or not

void printArray(int arr[], int n)
{

    for(int i = 0; i<n; i++)
        cout<<arr[i] <<" ";
    cout<<endl;

}


bool uniqueOccurrences(int arr[]) 
{

        int count;
        int arr_count[100000];
        int index = 0, size = 0;
        for(int i = 0; i<6; i++)
        {
            count = 0;

            for(int j = 0; j<6; j++)
            {
                if(arr[i] == arr[j] && j<i)
                    break;
                    
                else if(arr[i] == arr[j] && j>=i)
                    count++;
            }
            if(count == 0)//to avoid storing count = 0 in the array
                continue;
            arr_count[index] = count;
            size++;
            index++;
        }

        printArray(arr_count, size);

        for(int i = 0; i<size; i++)
        {
            for(int j = i+1; j<size; j++)
            {
                if(arr_count[i] == arr_count[j])
                    return false;
            }
        }
        
        return true;

    }

    int main()
    {

        int arr[6] = {1,2,2,1,1,3};

        cout<<"The result is : " <<uniqueOccurrences(arr) << endl;

    }