#include<iostream>
using namespace std;

int main()
{
	int i;
	i=0;
	int j,k;
	j=0;
	k=0;
	cout<<i<<" "<<j<<" "<<k<<endl;
	j=i++;
	cout<<i<<" "<<j<<" "<<k<<endl;
	k=++i;
	cout<<i<<" "<<j<<" "<<k<<endl;
	int p;
	for(p=1;p<101;p++)
	{
		cout<<p<<" ";
	}
	return 0;
}