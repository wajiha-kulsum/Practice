//pass by value


#include <bits/stdc++.h>
using namespace std;

void doWork(string w){
    w[0] = 'v';
    cout << w << endl;
    
}

int main(){
    string w = "wajiha";
    doWork(w);
    cout << w << endl;
    return 0;
}
