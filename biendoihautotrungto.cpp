#include<bits/stdc++.h>
using namespace std;

void testcase(){
	string s ;
	cin >> s ;
	stack<string>st;
	for (int i = 0 ; i < s.length(); i ++){
		if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^'){
			string s1 = st.top() ;st.pop();
			string s2 = st.top() ; st.pop();
			string res = '(' + s2 + s[i] + s1 +')';
			st.push(res);
		}
		else st.push(string(1,s[i]));
	}
	cout << st.top();
}
int main()
	{
	ios_base::sync_with_stdio(false);
	cout.tie(NULL); cin.tie(NULL);
	
	int t ;
	cin >> t ;
	while (t--){
		testcase();
		cout << endl ;
	}
	 return 0;
	}
