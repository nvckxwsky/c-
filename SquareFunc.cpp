#include <iostream>
#include <string.h>
#include <math.h>

using namespace std;

class SquareFunc{
private:
    double res_0=0,res_1=0,res_2=0;
    double* p_res0=&res_0;
    double* p_res1=&res_1;
    double* p_res2=&res_2;
public:
    //GetData();
    //Calc(double a,double b,double c,double* p_res0,double* p_res1,double* p_res2)
    static double a,b,c;
    int destiny;
    bool a_exist=0,b_exist=0,c_exist=0,exit=0;
    SquareFunc(){cout<<"Utworzono funkcje!"<<endl;}
    //SquareFunc(double a,double b,double c){this->a=a;this->b=b;this->c=c;cout<<"Wartosci wprowadzone wynosza a = "<<a<<"  b = "<<b<<" c = "<<c<<endl;}
    //void ShowRes(){if(p_res0!=0){cout<<}
    void Calc(double a,double b,double c,double* p_res0,double* p_res1,double* p_res2){
        double delta;
        delta=(b*b)-4*a*c;
        if(delta==0){*p_res0=(-b)/2*a;}
        if(delta<0){*p_res1=(-b-sqrt(delta))/2*a;*p_res2=(-b+sqrt(delta))/2*a;}
    }
static	int GetData(){
	cout<<"Podaj a"<<endl;
	cin>>a;
	cout<<"Podaj b"<<endl;
	cin>>b;
	cout<<"Podaj c"<<endl;
	cin>>c;
	re
    }
    



};

int main()
{
    int destiny=0; 
    bool exit=0; 
    SquareFunc f;
    //cout<<"<-------------------------------------main-menu------------------------------------------------->"<<endl;
    //cout<<"<----------------------------------------------------------------------------------------------->"<<endl;cin>>destiny;
    f.GetData;
    




}
