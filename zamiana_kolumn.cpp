#include <iostream>

using namespace std;

int main()
{

	int tab[][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int tab1[][4] = {{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
//Wyswietlenie pierwszej tablicy	
	for(int i=0;i<4;i++)
	{
		for(int k=0;k<4;k++)
		{
			cout<<tab[i][k]<<" ";
		
		}
		cout<<endl;
	}
//Algorytm zamiany
	for(int i=0;i<4;i++)
	{
		for(int j=0;j<4;j++)
		{
			if(i<1)
			{
				tab[i][j] = tab[i+3][j];
			}
			else
			{
				tab[i][j] = tab1[i-1][j];
			}
		
		
		
		
		}	
	}

//Wyswietlanie drugiej tablicy	
	cout<<"--------------------------------------------------------"<<endl;
        for(int i=0;i<4;i++)
	{
		for(int k=0;k<4;k++)
		{
			cout<<tab[i][k]<<" ";
		}
		cout<<endl;
	
	}
}
