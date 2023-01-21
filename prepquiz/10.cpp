#include <bits/stdc++.h>

using namespace std;

// int ing(string q)
// {
//     int k=0;
//     for(int i=0;i<q.size();i++)
//     {
//         k+=((q[i]-'0')*pow(10, q.size()-1-i));
//     }
//     if((q[q.size()-1]-'0') != (k%10)) k++;
//     return k;
// }

int numb(string q)
{
    int k=0;
    reverse(q.begin(), q.end());
    for(int i=0;i<q.size();i++)
    {
        k+=((q[i]-'0')*pow(, q.size()-1-i));
    }
    return k;

}

string tobin(int q)
{
    string a;
    while(q !=0)
    {
        a+=('0'+q%2);
        q/=2;
    }
    reverse(a.begin(), a.end());
    return a;
}


int main()
{
    int q;
    cin >> q;
    string a = tobin(q);
    // int h = ing(a);
    // cout << a;
    cout <<numb(a);
}