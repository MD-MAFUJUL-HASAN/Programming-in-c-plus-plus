#include <bits/stdc++.h>
using namespace std;

int compute(string s){
	int count=0;
	//counting no of '1's
	for(int i=0;i<s.length();i++)
		if(s[i]=='1')
			count++;
	//returning count choose 2
	return (count*(count-1))/2;
}

int main(){
	string s;

	cout<<"enter your input string(binary string)\n";
	cin>>s;

	cout<<"no of substrings starting with '1' &";
	cout<<" ending with '1' is: "<<compute(s)<<endl;

	return 0;
}
