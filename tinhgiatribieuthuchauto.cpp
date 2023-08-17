#include<bits/stdc++.h>
using namespace std;

void testcase(){
	string s ;
	cin >> s;
	stack<long long>st;
	if (s[0] == '+' || s[0] == '-' || s[0] == '*' || s[0] == '/' || s[0] == '%' ||  s[0] == '^'){
		for (int i = s.length() - 1; i >= 0 ; -- i){
			if (s[i] == '+' || s[i] =='-' || s[i] == '*' || s[i] == '/' || s[i] == '%' || s[i] == '^'){
				long long s1 = st.top() ; st.pop();
				long long s2 = st.top() ; st.pop();
				long long tmp ;
				if (s[i] == '+') tmp = s1 + s2 ;
				else if (s[i] == '-') tmp = s1 - s2 ;
				else if (s[i] == '*') tmp = s1 * s2 ;
				else if (s[i] == '/') tmp = s1 / s2 ;
				else if (s[i] == '%') tmp = s1 % s2;
				else {
					tmp = s1 ;
					for (int i = 0 ; i < s2 ; i ++){
						tmp *= s1 ;
					}
				}
				st.push(tmp);
			}
			else st.push((long long)(s[i] - '0'));
		} 
		cout << st.top();
	}
	else {
		for (int i = 0 ; i < s.length(); i ++){
			if (s[i] == '+' || s[i] == '-' || s[i] == '*' || s[i] == '/' || s[i] == '%' ||  s[i] == '^'){
				long long s1 = st.top(); st.pop();
				long long s2 = st.top(); st.pop();
				long long tmp ;
				if (s[i] == '+') tmp = s2 + s1 ;
				else if (s[i] == '-') tmp = s2 - s1 ;
				else if (s[i] == '*') tmp = s2 * s1 ;
				else if (s[i] == '/') tmp = s2 / s1 ;
				else if (s[i] == '%') tmp = s2 % s1 ;
				else {
					tmp = s2 ;
					for (long long j = 0 ; j < s1 ; j ++){
						tmp *= s2 ;
					}
				}
				st.push(tmp);
			}
			else st.push((long long)(s[i] -'0'));
		}
		cout << st.top();
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
		cout << endl;
	}
	 return 0;
	}
