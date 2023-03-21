#include <bits/stdc++.h>
using namespace std;

void print(vector<int> a,int n){
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

int max(int a,int b){
	return (a>b)?a:b;
}


int LPS(string s){
	int n=s.length();
	int start,end;

	int L[n][n];
	memset(L,0,sizeof(L)); //initialize to 0

	for(int i=0;i<n;i++) //base case of single letter string
		L[i][i]=1;

	for(int i=2;i<=n;i++){ //i is length of string
		for(int j=0;j<n-i+1;j++){ //j=starting index
			start=j;
			end=j+i-1;
			if(i==2 && s[start]==s[end]) //two length palindrome
				L[start][end]=2;
			else if(s[start]==s[end]) //if s[start]=s[end]
				L[start][end]=2+L[start+1][end-1]; //extend
			else
				//take max of possible two substring output
				L[start][end]=max(L[start+1][end],L[start][end-1]);
		}
	}
	return L[0][n-1]; //final result
}

int main()
{
	int t,n,item;
	string s;

	cout<<"Enter input string\n";
	cin>>s;

	cout<<"Longest palindromic sub-sequence is: ";
	cout<<LPS(s)<<endl;

	return 0;
}
