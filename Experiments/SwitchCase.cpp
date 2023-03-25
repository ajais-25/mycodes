#include<iostream>
using namespace std;

int main()
{
    int a = 1;

    cout<<"Test 1 :-" <<endl;

    //Normal switch
    switch(a)
    {
        case 1: cout<<"First Case" <<endl;
                break;
        case 2: cout<<"Second Case" <<endl;
                break;
        default : cout<<"Default Case" <<endl;
    }
    
    cout<<"Test 2 :-" <<endl;

    //cases without break
    switch(a)
    {
        case 1: cout<<"First Case" <<endl;
                //break;
        case 2: cout<<"Second Case" <<endl;
                //break;
        default : cout<<"Default Case" <<endl;
    }
    
    cout<<"Test 3 :-" <<endl <<"Infinite Loop" <<endl;

    //infinite loop with break
    /*for(;;)
    {
        switch(a)
        {
            case 1: cout<<"First Case" <<endl;
                    break;
            case 2: cout<<"Second Case" <<endl;
                    break;
            default : cout<<"Default Case" <<endl;
        }
    }*/

    cout<<"Test 4 :-" <<endl;

    //infinite loop with exit
    for(;;)
    {
        switch(a)
        {
            case 1: cout<<"First Case" <<endl;
                    exit(1);
            case 2: cout<<"Second Case" <<endl;
                    break;
            default : cout<<"Default Case" <<endl;
        }
    }

}