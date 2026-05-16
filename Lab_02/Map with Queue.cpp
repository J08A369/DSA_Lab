#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<int,string> student;
    queue<int> q;

    student[1] = "S";
    student[2] = "R";
    student[3] = "N";

    q.push(1);
    q.push(2);
    q.push(3);

    while(!q.empty())
    {
        int id = q.front();
        q.pop();

        cout << id << " " << student[id] << endl;
    }
}
