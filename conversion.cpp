#include <iostream>
#include <sstream>
#include <string>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main() {
	int i = 100;
	float f = 200.20;
	string str("300");

	stringstream ss;
	ss << i;
	cout << "converting 100 to string: " << ss.str() << endl;


	ss.str(string()); // empty the string stream
	ss << setprecision(2) << fixed; // decimal points
	ss << f;
	cout << "converting 200.20 to string: " << ss.str() << endl;

	// other approaches include atoi(), and atof(), etc
	// for converting strign to number
	
	ss.str(string());
	ss << str;
	int tmp;
	ss >> tmp;
	cout << "converting string 300 to integer: " << tmp << endl;

	// other approaches include sprintf()
	// and <boost/lexical_cast>
	exit(EXIT_SUCCESS);
}
