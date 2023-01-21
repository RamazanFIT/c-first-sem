#include <bits/stdc++.h>

using namespace std;

int main()
{
    map <string, string> student;
    // student = (1, 2);
    // student = {(ewfw, fwef)};
    // b v 
    int q;
    cin >> q;
    string a, b;

    for(int i=0;i<q;i++)
    {
        cin >> a >> b;
        student[a] = b;
    }
    map <string, string> :: reverse_iterator it = student.rbegin();
    
    for(it;it!=student.rend();it++)
    {
        cout << it->first <<" " << it->second << endl;
    }
}