#include <iostream>

using namespace std;

int main()
{

	int n;

	cout<<"Podaj liczbe n //1=<n=<200 "<<endl;
	cin>>n;

	int tab[n];
	
	for(int i=0;i<n;i++)
	{	int x;
		cout<<"Podaj liczbe rzeczywista: "<<endl;
		cin>>x;
		
		tab[i] = x;	
	}
	
	for(int j=0;j<n;j++)
	{
		int index=n-1;
		cout<<tab[index-j]<<endl;
	
	}
	



}

