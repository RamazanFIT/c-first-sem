#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q;
    cin >> q;
    int max1 = 0;
    string sub;
    string f;
    int y;
    for(int i=0;i<q.size();i++)
    {
        for(int s=i+1;s<q.size();s++)
        {
            sub = q.substr(i, s-i+1);
            f = sub;
            reverse(f.begin(), f.end());
            if(f != sub)
            {
                y = sub.size();
                max1 = max(max1, y);
            }
            f.clear();
            sub.clear();
            y = 0;
        }
    }
    cout << max1;
}