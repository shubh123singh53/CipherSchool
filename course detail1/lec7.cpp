#include<iostream>
using namespace std;

int main()
{
	int x;
	int a[5];
	cin>>x;
	cout<<"Value of x is : "<<x<<"\n";
	for(int i=0;i<5;i++){
		cin>>a[i];
	}
	cout<<"Printing a[5] in reverse order: ";
	for(int i=4;i>=0;i--){
		cout<<a[i]<<" ";
	}
	return 0;
}