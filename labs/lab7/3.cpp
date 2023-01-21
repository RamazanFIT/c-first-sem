#include <bits/stdc++.h>

using namespace std;

int w[1000];

string haha(int q, int a)
{
    int c=0;
    for(int i=0;i<q;i++)
    {
        if(w[i] == a)
        {
            c++;
        }
    }
    if(c >=1)
    {
        return "Yes";
    }
    else{
        return "No";
    }
}




int main()
{
    int q;
    cin >> q;
    for(int i=0;i<q;i++)
    {
        cin >> w[i];
    }
    int a;
    cin >> a;
    cout << haha(q, a);

}