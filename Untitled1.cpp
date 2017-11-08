#include <iostream>
using namespace std;

int main(){
	int x,y,z;
	cout<<"Masukan Nilai x : ";cin>>x;
	cout<<"Masukan Nilai y : ";cin>>y;
	if(x<y){
		z=y-x;
	}
	else{
		z=x-y;
	}
	cout<<"Hasil Nilai Z : "<<z;
}
