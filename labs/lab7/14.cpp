#include <bits/stdc++.h>

using namespace std;

int w[1000];

int haha(int q, int a)
{
    int c=0;
    for(int i=0;i<q;i++)
    {
        for(int s=0;s<q;s++)
        {
            if((w[i] > w[s]))
            {
                if((w[i] - w[s]) <= a)
                {
                    c++;
                }
            }
            if((w[s] > w[i])){
                if((w[s] - w[i]) <= a)
                {
                    c++;
                }
            }
            
        }
        if(w[i] <= a)
            {
                c++;
            }
    }
    return c;
}
int main()
{

    int q, a;
    cin >> q >> a;
    for(int i=0;i<q;i++)
    {
        cin >> w[i];
    }
    
    if(haha(q, a)>=2)
    {
        cout << "cheater";
    }
    else
    {
        cout << "no";
    }

    
}