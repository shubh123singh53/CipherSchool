#include<iostream>
using namespace std;

int main(){
	int i;
	i=1; //intialize
	while(i<101){  //condition
		cout<<i<<" ";   //Loop
		i++;  // updation
	}
	int j;
	int input;
	for(j=1;j<101;j++){
		cin>>input;
		if (input==65){
		cout<<"Congrats you have guessed correct ";
		break;
	}
	}
	return 0;
}