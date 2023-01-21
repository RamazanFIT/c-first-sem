#include <bits/stdc++.h>

using namespace std;

int trans(string q)
{
    return((q[0]-'0')*10+(q[1]-'0'));
}

bool square(int q)
{
    if((int)(pow(q, 0.5))*(int)(pow(q, 0.5)) == q) return 1;
    else return 0;
}

int main()
{
    string q;
    cin >> q;
    stack <int> jojo;
    string g;
    // for(int i=0;i<q.size()-1;i++)
    // {
    //     g = q.substr(i, 2);
    //     jojo.emplace(trans(g));
    //     g.clear();
    // }
    // // while(!jojo.empty())
    // // {
    // //     cout << jojo.top() <<" ";
    // //     jojo.pop();
    // // }

    // vector <int> roma;
    // for(int i=0;i<jojo.size();i++)
    // {
    //    if(square(jojo.top()))
    //    {
    //     roma.insert(roma.end(), jojo.top());
    //    }

    // }
    vector <int> roma;
    
    for(int i=0;i<q.size();i++)
    {
        roma.insert(roma.end(), q[i]-'0');
    }
    int k;
    for(int i=0;i<q.size()/2;i++)
    {
        if(roma.empty()) break;
        for(int s=0;s<roma.size()-1;s++)
        {
             k = roma[s]*10+roma[s+1];
        if(square(k)) {roma.erase(roma.begin()+s,roma.begin()+s+1 ); exit;}
        }
    }
   
    reverse(roma.begin(), roma.end());
    cout << roma.size();
    if(roma.empty())
    {
        cout << "Stack is empty";
        return 0;
    }
    for(int i=0;i<roma.size();i++)
    {
        cout <<roma[i];
        return 1;
    }
    

}