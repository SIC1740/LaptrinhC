#include<bits/stdc++.h>
using namespace std;

void testcase(){
	long long n,a ;
	cin >> n ;
	string s ;
	stack<int> st;
	while (n--){
		cin >> s ;
		if (s == "PUSH"){
			cin >> a ;
			st.push(a);
		}
		else if (s == "POP"){
			if (!st.empty())
				st.pop();
		}
		else if (s == "PRINT"){
			if (st.empty())
				cout << "NONE";
			else{
				cout << st.top();
			}
			cout << endl ;
		}
	}
}
int main()
	{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	testcase();
	 return 0;
	}
