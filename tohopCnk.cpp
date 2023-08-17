#include<bits/stdc++.h>
using namespace std;

const int mod = 1e9 + 7 ;

long long c[1001][1001];

void prepare(){
	for (int i = 0 ; i <= 1000 ; ++i){
		for (int j = 0 ; j <= i ; ++ j){
			if (j == 0 || j == i)
				c[i][j] = 1;
			else if (j == 1 || j == i -1)
				c[i][j] = i ;
			else 
				c[i][j] = c[i-1][j-1] + c[i-1][j];
			c[i][j] %= mod ;
		}
	}
}

void testcase(){
	int n , k ;
	cin >> n >> k ;
	cout << c[n][k];
}
int main()
	{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	prepare();
	int t ;
	cin >> t ;
	while(t--){
		testcase();
		cout << endl;
	}
	 return 0;
	}
