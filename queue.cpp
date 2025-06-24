#include <iostream>
#include <queue>
using namespace std;

void explainQueue() {
    queue<int> q;
    q.push(1);     // {1}
    q.push(2);     // {1, 2}
    q.emplace(4);  // {1, 2, 4}

    q.back() += 5;  // q.back() is 4 → becomes 9

    cout << q.back() << endl;   // prints 9

    // Queue is now: {1, 2, 9}
    cout << q.front() << endl;  // prints 1

    q.pop();                    // removes 1 → {2, 9}
    cout << q.front() << endl;  // prints 2
}

int main() {
    explainQueue();  // call the function
    return 0;
}

//priority_queye 


#include <bits/stdc++.h>
using namespace std;

void explainPQ(){
    priority_queue<int>pq;
pq.push(4);
pq.push(2);
pq.push(6);
cout << pq.top(); //prints 6
    
}

int main() {
	explainPQ();
	return 0;

}
