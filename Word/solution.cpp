					//Word
#include<bits/stdc++.h>
using namespace std;
 
 
int main(){
	string s;
	cin>>s;
	int sLetter=0;
	int bLetter=0;
	for(int i=0;i<s.length();++i){
		if(s[i]>='A' && s[i]<='Z') bLetter++;
		else sLetter++;
	}
	string ans="";
	if(sLetter>=bLetter) {
		for(int i=0;i<s.length();++i){
			ans+=tolower(s[i]);
		}
	}
	if(sLetter<bLetter) {
		for(int i=0;i<s.length();++i){
			ans+=toupper(s[i]);
		}
	}
	cout<<ans;
	return 0;
}