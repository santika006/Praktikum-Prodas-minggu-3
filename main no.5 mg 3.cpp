#include <iostream>
#include <conio.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;
int main(int argc, char** argv) {
	int a=3, b=17,n;
	for(a=a;a<=b;a+=2){
		cout<<a;
		if(a<b)
		{
			cout<<"+";
		}
	}
	cout<<"=";
	n=(b+1)/2;
	n=n*n;
	cout<<n<<endl;
	return 0;
}
