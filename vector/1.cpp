#include <bits/stdc++.h>

using namespace std;

int main()
{
    vector <int> jojo;
    int x;
    for(int i=0;i<10;i++)
    {
        cin >> x;
        jojo.push_back(x);
    }
    jojo[4] =1111111;
    for(int i=0;i<jojo.size();i++)
    {
        cout << jojo[i] << " ";
    }
        // вектор тоже самое что и массив но с динамик сайз
    
}