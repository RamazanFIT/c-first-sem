#include <bits/stdc++.h>
using namespace std;

int main()
{
  string q;
  cin >> q;
  int z=0;
  int p=0;
  int x=0;
  int d=0;
  int b=0;
  string num = "";
  string nums[10];
  int h[q.size()];
  for(int i=0;i<q.size();i++)
  {
        if(q[i] != '.')
        {
            nums[b]+=q[i];
            
        }
        if(q[i] == '.')
        {
            b++;
            num = "";
        }

  }
  for(int i=0;i<4;i++)
  {
        if(nums[i].size() == 3)
        {
            if((nums[i][0] - '0') * 100 +(nums[i][1] - '0')*10+(nums[i][2]-'0') >255)
            {
                cout << 0;
                return 0;
            }
        }
        if(nums[i].size() == 2)
        {
            if((nums[i][0] - '0')*10+(nums[i][1] - '0') > 255)
            {
                cout << 0;
                return 0;
            }
            
        }
        if(nums[i].size() == 1)
        {
            if((nums[i][0] - '0') > 255)
            {
                cout << 0;
                return 0;
            }
        }
  }
  for(int i=0;i<q.size();i++)
  {
    if(q[i] == '.')
    {
      p++;
    }
    if(p >3)
    {
      cout <<0;
      return 0;
    }
  }
  if(q[q.size()-1] == '.' || q[0] == '.')
  {
    cout << 0;
    return 0;
  }
  int j[q.size()];
  for(int i=0;i<q.size();i++)
  {
    if(q[i] == '.')
    {
      j[z] = i;
      z++;
    }
    
    
  }
  for(int i=0;i<2;i++)
  {
    if(j[i] - j[i+1] == -1)
    {
      cout <<0;
      return 0;
    }
  }
  cout <<1;

}