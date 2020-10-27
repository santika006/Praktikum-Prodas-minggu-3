#include <iostream>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int n=5;
	cout<<"Masukkan segitiga angka = 5";
	cin>>n;
	for (int a=1; a<=(5*2)-1; a++){
		if (a<=5){
			for (int b=1; b<=a; b++)
			cout<<b;
		}else{
			for(int c=1; c<=5*2-a; c++)
			cout<<c;
		}
		cout<<endl;
	}
	
return 0;
}
