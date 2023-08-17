#include<bits/stdc++.h>
using namespace std;

void testcase(){
	int n ;
	cin >> n ;
	int a[n];
	for (int &x : a) cin >> x ;
	queue<int>st;
	for (int i = 0 ; i < n - 1 ;i ++){
		int count = 0 ;
		for (int j = i + 1 ; j < n ; j ++){
			if (a[i] < a[j]){
				st.push(a[j]);
				++ count ;
				break;
			}
		}
		if (count == 0 ) st.push(-1);
	}
	st.push(-1);
	while(!st.empty()){
		cout << st.front() << " ";
		st.pop();
	}
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
