#include <bits/stdc++.h>

using namespace std;



int stn(string q)
{
    long long cnt=0;
    for(int i=0;i<q.size();i++)
    {
        cnt+=((q[i]-'0')*pow(10, q.size()-1-i));
    }
    if(cnt%10 != (*(q.end()-1)-'0')) cnt++;
    return cnt;
}


int main()
{
    string q;
    cin >> q;
    // 127.0.0.0 255
    if(q[q.size()-1] == '.' || q[0] == '.')
	{
		cout << 0;
		return 0;
	}
    int cnt=0;
    for(int i=0;i<q.size();i++)
    {
        if(q[i] == '.') continue;
        if(q[i]<'0' || q[i]>'9')
        {
            cout << "0";
            return 0;
        }
    }

    vector<string> jojo;
    string h;
    for(int i=0;i<q.size();i++)
    {
        if('.' == q[i]) cnt++;
        if(q[i]>='0' && q[i]<='9') h+=q[i];
        else{
            int u = stn(h);
            if((u>=256) || (u <0)) 
            {
                cout <<"0";
                return 0;
            }
            h.clear();
        }
        
    }
    if(cnt >3) 
    {
        cout <<"0";
        return 0;
    }
    int cnt1=0;
    for(int i=0;i<q.size()-1;i++)
    {
        if(q[i]=='.') cnt1++;
        else{
            if(cnt1>1)
            {
                cout <<0;
                return 0;
            }
            cnt1=0;
        }
    }

    cout << "1";
}