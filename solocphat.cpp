#include<bits/stdc++.h>
using namespace std;

void testcase(){
	int n ;
	cin >> n ;
	stack<string> st ;
	queue<string> qe;
	string res;
	qe.push("6");
	qe.push("8");
	long long count = 2 ;
	while (!qe.empty()){
		res = qe.front();
		qe.pop();
		st.push(res);
		if (res.length() == n) continue;
		qe.push(res+"6");
		qe.push(res+"8");
		count += 2 ;
	}
	cout << count << endl ;
	while(!st.empty()){
		cout << st.top() << " ";
		st.pop();
	}
}
int main()
	{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int t ;
	cin >> t ;
	while (t--){
		testcase();
		cout << endl ;
	}
	 return 0;
	}
