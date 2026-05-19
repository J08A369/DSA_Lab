#include <bits/stdc++.h>
using namespace std;

int main()
{
    priority_queue<int> pq;

    pq.push(100);
    pq.push(250);
    pq.push(150);

    cout << "Highest: " << pq.top() << endl;
}
