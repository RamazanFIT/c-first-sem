#include <bits/stdc++.h>

using namespace std;

vector<vector<char>> jojo;

int q;

void akk (int x, int y)
{
    for(int i=0;i<q;i++)
    {
        for(int s=0;s<q;s++)
        {
            if(i + s == q-1) jojo[i+x][s+y] = '*';
            
            
        }
        
    }

    for(int i=0;i<q;i++)
    {
        for(int s=0;s<q;s++)
        {
            if(i == s) jojo[i+x][s+q-1+y] = '*';
        }
        
    }

    for(int i=0;i<q*2-1;i++)
    {
        jojo[q+x-1][i+y] = '*';
    }

    
}








int main()
{
    
    cin >> q;

    for(int i=0;i<2*q;i++)
    {
        vector<char> roma;
        for(int s=0;s<q*4-1;s++)
        {
            
            roma.insert(roma.end(), '0');
        }
        jojo.emplace(jojo.end(), roma);
        roma.clear();
    }

    for(int i=0;i<q*2;i++)
    {
        for(int s=0;s<q*4-1;s++)
        {
            if(i == 0 && s == q) akk(i, s);
            if(i == q && s == 0) akk(i, s);
            if(i == q && s == 2*q) akk(i, s);
            // cout << jojo[i][s];
        }
        // cout << endl;
    }

    // akk(0, 0);


    for(int i=0;i<q*2;i++)
    {
        for(int s=0;s<q*4-1;s++)
        {
            // 
            if(jojo[i][s] == '0') cout <<' ';
            else cout << jojo[i][s];
            // cout << jojo[i][s];
        }
        cout << endl;
    }


    


}