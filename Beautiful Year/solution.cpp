					//A Beautiful year
#include<bits/stdc++.h>
using namespace std;
 
bool checkForUniqueDigit(int a,int b,int c,int d){
	if(a!=b && a!=c && a!=d && b!=c && b!=d && c!=d) return true;
	return false;
}
 
int main(){
	int year;
	cin>>year;
	while(true){
		year+=1;
		int a=year%10;
		int b=(year/10)%10;
		int c=(year/100)%10;
		int d=year/1000;
		if(checkForUniqueDigit(a,b,c,d)) {
			cout<<year;
			break;
		}
		
	}
 
	return 0;
}