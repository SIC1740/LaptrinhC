#include<bits/stdc++.h>
using namespace std;

bool binarysearch(int a[], int l , int r , int x){
	if (l > r) return false ;
	int m = (l+r)/2 ;
	if (a[m] == x)
		return true ;
	else if (a[m] < x)
		return binarysearch(a, m+1 , r,x);
	else 
		return binarysearch(a,l,m-1,x);
}
int first_pos(int a[], int n , int x ){
	int res = -1 ;
	int l = 0 , r = n -1 ;
	while(l<=r){
		int m = (l+r)/2 ;
		if (a[m] == x){
			res = m ;
			r = m - 1 ;
		}
		else if (a[m] < x ){
			l = m+1;
		}
		else r = m - 1;
	}
	return res;
}
int main()
	{
		ios_base::sync_with_stdio(false);
    cin.tie(NULL); cout.tie(NULL);
	int t = 1;
	cin >> t ;
	while(t--){
		int n , k ;
		cin >> n >> k ;
		int a[n];
		for (int i = 0 ; i < n ; i ++){
			cin >> a[i];
		}
		if (binarysearch(a, 0 , n-1 , k)){
			cout <<first_pos(a,n,k)+1 << endl;
		}
		else 
			cout << "NO" << endl;
	}
	 return 0;
	}
