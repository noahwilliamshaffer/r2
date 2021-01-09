/*********************************************
 * a sample program to read from standard input,
 * one line at a time. This program uses the getline
 * member function of a stream instead of the global
 * non-class getline function. Note that if you need
 * to put the input line to a string class, it is better
 * to use the global non-class getline function instead of
 * the member function of stream.
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
	const int MAX_LENGTH = 100;
	char oneLine[MAX_LENGTH];
	//string str;

    // read oneline at a time and write to the standard output
    while (cin.getline(oneLine, MAX_LENGTH)) {
	// note that newline character is not stored in oneLine
	cout << oneLine << endl; // note also that null is inserted
	// str = oneLine;
	// cout << str << endl;
    }
    if (!cin.eof()) {
    	cout << "ERROR: too many characters in a line" << endl;
    }
}
