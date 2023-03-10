					//Find pairs
#include<bits/stdc++.h>
using namespace std;
 
int validPair(int arr[],int n,long l,long r){
	sort(arr,arr+n);
	set <pair<int,int>> set;
	for(int s=0;s<n;++s){
		int i=0,j=n-s-1;
		while(i<j){
			if((arr[i]+arr[j])>=l && (arr[i]+arr[j])<=r){
				pair<int,int> p={i,j};
				set.insert(p);
				i++;
			}else if((arr[i]+arr[j])<l) i++;
			else j--;
	}
	}
	return set.size();
}
int main(){
	int t;
	cin>>t;
	while(t--){
		int n;
		long l,r;
		cin>>n>>l>>r;
		int arr[n];
		for(int i=0;i<n;++i){
			cin>>arr[i];
		}
		cout<<validPair(arr,n,l,r)<<endl;
	}
	return 0;
}