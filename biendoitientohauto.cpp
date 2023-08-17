#include<bits/stdc++.h>
using namespace std;

void testcase(){
	string s ;
	cin >> s ;
	stack<string>st;
	for (int i = s.length()-1; i >= 0 ; i --){
		if (s[i] == '+' || s[i] =='-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^'){
			string s1 = st.top(); st.pop();
			string s2 = st.top() ; st.pop();
			string tmp = s1 + s2 + string(1,s[i]);
			st.push(tmp);
		} 
		else st.push(string(1,s[i]));
	}
	cout << st.top();
}
int main()
	{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	int t ;
	cin >> t ;
	while(t--){
		testcase();
		cout << endl;
	}
	return 0;
	}
