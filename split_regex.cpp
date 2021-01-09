#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <iterator>
#include <regex>

using namespace std;

int main() {
	string str("tomcat:x:91:91:Tomcat:/usr/share/tomcat5:/bin/sh");
	vector<string> vs;
	sregex_token_iterator rend{};
	// creating an end iterator

	regex pat{R"(:)"}; // regular expression

	sregex_token_iterator p{str.begin(), str.end(), pat, -1};
	// -1 option means that we want the tokens not matching pat
	
	while (p != rend) {
	    cout << *p << " ";
	    ++p;
	}
	
	// copy(vs.begin(), vs.end(), ostream_iterator<string>(cout, " "));
	cout << endl;
	return 0;
}


