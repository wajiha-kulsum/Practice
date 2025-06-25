#include <iostream>
#include <set>
using namespace std;

int main() {
    multiset<int> ms;

    ms.insert(1);
    ms.insert(2);
    ms.insert(2);
    ms.insert(3);

    for (auto it : ms) {
        cout << it << " ";
    }
    cout << endl;

    auto it = ms.find(2);
    if (it != ms.end()) {
        cout << "Found: " << *it << endl;
    }

    auto it2 = ms.find(5);
    if (it2 == ms.end()) {
        cout << "Not Found (it == ms.end())" << endl;
    }

    // This is the syntax
    auto lb = ms.lower_bound(2);
    if (lb != ms.end())
        cout << "Lower Bound: " << *lb << endl;

    auto ub = ms.upper_bound(2);
    if (ub != ms.end())
        cout << "Upper Bound: " << *ub << endl;

    return 0;
}


// Your Output
// 1 2 2 3 
// Found: 2
// Not Found (it == ms.end())
// Lower Bound: 2
// Upper Bound: 3


