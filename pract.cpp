// #include <iostream>
// using namespace std;

// int main() {
//     char name[50];
//     cout << "Enter your name: ";
//     cin >> name; // Stops at whitespace
//     cout << "Hello, " << name << "!" << endl;
//     return 0;
// }

#include <iostream>
using namespace std;

int main() {
    string name;
    cout << "Enter your full name: ";
    cin>> name;
    //getline(cin, name); // Supports spaces
    cout << "Hello, " << name << "!" << endl;
    return 0;
}

