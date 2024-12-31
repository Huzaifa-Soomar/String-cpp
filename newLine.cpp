#include<iostream>
using namespace std;
int main()
{
    string name  = "Huzaifa Soomar";

    for (int i = 0; i < name.length(); i++)
    {
        if (name[i] == ' ')
        {
            cout << endl;
        }else{

            cout << name[i];
        }

        
        
    }
    
    return 0;
}