#include<bits/stdc++.h>
using namespace std;

void testcase(){
	int n ; 
	cin >> n ;
	deque<int>dq;
	while(n--){
		string s ;
		cin >> s ;
		if (s == "PUSHFRONT"){
			int x ; 
			cin >> x;
			dq.push_front(x);
		}
		else if (s == "PRINTFRONT"){
			if (!dq.empty()){
				cout << dq.front() << endl;
			}
			else cout << "NONE" << endl;
		}
		else if ( s == "POPFRONT"){
			if (!dq.empty())
				dq.pop_front();
		}
		else if (s == "PUSHBACK"){
			int A ;
			cin >> A ;
			dq.push_back(A);
		}
		else if (s == "PRINTBACK"){
		if (!dq.empty()){
				cout << dq.back() << endl;
			}
			else cout << "NONE" << endl;
		}
		else if (s == "POPBACK"){
			if (!dq.empty())
				dq.pop_back();
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
