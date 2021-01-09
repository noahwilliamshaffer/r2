/*********************************************
 * a sample program to read from standard input,
 * one line at a time
 *
 * COP 4530 
 * Department of Computer Science
 * Florida State University
 * *******************************************/
#include <iostream>
#include <string>
#include <sstream>

using namespace std;

main() {
    string oneLine;

    // read oneline at a time and write to the standard output
    while (getline(cin, oneLine)) {
	// note that newline character is not stored in oneLine
	cout << oneLine << endl;
    }
}
