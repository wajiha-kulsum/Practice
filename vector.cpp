#include <iostream>
#include <vector>
using namespace std;

int main() {
    vector<int> v = {1, 2, 3, 4, 5};
    v.erase(v.begin() + 1, v.begin() + 5);  //{1}
    
    for (int x : v) {
        cout << x << " ";
    }

    return 0;
}
