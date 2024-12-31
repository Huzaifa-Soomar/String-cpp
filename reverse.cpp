#include<iostream>
using namespace std;
int main()
{
    string name = "Huzaifa";

    for (int i = name.length(); i >= 0; i--)
    {
        cout << name[i];
    }
    
    return 0;
}