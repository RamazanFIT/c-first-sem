#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    queue <string> jojo;
    int x;
    string a;
    vector <string> roma;
    for(int i=0;i<q;i++)
    {
        cin >> x;
        if(x == 2)
        {
            jojo.pop();
        }
        else{
            cin >> a;
            jojo.emplace(a);
            
        }
        if(jojo.empty()) roma.emplace(roma.end(), "queue is empty");
        else{
            roma.emplace(roma.end(), jojo.front());
        }
    }
    for(int i=0;i<roma.size();i++)
    {
        cout << roma[i] << endl;
    }
}