#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

main() {
    string w1, w2;

    while (cin >> w1 >> w2) {
	if (w1.size() != w2.size()) 
	    cout << "no!" << endl;
	else if (w1 == w2) {
	    cout << "no!" << endl;
	} else {
	    sort(w1.begin(), w1.end());
	    sort(w2.begin(), w2.end());
	    if (w1 == w2) {
		cout << "YES!" << endl;
	    } else {
		cout << "no!" << endl;
	    }
	}
    }
}
