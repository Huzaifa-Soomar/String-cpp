#include<iostream>
using namespace std;
int main()
{
    string str1  = "Huzaifa";
    string str2  = "Soomar";
    string concat;

    for ( int  i = 0; i < str1.length(); i++)
    {
        concat +=str1[i];
    }
    for ( int  i = 0; i < str2.length(); i++)
    {
        concat +=str2[i];
    }
    

    cout << "Comcatenate string : " << concat;
    return 0;
}