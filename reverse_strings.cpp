#include <iostream>
#include <string>
#include <algorithm>
#include <cstdlib>

using namespace std;

int main() {
    string str;
    
    while (getline(cin, str)) {

	if (str.empty()) {
	    continue;
	}
	// using index operator
	cout << str << ": ";
	for (int i = (str.length()-1); i >= 0; --i) {
	    cout << str[i];
	}
	cout << endl;

	// using iterator
	cout << str << ": ";
	for (string::iterator itr = --str.end(); itr != str.begin(); --itr) {
	    cout << *itr;
	}
	cout << *(str.begin());
	cout << endl;

	// using reverse function
	cout << str << ": ";
	reverse(str.begin(), str.end());
	cout << str << endl;
    }
    return(EXIT_SUCCESS);
}
