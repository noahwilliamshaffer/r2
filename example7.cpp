#include <iostream>
#include <vector>
#include <algorithm>
#include <iterator>

using namespace std;

int main() {
	vector<int> v1;
	
	for (int i = 0; i != 10; ++i) {
		v1.push_back(i);
	}

	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, " "));
	cout << endl;

	reverse(v1.begin(), v1.end());

	copy(v1.begin(), v1.end(), ostream_iterator<int>(cout, " "));
	cout << endl;
	return(EXIT_SUCCESS);
}
