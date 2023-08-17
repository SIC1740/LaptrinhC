#include<bits/stdc++.h>
using namespace std;
int compare(string num1 , string num2){
	if (num1.length() < num2.length()){
		return 1 ;
	}
	else if (num1.length() > num2.length())
		return 0 ;
	for (int i = 0 ; i < num1.length(); ++ i){
		int a = num1[i] - '0';
		int b = num2[i] - '0';
		if (a<b){
			return 1 ;
		}
		else if (a > b)
			return 0 ;
	}
	return 2 ;
}
string sub(string a , string b){
	int n1 = a.length(), n2 = b.length(), n = 0 ;
//	vector<int>x(n1+1); vector<int>y(n1+1); vector<int>z(n1+1);
	int x[n1] , y[n1],z[n1];
	for(int i = 0 ; i < n1 ; ++i) x[i] = a[i] - '0';
	for(int i = 0 ; i < n2 ; ++i) y[i] = b[i] - '0';
//	reverse(x.begin(),x.end()); reverse(y.begin(),y.end());
	reverse(x,x+n1); reverse(y,y+n2);
	for(int i = n2 ; i < n1 ; ++i){
		y[i] = 0;
	}
	int nho = 0 ;
	for (int i = 0 ; i < n1 ; i ++){
		int tmp = x[i] -y[i] - nho;
//		cout << tmp << " ";
		if (tmp < 0 ){
			nho = 1 ;
			z[n++] = 10 + tmp; 
		}
		else {
			z[n++] = tmp;
			nho = 0 ;
		}
	}
	string res ;
	int ok = 0 ;
	for (int i = n-1 ; i >= 0 ; --i){
		if (ok == 0 && z[i]){
			ok = 1;
		}	
		if (ok)  res += to_string(z[i]);
	}
	if (ok == 0) res = "0";
	return res ;
}
int gcd(string a , string b){
	string n ;
	if (compare(a,b) == 0){
			n = b;
		}
		else n = a ;
	while (compare(a,b) != 2){
		if (compare(a,b) == 0){
			a = sub(a,b);
		}
		else b = sub(b,a);
	}
	return compare(n,a);
}
void testcase(){
	string num1 , num2 ;
	cin >> num1 >> num2 ;
	if (compare(num1,num2) == 2 ) cout <<"YES";
	else if (gcd(num1,num2) == 2) cout << "YES";
	else cout << "NO";
//	 sub(num1,num2);
}
int main()
	{
	ios_base::sync_with_stdio(0);
	cin.tie(0) ; cout.tie(0);
	
	int t ;
	cin >> t ;
	while(t--){
		testcase();
		cout << endl ;
	}
	 return 0;
	}
