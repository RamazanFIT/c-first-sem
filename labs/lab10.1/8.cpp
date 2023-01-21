#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin >> q;
    vector<int> jojo;
    int x, y, z, w;
    int subs=0;
    double all = 0;
    for(int i=0;i<q;i++)
    {
        cin >> x >> y >> z >> w;
        if(x+y>30 && z > 20) 
        {
            int k = x+y + z;
            // if(k>=95 && k<=100) all+=4;
            // if(k>=90 && k<=94) all+=3.67;
            // if(k>=85 && k<=89) all+=3.33; 
            // if(k>=80 && k<=84) all+=3; 
            // if(k>=75 && k<=79) all+=2.67; 
            // if(k>=70 && k<=74) all+=2.33; 
            // if(k>=65 && k<=69) all+=2;
            // if(k>=60 && k<=64) all+=1.67; 
            // if(k>=55 && k<=59) all+=1.33; 
            // if(k>=50 && k<=54) all+=1;  
            

            subs++;
        }
        else{
            subs++;
        }
    }
    cout << (double)(all/subs);
    
}