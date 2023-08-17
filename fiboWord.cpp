#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll F[100];
int fiboWord(ll n, ll k)
	{
		if(n == 1) return 0;
		if(n == 2) return 1;
		if(k <= F[n - 2]) return fiboWord(n - 2, k);
		return fiboWord(n - 1, k - F[n - 2]);
	}
int main()
	{
		int t; cin >> t;
		F[0] = 0; F[1] = 1;
		for(int i = 2; i <= 92; i++)
			F[i] = F[i - 1] + F[i - 2];
		while(t--)
			{
				int n, k; cin >>n >> k;
				cout << fiboWord(n, k) << endl;
			}
	 	return 0;
	}
