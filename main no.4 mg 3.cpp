/*SANTIKA LANA HAYATI*/
/*20051397006*/
/*2020B*/
/*Menghitung jumlah 6 suku pertama dari barisan angka*/

#include <iostream>
#include <conio.h>
#include <math.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
using namespace std;

int main(int argc, char** argv) {
	cout<<"jumlah enam suku pertama"<<endl;
	float a,b,c,d,e,f,g,h,i,j,k,l,m;
	a=1;
	b=2;
	c=3;
	d=4;
	e=5;
	f=6;
	g=3;
	h=pow(a,g);
	i=pow(b,g);
	j=pow(c,g);
	k=pow(d,g);
	l=pow(e,g);
	m=pow(f,g);
	cout<<"\n"<<a<<" pangkat "<<g<<" = "<<h;
	cout<<"\n"<<b<<" pangkat "<<g<<" = "<<i;
	cout<<"\n"<<c<<" pangkat "<<g<<" = "<<j;
	cout<<"\n"<<d<<" pangkat "<<g<<" = "<<k;
	cout<<"\n"<<e<<" pangkat "<<g<<" = "<<l;
	cout<<"\n"<<f<<" pangkat "<<g<<" = "<<m;
	getch();
	
	int n=h+i+j+k+l+m;
	
	cout<<"\njumlah = "<<n;

	return 0;
	
}
