#include <bits/stdc++.h>
using namespace std;


void display(bool v[], int size)
{
    cout << "Displaying " << endl;
    for(int i = 0; i<size; i++)
    {
        if(v[i])
            cout << i << " " ;
    }
    cout << endl << "Size of array = " << size << endl << endl;
}



void primeSieve(bool prime[], int size)
{
    prime[0] = prime[1] = false;

    for(int i = 2; i<size; i++)
    {
        if(prime[i])
        {
            for(int j = 2*i; j<size; j+= i)
                prime[j] = false;
        }
    }
}


void SegSieve(bool sieve[], bool prime[], int l, int r, int size, int a)
{
    for(int i = 2; i<size; i++)
    {
        if(prime[i] == false) continue;

        int Multiple = (l/i) * i;

        if(Multiple < l)
            Multiple += i;

        for(int j = max(Multiple, i*i); j<=r; j+=i)
            sieve[j-l] = false;
    }
}



int main()
{

    int l, r;
    cout << "Enter the lower and the upper limit" << endl;
    cin >> l >> r;

    int a = r-l + 1;
    bool sieve[a];
    for(int i=0; i<a; i++)
        sieve[i] = true;    


    int b = sqrt(r) + 1;
    bool prime[b];
    for(int i=0; i<b; i++)
        prime[i] = true;


    primeSieve(prime, b);

    SegSieve(sieve, prime, l, r, b, a);

    int count = 0;
    for(int i = 0; i<a; i++)
    {
        if(sieve[i])
            count++;
    }

    //display(sieve, a);

    cout << "Number of Prime's are : " << count << endl;

    return 0;
}