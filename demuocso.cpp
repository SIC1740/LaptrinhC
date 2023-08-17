#pragma GCC optimize("O2")
#pragma GCC target("avx,avx2,fma")
#include<bits/stdc++.h>
//#include<iostream>
using namespace std ;
#define int long long
#define ii pair<int, int>
#define _Nguyen_Duc_ signed main()
#define TIME (1.0 * clock() / CLOCKS_PER_SEC)
const int maxn = 1e7 + 7;
const int mod = 1e9 + 7;

int c[1005][1005], p[maxn + 5];

void toHop()
	{
		for(int i = 0; i <= 1000; i++)
			{
				for(int j = 0; j <= i ;j++)
					{
						if(i == j || j == 0)
							c[i][j] = 1;
						else
							{
								c[i][j] = c[i - 1][j - 1] + c[i - 1][j];
								//c[i][j] %= mod;
							}
					}
			}
	}
void sang(){
	 for(int i = 2; i * i <= maxn; i++){
            p[i] = i;
        }
        for(int i = 2; i * i <= maxn; i++){
            if(p[i] == i){
                for(int j = i * i; j <= maxn; j += i){
                    if(p[j] == j)
                        p[j] = i;
                }
            }
        }
}

int count(int n){
	int ans  = 1;
	map<int, int> mp;
	while(n > 1){
	        mp[p[n]]++;
	        n /= p[n];
	    }
	for(auto x: mp){
		ans *= x.second + 1;
	}
	return ans;
}

signed main(){
    ios_base::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);
    int n, k;
    toHop();
    sang();
    while(cin >> n >> k){
    	cout << count(c[n][k]) << endl;
	}
    cerr << "\nTime elapsed " << TIME << " s.\n";
    return 0;
}