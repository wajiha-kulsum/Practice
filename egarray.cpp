// array takes pass by refrence always 

#include <bits/stdc++.h>
using namespace std;

void arrayy(int arr[], int n){
    arr[0] += 100;
    cout << arr[0]<< endl;
}

int main (){
    int n =5;
    int i;
    
    int arr[n];
    for (i = 0; i <n; i = i+1){
        cin >> arr[i];
    }
    arrayy(arr ,n);
    cout<<arr[0]<< endl;
    return 0;
}
