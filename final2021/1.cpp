#include <bits/stdc++.h>

using namespace std;

void show(vector<int> foo)
{
    for(int i=0;i<foo.size();i++)
    {
        cout << foo[i] <<" ";
    }
}



int main()
{
    int q;
    cin >> q;
    int a;
    cin >> a;
    int c;
    cin >> c;
    vector <int> jojo(q);
    for(int i=0;i<q;i++)
    {
        cin >> jojo[i];
    }
    reverse(jojo.begin()+a-1, jojo.begin()+c);

    show(jojo);

}