#include<bits/stdc++.h>
using namespace std;

void testcase(){
	int n ;
	cin >> n ;
	stack<string>st;
	queue<string>qe;
	qe.push("6");
	qe.push("8");
	long long count = 2 ;
	while (!qe.empty()){
		string s = qe.front() ;
		qe.pop();
		st.push(s);
		if(s.length() == n) continue;
		qe.push(s+"6");
		qe.push(s+"8");
		count += 2;
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
