#include<bits/stdc++.h>
using namespace std;

//void testcaseSi(){
//	string s ;
//	int x ;
//	vector<int> st;
//	while(cin >> s){
//		if(s == "push"){
//			cin >> x ;
//			st.push_back(x);
//		}
//		else if (s == "pop"){
//			if (!st.empty())
//				st.pop_back();
//		} 
//		else if (s == "show"){
//			if (st.empty())
//				cout << "empty";
//			else {
//				for (int a : st) cout << a << " ";
//				cout << endl ;
//			}
//		}
//	}
//}
void testcaseSi(){
	string s;
	int x ;
	stack<int>st;
	while (cin >> s ){
		if (s == "push"){
			cin >> x ;
			st.push(x);
		}
		else if (s == "pop"){
			if (!st.empty()){
				st.pop();
			}
		}
		else if (s == "show"){
			stack <int> temp ;
			if (st.empty())
				cout << "empty";
			while (!st.empty()){
				temp.push(st.top());
				st.pop();
			}
			while (!temp.empty()){
				cout << temp.top()<<" ";
				st.push(temp.top());
				temp.pop();
			}
			cout << endl ;	
		}
	}
}
int main()
	{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	testcaseSi();
	 return 0;
	}
