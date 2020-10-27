#include <iostream>
#include <conio.h>
#include <iomanip>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	int i,j;
	cout<<"\t\t\tTabel Perkalian\n\n\n";
	for(i=1;i<11;i++)
	{cout<<setw(5)<<i;
	
	for(j=1;j<=11;j++)
	cout<<setw(5)<<i*j;
	cout<<endl;
	}
	getch();
	return 0;
}
