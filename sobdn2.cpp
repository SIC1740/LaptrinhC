#include<bits/stdc++.h>
using namespace std ;

#define int long long

vector<int>vt ;
void init(){
	queue<int>qe;
	qe.push(1);
	while (true){
		int top = qe.front();
		qe.pop();
		if (top >= pow(2,50)) break ;
		vt.push_back(top);
		qe.push(top*10);
		qe.push(top*10+1);
	}
}
void testcase(){
	init();
	int n ;
	cin >> n ;
	for (int x : vt){
		if (x % n == 0){
			cout << x ;
			return ;
		}
	}
}
int32_t main(){
	ios_base::sync_with_stdio(false);
	cin.tie(0); cout.tie(0);
	
	int t ; cin >> t ;
	while (t--){
		testcase();
		cout << endl ;
	}
	return 0 ;
}