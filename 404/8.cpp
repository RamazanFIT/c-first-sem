#include <bits/stdc++.h>
using namespace std;
int main ()
{
  int q;
  cin >> q;
  int w[q][q];
  for(int i=0;i<q;i++)
  {
    for(int s=0;s<q;s++)
    {
      cin >> w[i][s];
    }
  }
  int z=2;
  int x = 0;
  cout << w[0][q-1] << endl;
  for(int i=q-2;i>=1;i--)
  {  
    
    for(int s = 0;s<z;s++)
    {
      cout << w[s][i+x] <<" ";
      x++;
    }
    cout << endl;
    x = 0;
    z++;
    
  }
  for(int i=0;i<q;i++)
  {
    for(int s=0;s<q;s++)
    {
      if(i == s)
      {
        cout << w[i][s] <<" ";
      }
    }
    
  }
  cout << endl;
  int c = q-1;
  int v=0;
  for(int i=1;i<=q-2;i++)
  {
    for(int s=0;s<c;s++)
    {
      cout << w[i+v][v] <<" ";
      v++;
    }
    cout << endl;
    v = 0;
    c--;
  }
  cout << w[q-1][0];

}