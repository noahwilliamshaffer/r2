#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>

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
	size_t i1 = 0, i2;
	vector<string> vs;

	i2 = s.find(c);
	while (i2 != string::npos) {
		vs.push_back(s.substr(i1, i2-i1));
		i1 = i2 + 1;
		i2 = s.find(c, i1);	
	}
	vs.push_back(s.substr(i1));
	return vs;
	// or we can use getline with 'c' as the delimitor
}
