#include <iostream>

using namespace std;

int main()
{

	int tab[12];
	int x=0;
	int y=0;
	int powtorka=0;

	for(int i = 0;i<12;i++)
	{	
		cout<<"Podaj liczbe calkowita: "<<endl;
		cin>>x;
		tab[i] = x;
	}
	
	cout<<"Podaj liczbe calkowita y: "<<endl;
	cin>>y;

	for(int j = 0;j<12;j++)
	{
		if(tab[j] == y){powtorka++;}
	
	}
	cout<<"Liczba "<<y<<" powtorzyla sie "<<powtorka<<" razy."<<endl;

}

