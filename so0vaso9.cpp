#include<bits/stdc++.h>
using namespace std;
#define int long long

vector<int>vt ;
int ans[101];

void init(){
	queue<string>qe;
	qe.push("9");
	vt.push_back(9);
	while(true){
		string top = qe.front();
		qe.pop();
		
		if(top.length() == 11 ) break ;
		vt.push_back(stoll(top + "0"));
		vt.push_back(stoll(top + "9"));
		qe.push(top + "0");
		qe.push(top + "9");
	}
	for (int i = 1 ; i < 101 ;i ++){
		for ( int x : vt){
			if (x % i == 0){
				ans[i] = x ;
				break ;
			}
		}
	}
}
void testcase(){
	init();
	int n ;
	cin >> n ;
	cout << ans[n];
}
int32_t main()
	{
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	init();
	int t ; cin >> t ;
	while(t--){
		testcase();
		cout << endl ;
	}
	 return 0;
	}
