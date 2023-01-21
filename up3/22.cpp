#include <bits/stdc++.h>

using namespace std;

int main()
{
    string q;
    cin >> q;
    if(q.size() == 1) {cout << q <<" " << 1; return 0;}
    q+="&";
    // sort(q.begin(), q.end());
    // cout << q ;
    // return 1;

    int max1 = -1;
    int cnt=1;
    for(int i=0;i<q.size()-1;i++)
    {
        if(q[i] == q[i+1]) cnt++;
        else{
            max1 = max(max1, cnt);
            cnt = 1;
        }
    }
    // cout << max1;
    cnt = 1;
    for(int i=0;i<q.size()-1;i++)
    {
        if(q[i] == q[i+1]) cnt++;
        else{
            if(cnt == max1){
                cout << q[i] <<" " << max1;
                return 0; 
            }
            cnt = 1;

        }
    }
   
}