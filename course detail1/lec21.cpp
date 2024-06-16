#include<iostream>
using namespace std;

void minandmax(int *a){
	//changing *min,*max will effect outside also
	
//	*min = 1;
//	*max = 5;
     
     int i;
     int small=a[0], large=a[0];
     for(i=0;i<5;i++){
     	if(a[i] > large){
     		large = a[i];
		 }
		 if(a[i] < small){
     		small = a[i];
		 }
	 }
	 
	 cout<<"max: "<<large<<" min: "<<small;
}

int main(){
	int a[5];
	
	int i;
	for(i=0;i<5;i++){
		cin>>a[i];
	}
	minandmax(a);
	return 0;
}