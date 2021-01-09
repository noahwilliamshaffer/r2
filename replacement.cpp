/****************************
 * COP4530
 * Department of Computer Science
 * FSU
 ****************************/
#include <iostream>
#include <string>
#include <cstdlib>
#include <vector>

using namespace std;
int main(int argc, char *argv[]) {
    string line;
    size_t idx1, idx2;

    if (argc != 3) {
	cerr << argv[0] << "old_string new_string" << endl;
	return (EXIT_FAILURE);
    }
    string oldstr(argv[1]);
    string newstr(argv[2]);

    while (getline(cin, line)) {
	idx1 = 0;
	idx2 = 0;
	string newline;
	while ((idx2 = line.find(oldstr, idx1)) != string::npos) {
	    // cerr << idx1 << " " << idx2 << endl;
	    newline += line.substr(idx1, idx2-idx1);
	    newline += newstr;
	    // cerr << newline << endl;
	    idx1 = idx2 + oldstr.length(); 
	}
	if (idx1 < line.length()) {
	    newline += line.substr(idx1);
	}
	
	cout << newline << endl;
    }
}
