#include<bits/stdc++.h>
using namespace std;

int f[1001][10001];

void testcase(){
	string s ;
	cin >> s ;
	int n = s.size();
	memset(f,0,sizeof(f));
	s = 'x' + s ;
	for (int i = 1 ; i <= n ; i ++) f[i][i] = 1 ;
	int res = 1 ;
	for (int len = 2 ; len <= n ; len ++){
		for (int i = 0 ; i <= n-len+1; i ++){
			int j = i + len - 1 ;
			if (len == 2 && s[i] == s[j]) f[i][j] = 1;
			else if (f[i+1][j-1] == 1 && s[i] == s[j]) f[i][j] = 1;
			if (f[i][j]) res = max(res,len);
		}
	}
	
	cout << res; 
}
int main()
	{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int t ; 
	cin >> t ;
	while(t--){
		testcase();
		cout << endl ;
	}
	 return 0;
	}
