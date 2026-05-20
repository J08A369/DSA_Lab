
#include <bits/stdc++.h>
using namespace std;

int main()
{
   map<string,int> student;

    student["mina"] = 10;
    student["tina"] = 20;
    student["sina"] = 30;

    for(auto x : student)
    {
        cout << x.first << " " << x.second << endl;
    }
}
