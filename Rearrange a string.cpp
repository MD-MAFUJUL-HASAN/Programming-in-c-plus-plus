#include <bits/stdc++.h>
using namespace std;

void rearrange(string s){
	int sum=0;
	map<char,int> m;

	for(int i=0;i<s.length();i++){
		if(s[i]>='0' && s[i]<='9')//digut
			sum+=s[i]-'0';
		else //character
			m[s[i]]++;
	}

	for(auto it=m.begin();it!=m.end();it++){
		//print the character as many time it occured
		for(int i=0;i<it->second;i++)
			cout<<it->first;
	}
	cout<<sum<<endl; //printing sum
}

int main(){
	string s;

	cout<<"Enter input string\n";
	cin>>s;
	cout<<"Rearranged string is:\n";
	rearrange(s);

	return 0;
}
