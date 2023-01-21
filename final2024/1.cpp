#include <bits/stdc++.h>

using namespace std;

int main()
{
	int q;
	cin >> q;
	string a, b;
	map<string, string> jojo;
	for(int i=0;i<q;i++)
	{
		cin >> a >> b;
		bool flag = true;
		for(auto it : jojo)
		{
			if(a == it.second)
			{
//				it.second = b;
				jojo[it.first] = b;
				flag = false;
				break;
			}
		}
		if(flag) jojo[a] = b;
		
		
	}
	for(auto it : jojo)
	{
		cout << it.first <<" " << it.second << endl;
	}
}
