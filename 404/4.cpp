#include <bits/stdc++.h>

using namespace std;

int bebra(int a, int b)
{
    return(a - b);
}



int main()
{
    int q;
    cin >> q;
    
    int z=1;
    for(int i=1;i<=q*q;i++)
    {
       
        z+=i;
    }
    z/=q;
    int k=0;
    string j = " ";
    for(int i=1;i<=q*q;i++)
    {
        
        for(int s=i+1;s<=q*q;s++)
        {
            if(j.find(char('a'+ s)) != -1)
            {
                continue;
            }
            for(int a=s+1;a<=q*q;a++)
            {
                if((j.find(char('a'+ a)) != -1) || (j.find(char('a'+ i)) != -1))
                {
                    continue;
                }
                if(i+s+a==z)
                {
                    j+=(char('a'+i));
                    j+=char('a'+s);
                    j+=char('a'+a);
                    cout << i <<" " << s << " " << a << endl;
                }
            }
        }

        
    }



}