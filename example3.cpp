/*****************************
 * A simple program to read the content
 * of a text file, line by line.
 *
 * COP 4530
 * Department of Computer Science
 * Florida State University
 *****************************/
#include <iostream>
#include <fstream>
#include <string>
#include <cstdlib>

using namespace std;

int main(int argc, char *argv[]) {
    ifstream file;
    string str;

    if (argc != 2) {
	cerr << argv[0] << " filename" << endl;
	exit(EXIT_FAILURE);
    }

    file.open(argv[1]);

    if (file.fail()) {
	cerr << "cannot open input file: " << argv[1]
	     << " ... terminating." << endl;
	exit(EXIT_FAILURE);
    }

    while (getline(file, str)) {
	cout << str << endl;
    }

    file.close();
    return(EXIT_SUCCESS);
}
