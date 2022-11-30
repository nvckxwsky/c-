#include <iostream>

using namespace std;

int main()
{


	int tab[20];

	for(int i=0;i<20;i++)
	{
		int x;
		cout<<"Podaj liczbe calkowita: "<<endl;
		cin>>x;
		tab[i] = x;
	}
	
	for(int j=0;j<10;j++)
	{
		cout<<tab[9-j]<<endl;
	}

	for(int k=0;k<10;k++)
	{
		cout<<tab[10+k]<<endl;
	}




}

