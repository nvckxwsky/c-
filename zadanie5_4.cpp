//Rozwiazanie zadania 5_4 i zadania 5_5
//AUTOR: Mikołaj Pusz
//DATA:10.04.2023

#include <iostream>
#include <math.h>

using namespace std;


class Punkt2D{
public:
	double x=0,y=0;
	Punkt2D(double a,double b):x(a),y(b){cout<<"Obiekt Klasy Punkt2D utworzono pomyslnie!"<<endl;}
	void CalcDistance(double a,double b){cout<<"Wspolrzedne Obiektu Punkt2D: x="<<x<<" y="<<y<<endl;
		cout<<"Wspolrzedne Punktu z parametru funkcji: x="<<a<<" y="<<b<<endl;
		double CalcX=0,CalcY=0;
		CalcX=(a-x)*(a-x);CalcY=(b-y)*(b-y);
	//	cout<<"CalcX ="<<CalcX<<endl;cout<<"CalcY ="<<CalcY<<endl;
		cout<<"Odleglosc miedzy Obiektem Punkt2D a punktem parametrowym wynosi = "<<sqrt(CalcX+CalcY)<<endl;}
};


class Punkt3D:public Punkt2D{
public:
	double z=0;
	Punkt3D(double a,double b,double c):Punkt2D(a,b),z(c){cout<<"Obiekt klasy Punkt3D utworzono pomyslnie!"<<endl;}
	void CalcDistance(double a,double b,double c){cout<<"Wspolrzedne Obiektu Punkt2D: x="<<x<<" y="<<y<<" z="<<z<<endl;
		cout<<"Wspolrzedne Punktu z parametru funkcji: x="<<a<<" y="<<b<<" z="<<c<<endl;
		double CalcX=0,CalcY=0,CalcZ=0;
		CalcX=(a-x)*(a-x);CalcY=(b-y)*(b-y);CalcZ=(c-z)*(c-z);
	//	cout<<"CalcX ="<<CalcX<<endl;cout<<"CalcY ="<<CalcY<<endl;
		cout<<"Odleglosc miedzy Obiektem Punkt2D a punktem parametrowym wynosi = "<<sqrt(CalcX+CalcY+CalcZ)<<endl;}



};


int main(){
	int destiny=0;
	bool p2d_exist=0,p3d_exist=0;
	cout<<"---------------------------Menu-------------------------------"<<endl;
	cout<<"1.Utworz Punkt2D [dwie zmienne typu double]"<<endl;
	cout<<"2.Utworz Punkt3D [trzy zmienne typu double]"<<endl;
	if(p2d_exist==1){cout<<"3.Oblicz odleglosc miedzy Punktem2D a punktem parametrowym"<<endl;}
	if(p3d_exist==1){cout<<"4.Oblicz odleglosc miedzy Punktem3D a punktem parametrowym"<<endl;}
	cout<<"--------------------------------------------------------------"<<endl;
	if(destiny==1){double m,n;cout<<"Podaj wspolrzedna x:"<<endl;cin>>m;cout<<"Podaj wspolrzedna y:"<<endl;cin>>n;
			Punkt2D p2d(m,n);p2d_exist=1;}
	if(destiny==2){double m,n,o;cout<<"Podaj wspolrzedna x:"<<endl;cin>>m;cout<<"Podaj wspolrzedna y:"<<endl;cin>>n;cout<<"Podaj wspolrzedna z:"<<endl;cin>>o;
			Punkt3D p3d(m,n,o);}
	if(destiny==4){cout<<"Podaj Wspolrzedne dla punktu parametrowego"<<endl;
		double a,b,c;cout<<"Podaj x:"<<endl;cin>>a;cout<<"Podaj y:"<<endl;cin>>b;cout<<"Podaj z:"<<endl;cin>>c;
	}
	
	
	
}
