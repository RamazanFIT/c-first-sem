#include <bits/stdc++.h>

using namespace std;
int w[1000];
int j[1000];
int v, z;
void fuck(int q)
{
    int flag = true;
    z=0;
    for(int i=2;i<1000;i++)
    {
        
        for(int s=2;s<i;s++)
        {
            if(i%s == 0) flag = false;
        }
        if(flag){ w[z] = i;
        z++;}
        flag = true;
    }
    


}


int jopa(int q)
{
    if(q<=0) return 0;
    for(int i=0;i<z;i++)
    {
        if(q%w[i] == 0)
        {
            j[v] = w[i];
            v++;
            return(jopa(q/=(w[i])));
        }
        
    }
}







int main()
{
    int q;
    cin >> q;
    fuck(q);
    jopa(q);
    for(int i=0;i<v;i++)
    {
        cout << j[i] <<" ";
    }
    
}