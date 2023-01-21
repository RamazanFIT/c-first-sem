#include <bits/stdc++.h>
using namespace std;


int main()
{
    queue <string> jojo;
    int q;
    cin >> q;
    // аа 2 очередь всегда пуста;
    for(int i=0;i<q;i++)
    {
        string a;
        int c;
        
        cin >> c;
        
        if(c == 2) jojo.pop();
        else{
            cin >> a;
            jojo.emplace(a);
        }
        if(jojo.empty()) cout << "queue is empty" << endl;
        else
        {
            cout << jojo.front() << endl;
        }
    }

}