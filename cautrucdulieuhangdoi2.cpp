#include<bits/stdc++.h>
using namespace std;

void testcase(){
	int n ;
	cin >> n ;
	queue<int>qe;
	while (n--){
		string s ;
		cin >> s ;
		if (s == "PUSH") {
			int x ;
			cin >> x ;
			qe.push(x);
		}
		else if (s == "POP"){
			if (!qe.empty())
				qe.pop();
		}
		else if (s == "PRINTFRONT"){
			if (qe.empty())
				cout << "NONE" << endl;
			else cout << qe.front() << endl;
		}
	}
}
int main()
	{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	//int t = 1;
	//cin >> t ;
	//while(t--){
		testcase();
		cout << endl ;
	//}
	 return 0;
	}
