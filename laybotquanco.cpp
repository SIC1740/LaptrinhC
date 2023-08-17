#include<bits/stdc++.h>
using namespace std;

void testcase(){
	long long c , m ;
	cin >> c >> m ;
	if (c == 0) {
		cout << "Second";
		return;
	}
	if (c <= m){
		cout << "First" ;
		return ;
	}
	long long a = c - m - 1 ;
	if (a % 2 == 0) cout << "Second";
	else cout << "First";
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
