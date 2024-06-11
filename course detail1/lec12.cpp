#include<iostream>
using namespace std;

int main()
{
	int password1,password2;
	cout<<"Enter the password: ";
	cin>>password1>>password2;
	do{
		cout<<"The password does not meet the required condition, Please enter the password again.";
		cin>>password1;
	}while(password1<999999);
	cout<<"The user has entered a correct Password";
	while(password2>99){
		cout<<"Chocolates.";
	}
	int count=0;
	while(1){
		cout<<"Chocolate ";
		count++;
		if(count>100)break;
	}
	int p;
	for(p=0; ;p++){
		cout<<p<<" ";
		if(p>100) break;
	}
	return 0;
}