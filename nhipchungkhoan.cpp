#include<bits/stdc++.h>
using namespace std;

void testcase(){
	int n ;
	cin >> n ;
	long long a[100005];
	stack<int>st;
	st.push(0);
	for (int i = 1 ; i <=n ; i ++) {
		int cnt = 0 ;
		cin >> a[i];
		while(st.size() > 1 && a[st.top()] <= a[i]) {
			st.pop();
		}
		cout << i - st.top() <<" ";
		st.push(i);
	}
	while(st.size()) st.pop();
}
int main()
	{
	ios_base::sync_with_stdio(0);
	cin.tie(0); cout.tie(0);
	
	int t ;
	cin >> t ;
	while(t--){
		testcase();
		cout << endl ;
	}
	 return 0;
	}
