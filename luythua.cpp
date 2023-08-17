#include<bits/stdc++.h>
using namespace std;
const int mod = 1e9 + 7;

long long powMod(long long a, long long b)
	{
		long long res = 1;
		a %= mod;
		while(b)
			{
				if( b % 2 == 1)
					{
						res *= a;
						res %= mod;
					}
				b /= 2;
				a *= a;
				a %= mod;
			}
		return res;
	}
int main()
	{
		long long a, b; 
		while(true)
			{
				cin >> a >> b;
				if(a == 0 && b== 0)
					return 0;
				else
					cout << powMod(a, b) << endl;
			}
	 	return 0;
	}
