#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q;
    cin >> q;
    vector <string> jojo{"81","16","64","25", "36", "49", };
    bool flag = false;
    while(true)
    {
        
        flag = true;
        for(int i=0;i<jojo.size();i++)
        {
            int k = q.find(jojo[i]);
            // cout << k <<" ";
            if(k >= 0)
            {
                flag = false;
                // cout << q[k] << q[k+1] <<" ";
                q.erase(k, 2);
                break;
            }
            
            // if(flag == false) continue;

        }
        if(flag)
        {
            reverse(q.begin(), q.end());
            cout << q;
            return 0;
        }
        if(q.size() == 0)
        {
            cout << "Stack is empty";
            return 0;
        }
        
        
        
        
    } //4559844887879987 7899787884489554
    
}