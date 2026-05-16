#include <bits/stdc++.h>
using namespace std;

int main()
{
    map<string,int>student;
    map<string, int>::iterator it;
    student.insert({"jine",3});
    student.insert({"fina",1});
    student.insert({"rin",2});
    student.insert({"jim",4});

    cout << student["Eti"] << endl; // by default value 0 if not in map

    for(it=student.begin(); it != student.end(); it++) {
        cout << it->first << " - " << it->second << endl;
    }


}
