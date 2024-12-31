#include<iostream>
using namespace std;
int main()
{
    string str;
    cout << "Enter your name : ";
    getline (cin,str);
    cout << "Hello ! " << str  << endl;
    cout<<"Conclusion : cin doesn't print anything after the first space.";
    return 0;
}