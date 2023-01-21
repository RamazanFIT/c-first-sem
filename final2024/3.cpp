#include <bits/stdc++.h>

using namespace std;
vector<vector<int>> jojo;
int main()
{
//	vector<>
//	vector<vector<int>> jojo;
	int q;
	cin >> q;
	int cnt = 1;
	for(int i=0;i<q;i++)
	{
		vector<int> akk(q);
		for(int s=0;s<q;s++)
		{
			akk[i] = 0;
		}
		jojo.emplace(jojo.end(), akk);
	}
	if(q%2 != 0) jojo[q/2][q/2] = q*q;
	int s=0;
	while(cnt != q*q+1)
	{
		for(int i=s;i<q-s;i++)
		{
			jojo[s][i]=cnt;
			cnt++;
		}
		for(int i=s+1;i<q-s;i++)
		{
			jojo[i][q-1-s] = cnt;
			cnt++;
		}
		for(int i=q-2-s;i>=s;i--)
		{
			jojo[q-1-s][i] = cnt;
			cnt++;
		}
		for(int i=q-2-s;i>s;i--)
		{
			jojo[i][s] = cnt;
			cnt++;
		}
		s++;
		
	}
	for(int i=0;i<q;i++)
	{
		for(int s=0;s<q;s++)
		{
			cout << jojo[i][s] <<" ";
		}
		cout << endl;
	}
	
	
}
