#include <bits/stdc++.h>

using namespace std;

int main()
{
    set<pair<pair<string, int>, pair<string, int>>> jojo;
    int q;
    cin >> q;
    for(int i=0;i<q;i++)
    {
    	string s1, s2;
    	int in1, in2;
    	cin >> s1 >> in1 >> s2 >> in2;
//    	pair<string, int> a;
//    	pair<string, int> b;
    	pair<string, int> a(s1, in1);
    	pair<string, int> b(s2, in2);
    	pair<pair<string, int>, pair<string, int>> c (a, b);
    	jojo.emplace(c);
	}
	
	for(auto it : jojo)
	{
		cout << it.first.first << " " << it.second.first << " " << it.first.second+it.second.second << endl;
	}
}
