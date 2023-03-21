#include <bits/stdc++.h>
using namespace std;

void countAndSay(int n) {
	//base cases
	if(n==0)
		return "";
	if(n==1)
		return "1";
	//for rest of the cases, it must start from 1
	//initialize result with string "1"
	string result="1";
	cout<<result<<endl;
	string temp;//temporary string to hold levelwise result
	for(int i=1;i<n;i++){ //iterate for n-1 rows
		//iterate upto current string length
		int len=result.length();
		for(int j=0;j<len;j++){
			int count=1;//initialize count as 1
			//find count for repeated number
			while(j+1<len && result[j]==result[j+1] ){
				count++;
				j++;
			}
			//convert the count to string and add to
			//temprary result, then add original no
			temp+=to_string(count)+result[j];
		}
		//assign temporary result to original result
		//& print for current level
		result=temp;
		cout<<result<<endl;
		//clear the temporary result
		temp="";
	}
}

int main(){
	int n;

	cout<<"count and Say problem.....\n";
	cout<<"enter n, no of rows\n";
	cin>>n;
	//function to print count and say sequence
	coutAndSay(n);

	return 0;
}

