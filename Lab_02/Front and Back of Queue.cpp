#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;

    q.push(100);
    q.push(200);
    q.push(300);

    cout << "Front: " << q.front() << endl;
    cout << "Back: " << q.back() << endl;
}
