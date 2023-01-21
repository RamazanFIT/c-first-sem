#include <bits/stdc++.h>

using namespace std;

bool sq(char a, char b)
{
    int k = (a-'0')*10 + (b-'0');
    if(k == (int)(sqrt(k))*(int)(sqrt(k))) return true;
    else return false;
}

void showstack(stack <char> jojo)
{
    while(jojo.size()!=0)
    {
        cout << jojo.top();
        jojo.pop();
    }
}


int main()
{
    string q;
    cin >> q;
    stack <char> jojo;
    for(int i=0;i<q.size();i++)
    {
        if(jojo.empty())
        {
            jojo.push(q[i]);
        }
        else if(sq(jojo.top(), q[i])) jojo.pop();
        else jojo.emplace(q[i]);
    }
    if(jojo.empty())
    {
        cout << "Stack is empty";
        return 0;

    }
    showstack(jojo);
    // return 0;
}