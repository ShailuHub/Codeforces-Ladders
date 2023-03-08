					//Nearly Lucky Number
#include<bits/stdc++.h>
using namespace std;
 
// Logarithmic time complexity
 
string isLuckyNumber(long long &num){
	int count=0;
	while(num>0){
		int digit=num%10;
		if(digit==4 || digit==7) count++;
		num=num/10;
	}
	if(count==4 || count==7) return  "YES";
	return "NO";
}
int main(){
	long long num;
	cin>>num;
	cout<<isLuckyNumber(num);
	return 0;
}