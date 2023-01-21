#include <bits/stdc++.h>
using namespace std;
int main()
{
    priority_queue <int> jojo;
    jojo.emplace(1);
    jojo.emplace(2);
    jojo.emplace(2);
    jojo.emplace(1);
    jojo.emplace(2);
    while(!jojo.empty())
    {
        cout << jojo.top() << endl;
        jojo.pop();

    }



}