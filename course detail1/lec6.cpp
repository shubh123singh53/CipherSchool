#include<iostream>
using namespace std;

int main()
{
	float ae,be;
	cout<<"Give two floats as input: \n";
	cin>>ae>>be;
	if(ae>0.01 || be>ae)
	{
		cout<<"The condition is correct.\n";
	}
	
	int a,b,c,d;
	cout<<"Give 4 integers as input: \n";
	cin>>a>>b>>c>>d;
	if(a>b && c>d){
		cout<<"Haha\n";
	}
	else if(a>b && c<d)
	{
		cout<<"Hehe\n";
	}
	else if(a<b && c>d)
	{
		cout<<"HuHu\n";
	}
	else{
		cout<<"hoho";
	}
	
	int f;
	cout<<"Give integers as input\n";
	cin>>f;
	switch(f)
	{
		case 1:
			cout<<"The number is 1.\n";
			break;
		case 2:
			cout<<"The number is 2.\n";
			break;
		case 3:
			cout<<"The number is 3.\n";
			break;
		default:
			cout<<"It is Default.\n";
	}
	return 0;
}
