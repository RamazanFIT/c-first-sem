#include <bits/stdc++.h>

using namespace std;

vector<vector<int>> jojo;
int q;
int cnt1;
int cnt2;
void print(int x, int y)
{
    for(int i=0;i<cnt1;i++)
    {
        for(int s=0;s<cnt1;s++)
        {
            if(i == s) cout << jojo[i+x][s+y] << " ";
        }
        
    }
    cout << endl;
    cnt1++;
    
}
void print1(int x, int y)
{
    for(int i=0;i<cnt2;i++)
    {
        for(int s=0;s<cnt2;s++)
        {
            if(i == s) cout << jojo[i+x][s+y] << " ";
        }
        
    }
    cout << endl;
    cnt2--;
    
}



int main()
{
    
    cin >> q;
    
    cnt2 = q-1;
    cnt1 = 1;
    for(int i=0;i<q;i++)
    {
        vector<int> akk(q);
        for(int s=0;s<q;s++)
        {
            cin >> akk[s];
        }
        jojo.emplace(jojo.end(), akk);
    }

    for(int i=q-1;i>=0;i--)
    {
        print(0, i);
    }
    for(int i=1;i<q;i++)
    {
        print1(i, 0);
    }
    
}