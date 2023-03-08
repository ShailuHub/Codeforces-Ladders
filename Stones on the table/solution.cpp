					//Stones on the Table
#include<bits/stdc++.h>
using namespace std;
 
int main(){
	string s;
	int n;
	cin>>n>>s;
	int count=0;
	for(int i=1;i<s.length();++i){
		char ch=s[i-1];
		if(ch==s[i]){
			while(s[i]==ch){
				count++;
				i++;
			}
		}
	}
	cout<<count;
	return 0;
}