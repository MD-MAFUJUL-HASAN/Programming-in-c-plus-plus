#include <bits/stdc++.h>
using namespace std;

void print(vector<int> a,int n){
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

int minflip(string s)
{
	int flip0=0,flip1=0,flag0=0,flag1=1;

	//converting to string starting with 0
	for(int i=0;i<s.length();i++){
		if(flag0!=s[i]-'0')
			flip0++;
		flag0=1-flag0;
	}

	//converting to string starting with 1
	for(int i=0;i<s.length();i++){
		if(flag1!=s[i]-'0')
			flip1++;
		flag1=1-flag1;
	}

	return flip0>flip1?flip1:flip0; //returnig minimum
}

int main()
{
	string s;

	cout<<"Enter input string\n";
	cin>>s;

	cout<<"minimum no of flip required is: "<<minflip(s)<<endl;

	return 0;
}
