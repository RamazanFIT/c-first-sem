#include <bits/stdc++.h>
using namespace std;

int coord(int q, int w, int e, int r)
{
    return(pow((q-e), 2) + pow((w-r), 2));
}



int t[100];

int main()
{   
    int q;
    cin >> q;
    int w1[q], w2[q], w3[q], w4[q];
    for(int i=0;i<q;i++)
    {
        cin >> w1[i];
        cin >> w2[i];
        cin >> w3[i];
        cin >> w4[i];
    }

    int j[q];
    for(int i=0;i<q;i++)
    {
        j[i] = coord(w1[i], w2[i], w3[i], w4[i]);
        
    }
    
    sort(j, j+q);
    for(int i=0;i<q;i++)
    {
        t[j[i]]++;
    }
    int c=0;
    for(int i=0;i<100;i++)
    {
        if(t[i] != 0) c++;
    }
    cout << c;

}
