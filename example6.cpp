#include <iostream>
#include <vector>
#include <iterator>
#include <cstdlib>
#include <algorithm>

using namespace std;

int main() {
    vector<int> v1 = {1, 2, 3, 4};
    vector<int> v2 = {10, 20, 30, 40};


    // v2 must have at least v1.size() space
    copy(v1.begin(), v1.end(), v2.begin());
    copy(v2.begin(), v2.end(), ostream_iterator<int>(cout, " "));
    cout << endl;

    // v3 is empty
    vector<int> v3{};

    // this line will trigger segmentation fault, because v3 does not
    // have space
    // copy(v1.begin(), v1.end(), v3.begin());

    copy(v1.begin(), v1.end(), back_insert_iterator<vector<int>>(v3));
    copy(v3.begin(), v3.end(), ostream_iterator<int>(cout, " "));
    cout << endl;


    return(EXIT_SUCCESS);
}
