#include <bits/stdc++.h>
using namespace std;

int main()
{
    queue<int> q;

    if(q.empty())
    {
        cout << "Queue Empty" << endl;
    }

    q.push(1);

    if(!q.empty())
    {
        cout << "Queue Not Empty" << endl;
    }
}
