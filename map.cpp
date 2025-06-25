#include <iostream>
#include <map>
using namespace std;

int main() {
    map<int, int> mpp;

    mpp[1] = 2;
    mpp.emplace(3, 1);
    mpp.insert({2, 4});
    mpp[2] = 10;

    for (auto it : mpp) {
        cout << it.first << " " << it.second << endl;
    }

    cout << mpp[1] << endl;
    cout << mpp[5] << endl;

    auto it = mpp.find(3);
    cout << (*it).second << endl;

    auto it2 = mpp.find(5); // -> mpp.end()

    // This is the syntax
    auto lb = mpp.lower_bound(2);
    auto ub = mpp.upper_bound(3);

    return 0;
}
