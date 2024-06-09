#include<iostream>
using namespace std;

int main()
{   int a[9];
int i;
cout<<"Give 10 integers: "<<endl;
for(i=0;i<10;i++){
	cin>>a[i];
}
cout<<"The 10 given integers are: ";
for(i=9;i>=0;i--){
	cout<<a[i]<<endl;
}
	return 0;
}