#include <bits/stdc++.h>
using namespace std;

int find(int n){
	//total no of string possible(for details check solution part)
	return 1+(n)+n*(n-1)+n*(n-1)*(n-2)/2+n*(n-1)/2+n;
}

int main()
{
	int n;

	cout<<"enter length of string\n";
	cin>>n;

	cout<<"Number of string possible under ";
	cout<<"constraints is : "<<find(n)<<endl;

	return 0;
}
