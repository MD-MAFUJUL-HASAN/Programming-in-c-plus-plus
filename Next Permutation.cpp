#include <bits/stdc++.h>
using namespace std;

//to print a vector
void print(vector<int> a,int n){
	for(int i=0;i<n;i++)
		cout<<a[i]<<" ";
	cout<<endl;
}

void nextPermutation(vector<int> a,int n){
	int k=-1,l,temp;

	//finding largest k s.t. a[k]<a[k+1]
	for(int i=0;i<n-1;i++){
		if(a[i]<a[i+1])
			k=i;
	}

	//if k not updated sort  and print
	if(k==-1){
		sort(a.begin(),a.end());
		print(a,n);
		return;
	}

	//find the largest l s.t. a[k]<a[l]
	for(int i=k+1;i<n;i++){
		if(a[i]>a[k])
		l=i;
	}

	//swap a[k] and a[l]
	temp=a[k];
	a[k]=a[l];
	a[l]=temp;

	//print upto a[k]
	for(int i=0;i<=k;i++)
		cout<<a[i]<<" ";

	//reverse printing for a[k+1] to a[n-1]
	for(int i=n-1;i>k;i--)
		cout<<a[i]<<" ";

	cout<<endl;
	return;
}

int main(){
	int n,item;

	cout<<"enter length of permutation\n";
	scanf("%d",&n);

	cout<<"enter the permutation leaving spaces betweeen two number\n";
	vector<int> a;
	for(int j=0;j<n;j++){
		scanf("%d",&item);
		a.push_back(item);
	}

	cout<<"Current permutation is:\n";
	print(a,n);
	cout<<"next permutation is:\n";
	nextPermutation(a,n);

	return 0;
}
