#include<iostream>
#include<stack>
using namespace std;
int main()
{
	int n,k;
	cin>>n>>k;
	int a[n];
	long long f=1;
	for(int i=0; i<n; i++){
		cin>>a[i];
	}
	for(int i=0; i<n-1; i++){
		for(int j=i+1; j<n; j++){
			if(a[i]>a[j]){
				f*=j-i+1;
				break;
			}
		}	
	}
	
	cout<<f;
}