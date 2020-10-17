#include <iostream>
using namespace std;

void tukar(int *a, int *b){
	int c;
	c = *a;
	*a = *b;
	*b = c;
}

int main()
{
	int a, b;
	cout<<"Sebelum ditukar"<<endl;
	cout<<"Masukkan nilai A = ";cin>>a;
	cout<<"Masukkan nilai B = ";cin>>b;
	cout<<endl;
	tukar (&a,&b);
	cout<<"Sudah di tukar"<<endl;
	cout<<"Hasil nilai A"<<a<<endl;
	cout<<"Hasil nilai B"<<b<<endl;
	cin.get();
	return 0;
}
