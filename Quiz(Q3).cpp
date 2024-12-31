#include <iostream>
#include <string>
using namespace std;

int main() {
    string sentence;
    cout << "Enter a sentence: ";
    getline(cin, sentence);

    int position = sentence.find("apple");

    if (position == -1) {
        cout << "The word 'apple' is not found." << endl;
    } else {
    	position++;
        cout << "The word 'apple' is found at position: " << position << endl;
    }

    return 0;
}