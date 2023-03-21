#include <bits/stdc++.h>
using namespace std;

string findPrefix(string x,string y){
	//base case checking
	if(x=="" || y=="")
		return "";

	string result="";

	//if string x is smaller than y
	if(x.length()<y.length()){
		//check up for common prefix part
		for(int i=0;i<x.length();i++){
			if(x[i]==y[i])
				result+=x[i];
		}
	}
	else{
		//if string y is smaller than x
		for(int i=0;i<y.length();i++){
			//check up for common prefix part
			if(y[i]==x[i])
				result+=y[i];
			else
				return result;
		}
	}
	return result;
}

string longestCommonPrefix(vector<string>& strs) {
	//base cases
	if(strs.size()==0)
		return "";
	//if only one string exists
	if(strs.size()==1)
		return strs[0];
	string prefix=strs[0];
	//follow the associative property for checking
	//take two strings each time & pass output prefix
	//as one string for further processings
	for(int i=1;i<strs.size();i++){
		prefix=findPrefix(prefix,strs[i]);
		if(prefix=="")
			return prefix;
	}
	return prefix;
}

int main(){
	int n;
	cout<<"enter no of strings you want to add\n";
	cin>>n;

	string s;
	vector<string> v;
	cout<<"enter "<<n<<" strings\n";

	//collect input
	while(n--){
		cin>>s;
		v.push_back(s);
	}
	//print longest common prefix
	if(longestCommonPrefix(v)=="")
		cout<<"no common prefix between the strings\n";
	else
		cout<<"longest common prefix: "<<longestCommonPrefix(v)<<endl;

	return 0;
}
