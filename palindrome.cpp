#include <iostream>
using namespace std;

int main(){
    string str1, str2;
    
    cout << "Enter a word : ";
    getline(cin, str1);
    
    for (int i = str1.length() - 1; i >= 0; i--) {
        str2 += str1[i];
    }
    if (str1 == str2){

    	cout<<"It is pelindrome";

	} else {
        
		cout<<"not pelindrome";
	}

    return 0;
}