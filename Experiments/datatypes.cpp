#include<iostream>
using namespace std;

int main()
{

    cout <<endl <<"Size of all Variables are :-" <<endl;
    int i;
    char ch;
    float f;
    double d;
    bool b;
    short s;
    short int si;
    long l;
    long int li;
    long long ll;
    long long int lli;
    int long il;
    int long  long ill;

    //int range = 2^31 to 2^31-1
    //unsigned int range = 0 to 2^32-1
    
    cout<< "int : " << sizeof(i) <<" bytes" << endl;
    cout<< "char : " <<sizeof(ch) <<" bytes" << endl;
    cout<< "float : " <<sizeof(f) <<" bytes" << endl;
    cout<< "double : " <<sizeof(d) <<" bytes" << endl;
    cout<< "bool : " <<sizeof(b) <<" byte" << endl;
    cout<< "short : " <<sizeof(s) <<" bytes" << endl;
    cout<< "short int : " <<sizeof(si) <<" bytes" << endl;
    cout<< "long : " <<sizeof(l) <<" bytes" << endl;
    cout<< "long int : " <<sizeof(li) <<" bytes" << endl;
    cout<< "long long : " <<sizeof(ll) <<" bytes" << endl;
    cout<< "long long int : " <<sizeof(lli) <<" bytes" << endl;
    cout<< "int long : " <<sizeof(il) <<" bytes" << endl;
    cout<< "int long long : " <<sizeof(ill) <<" bytes" << endl;

    return 0;
}