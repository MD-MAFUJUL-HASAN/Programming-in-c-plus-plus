
#include <bits/stdc++.h>
using namespace std;

void freq(string s){
	//array to store frequency of 26 characters,initialized to 0
	int arr[26]={0};

	for(int i=0;i<s.length();i++){
		// s[i] is the ascii value of the letter at index i & 'a'
		//also gives the ascii value of a, in this way we are
		//checking which alphabet is at index i and increasing its frequency
		arr[s[i]-'a']++;
	}

	for(int i=0;i<26;i++){
		if(arr[i]!=0)
			printf("%d%c",arr[i],'a'+i);
	}

	cout<<endl;
}

int main(){
	string s;

	cout<<"enter string\n";
	cin>>s;
	cout<<"encoded string is : "<<endl;
	freq(s);

	return 0;
}
