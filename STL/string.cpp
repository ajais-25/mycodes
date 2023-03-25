#include<bits/stdc++.h>
using namespace std;

int main()
{

    string s = "hello";
    
    cout << "Length = " << s.length() << endl;
    cout << "Length = " << s.size() << endl;

    string str1 = "a";
    string str2 = "b";
    string str3 = "a";

    cout << "Result : " << str1.compare(str2) << endl;
    cout << "Result : " << str2.compare(str3) << endl;
    cout << "Result : " << str1.compare(str3) << endl;

    cout << "----------------" << endl;

    /*char str[45] ;
    char strs[] = "huriri";
    cout << "Result : " << strcpy(str, strs) << " & " << str << endl;*/

    string s1 = "72", s2 = "255";

    cout << "Final : " << s1.compare(s2) << endl;

    return 0;
}