                                                // Beautiful Matrix

#include<bits/stdc++.h>
using namespace std;
 
int moves(int arr[5][5]){
	if(arr[2][2]==1) return 0;
	int count = 0;
	for(int i=0;i<5;++i){
		for(int j=0;j<5;++j){
			if(arr[i][j]==1){
				count=abs(i-2)+abs(j-2);
			}
		}
	}
	return count;	
 
}
 
int main(){
	int arr[5][5];
	for(int i=0;i<5;++i){
		for(int j=0;j<5;++j){
			cin>>arr[i][j];
		}
	}
	cout<<moves(arr);	
	return 0;
}