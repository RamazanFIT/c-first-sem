#include <iostream>
using namespace std;

int main()
{
    int q;
    cin >> q;
    int w[q];
    for(int i=0;i<q;i++)
    {
        cin >> w[i];
    }
    bool t = false;
    for(int i=0;i<q;i++)
    {
        for(int s=0;s<q;s++)
        {
            if(i==s) continue;
            if(w[i] == w[s])
            {
                t = true;
            }
            if(t == true)
            {
                cout << "NO";
                return 0;
            }
        }
    }
    cout << "YES";
}