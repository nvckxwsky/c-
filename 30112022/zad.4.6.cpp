#include <iostream>

using namespace std;


int main()
{

	int L;
	int srednia=0;
	int suma=0;
	
	cout<<"Podaj liczbe L //0<L<50"<<endl;
	cin>>L;

	int tab[L];
	
	for(int i=0;i<L;i++)
	{
		int x;
		cout<<"Podaj liczby calkowite: "<<endl;
		cin>>x;
		tab[i] = x;
	
	}

	for(int j=0;j<L;j++)
	{	
		suma = suma + tab[j];
	}
	
	srednia = suma/L;

	cout<<"Srednia wynosi = "<<srednia<<endl;
	cout<<"Liczb wieksze od sredniej: "<<endl;
	
	for(int k=0;k<L;k++)
	{
		if(tab[k] > srednia){cout<<tab[k]<<endl;}
	}
	

}

