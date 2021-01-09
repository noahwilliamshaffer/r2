#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <sstream>

using namespace std;

vector<string> split(const string &s, const char c);

int main() {
	string str("tomcat:x:91:91:Tomcat:/usr/share/tomcat5:/bin/sh");
	vector<string> vs;

	vs = split(str, ':');

	copy(vs.begin(), vs.end(), ostream_iterator<string>(cout, " "));
	cout << endl;
	return 0;
}

vector<string> split(const string &s, const char c) {
    string field;
    vector<string> vs;

    istringstream ss(s);
    while (getline(ss, field, c)) {
	vs.push_back(field);
    }

    return vs;
}
