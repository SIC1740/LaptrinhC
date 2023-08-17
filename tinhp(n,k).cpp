#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9+7;
long long p[1001][1001];

void prepare(){
	for (int i = 1 ; i <= 1000 ; ++ i ){
		p[i][1] = i ;
	}
	for (int i = 2 ; i <= 1000 ; ++ i){
		for (int j = 2 ; j <= i ; ++ j){
			p[i][j] = i * p[i-1][j-1] % mod;
		}
	}
}
void testcase(){
	int n , k ;
	cin >> n >> k ;
	cout << p[n][k];
}
int main()
	{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	prepare();
	int t ; cin >> t ;
	while(t--){
		testcase();
		cout << endl ;
	}
	 return 0;
	}
