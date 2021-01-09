/***********************
 * A sample program to read one character at a time
 *
 * COP 4530
 * Department of Computer Science
 * Florida State University
 * ********************/
#include <iostream>

using namespace std;

int main() {
	char c;

	// read one character a time and write it to the standard output.
	while (cin.get(c)) {
		cout.put(c);
	}
}
