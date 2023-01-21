#include <bits/stdc++.h>
#define fr(q, a) for(int q=0;q<a;q+=2)
#define pr(i, s) pair<int, string>
#define F first
#define S second

using namespace std;

int main()
{
    int q;
    cin >> q;
    pr(i, s) jojo[q];
    fr(i, q)
    {
        cin >> jojo[i].F;
        cin >> jojo[i].S;
    }
    bool flag = true, flag1 = true;
    fr(i, q)
    {   
        if(jojo[i].F>jojo[i+1].F)
        {
            if(jojo[i].S.empty())
            {
                cout << "queue is empty" << endl;
                flag = false;
            }
            if(flag)
            {
                cout << jojo[i].S << endl;
                
            }
            if(jojo[i+1].S.empty())
            {
                cout << "queue is empty" << endl;
                flag1 = false;
            }
            if(flag1)
            {
                cout << jojo[i+1].S << endl;
                
            }
            flag = true, flag1 = true;
            continue;


        }
        else
        {
            if(jojo[i+1].S.empty())
            {
                cout << "queue is empty" << endl;
                flag = false;
            }
            if(flag)
            {
                cout << jojo[i+1].S << endl;
                
            }
            if(jojo[i].S.empty())
            {
                cout << "queue is empty" << endl;
                flag1 = false;
            }
            if(flag1)
            {
                cout << jojo[i].S << endl;
                
            }
            flag = true, flag1 = true;
        }

        
    }
    
}