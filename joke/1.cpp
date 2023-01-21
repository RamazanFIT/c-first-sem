#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    int w[q];
    int c=0;
    int d=0;
    int n=0;
    int b=0;
    for(int i=0;i<q;i++)
    {
        cin >> w[i];
        if(w[i]%2==0)
        {
            b+=w[i];
            c++;
        }
        else{
            n+=w[i];
            d++;
        }
    }
    cout << "Left hand magic power: " << c*b;
    cout << endl << "Right hand magic power: " << d*n;

}