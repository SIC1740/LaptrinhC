#include<bits/stdc++.h>
using namespace std;
 
 int n ;
 vector<int>a,b ,vs;
 void solve(){
 	for (int i = 1 ; i <= n ; i ++){
 		cout << a[b[i]]<<" ";
	 }
	cout << endl;
}
void Try(int i ){
	for (int j = 1 ; j <= n ; j ++){
		// Kiểm tra nếu phần tử chưa được chọn thì sẽ đánh dấu
		if (!vs[j]){
			b[i] = j ;//Lưu một phần tử vào hoán vị
			vs[j] = 1 ;//đánh dấu đã dùng
			if (i == n)//Kiểm tra nếu chứa một hoán vị thì xuất 
				solve();
			else 
				Try(i+1);
			vs[j] = 0 ;
		 }
	 }
 }
void testcase(){
	cin >> n ;
	a.resize(n+1);
	b.resize(n+1);
	vs.clear();
	vs.resize(n+1,0);
	
	for (int i = 1 ; i <= n ; ++i){
		cin >> a[i];
		//cout << vs[i];
	}
	sort(a.begin()+1,a.end());
	Try(1);
}
int main()
	{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL); cout.tie(NULL);
	
	testcase();
	
	 return 0;
	}
