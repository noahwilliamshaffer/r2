/**************
 * a sample program to illustrate how to parse input lines into tokens
 * (separated by white space)
 *
 * COP 4530
 * Department of Computer Science
 * Florida State University
 * *************************************/

#include <iostream>
#include <string>
#include <sstream>

using namespace std;

main() {
    string oneLine;
    string token;

    while (getline(cin, oneLine)) {
	istringstream ss(oneLine);

	while (ss >> token) {
	    cout << token << endl;
	}
    }
}
