
#include <bits/stdc++.h>
using namespace std;

    int maxi(int x, int y){
        if (x > y)
        return x;
        else 
        return y;
    }
    
int main() {
    
int x, y;
cin >>x >> y;
int maximun = maxi(x,y);
cout << maximun;
return 0;
}
