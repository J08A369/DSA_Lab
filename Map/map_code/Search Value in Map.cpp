#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int> student;

    student["student->1"] = 50;
    student["student->2"] = 70;

    string name;
    cin >> name;

    if(student.count(name))
    {
        cout << "Found" << endl;
    }
    else
    {
        cout << "Not Found" << endl;
    }
}
