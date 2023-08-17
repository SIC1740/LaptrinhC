#include<bits/stdc++.h>
using namespace std;

int prior(char c){
	if (c == '^') return 4 ;
	if (c == '*'|| c == '/') return 3 ;
	if (c == '+' || c == '-') return 2 ;
	return 1 ;
}
void testcase(){
	string s ;
	cin >> s ;
	string res = "";
	stack<char>st;
	for (int i = 0 ; i < s.length() ; ++i){
		if (s[i] == '(') st.push(s[i]);
		else if (s[i] == ')'){
			while (st.top() != '('){
				res += st.top();
				st.pop();
			}
			st.pop();
		}
		else if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] =='/' || s[i] == '^'){
			while(!st.empty() && prior(st.top()) >= prior(s[i])){
				res += st.top();
				st.pop();
			}
			st.push(s[i]);
		}
		else res += s[i];
	}
	while (!st.empty()){
		if (st.top() != '('){
			res += st.top();
		}
		st.pop();
	}
	cout << res ;
}
int main()
	{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL) ; cout.tie(NULL);
	
	int t ;
	cin >> t ;
	while(t--){
		testcase();
		cout << endl ;
	}
	 return 0;
	}
