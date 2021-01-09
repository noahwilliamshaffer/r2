/********************************
 * a sample program to illustrate the use of input string stream
 * istringstream to break tokens (separated by white space)
 *
 * COP 4530
 * Department of Computer Science
 * Florida State University
 * *************************************************/
#include <iostream>
#include <sstream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
    string str;
    int num;
    istringstream ss("test 25");
    
    ss >> str >> num;

    cout << str << " " << num << endl;
    return(EXIT_SUCCESS);
}
