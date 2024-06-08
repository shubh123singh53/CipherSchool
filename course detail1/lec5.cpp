#include<iostream>
using namespace std;

int main()
{
	int a,b,c;
	cout<<"Input Three integers.";
	cin>>a>>b>>c;
	cout<<(a<b)<<"\n";
	
	if(a>b){
		if(a>c){
			cout<<a<<" is the greatest.\n";
		}
		if(c>b){
			cout<<c<<" is the greatest.\n";
		}
	}
	else{
		cout<<b<<" is the greatest."<<"\n";
	}
	if(a>b && a>c){
		cout<<a<<" is the greatest.\n";
	}
	else if(b>a && b>c){
		cout<<b<<" is the greatest.\n";
	}
	else{
		cout<<c<<" is the greatest.\n";
	}
	return 0;
}
