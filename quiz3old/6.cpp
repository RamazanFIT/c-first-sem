#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q;
    getline(cin, q);
    int k=0;
    int m=0;

    for(int i=0;i<q.size();i++)
    {
        if(q[i] != ' ')
        {
            k++;

        }
        else{
            m = max(m, k);
            k=0;
        }
    }
    int c=0;
    for(int i=0;i<q.size();i++)
    {
        if(q[i] != ' ')
        {
            c++;
        }
        else{
            if(c == m)
            {
                for(int s=i-m;s<i;s++)
                {
                    cout << q[s];
                }
                cout << endl;
                cout << m;
                return 0;
            }
            c=0;
        }
    }
}