#include <iostream>
#include <string>
using namespace std;

int main() {
    string sent;
    cout << "Enter a sentence: ";
    getline(cin, sent);

    int wordCount = 0;
    int NewWord = 0;

    for (int i = 0; i < sent.length(); i++) {
        if (sent[i] == ' ') {
            if (NewWord == 1) {
                wordCount++;
                NewWord = 0;
            }
        } else {
            NewWord = 1;
        }
    }

    if (NewWord == 1) {
        wordCount++;
    }

    cout << "Number of words: " << wordCount << endl;
    return 0;
}