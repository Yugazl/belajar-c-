#include <iostream>
using namespace std;

int main()
{
	int nilai;
	cout<<"masukan nilai";
	cin>>nilai;
	if(nilai>78){
		cout<<"lulus";
	}else if(nilai==78){
		cout<<"KKM";
	}else{
		cout<<"tidak lulus";
	}
}
