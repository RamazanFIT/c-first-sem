#include <bits/stdc++.h>

using namespace std;

bool square(int q)
{
    if((int)(pow(q, 0.5))*(int)(pow(q, 0.5)) == q) return 1;
    else return 0;
}



int main()
{
    string q;
    cin >> q;
    reverse(q.begin(), q.end());
    stack <char> jojo;
    string a;
    for(int i=0;i<q.size();i++)
    {
        jojo.emplace(q[i]);
    }
    a+=jojo.top();
    jojo.pop();
  
    vector <char> roma;
    while(!jojo.empty())
    {
        a+=(jojo.top());
        jojo.pop();
        int k = (10*(a[0]-'0')+(a[1]-'0'));
        if(k<10) {a.erase(0, 1);}
        // cout << k <<" ";
        if(square(k))
        {
            
            // cout << a <<" ";
            a.clear();
            a+=jojo.top();
            jojo.pop();
            
        } 
        else{
            
            roma.insert(roma.end(), a[0]);
            // cout << a <<" ";
            a.erase(0, 1);
            
        }
        // cout << jojo.top() <<" ";
        // jojo.pop();
    }
    if(roma.empty())
    {
        cout << "Stack is empty";
        return 0;
    }
    // reverse(roma.begin(), roma.end());
    for(int i=0;i<roma.size();i++)
    {
        cout << roma[i];
    }


}