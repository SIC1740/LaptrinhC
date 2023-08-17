#include<bits/stdc++.h>
using namespace std;

using ll = long long;
void testcase(){
	string s ;
	cin >> s ;
	ll sumc = 0 , suml = 0 ;
	for (int i = 0 ; i < s.length() ; i ++){
		int a = s[i] - '0';
		if (i % 2 == 0 ){
			sumc += a;
		}
		else 
			suml += a ;
	}
	cout << suml << " " << sumc  ;
}
int main()
	{
	ios_base::sync_with_stdio(0);
	cin.tie(0) ; cout.tie(0);
	
	int t ;
	cin >> t ;
	while(t--){
		testcase();
		cout << endl ;
	}
	 return 0;
	}
