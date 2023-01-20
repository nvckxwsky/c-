#include <iostream>

using namespace std;
void ile_dni_miesiac(int miesiac,int rok,bool pr,int* suma);
void ile_dni(int* suma_msc,int* suma_dni,bool pr,int miesiac,int dzien,int* suma_rok);
void ile_dni_rok(int rok,int* suma_rok);
void roznica_dni(int suma_dni,int suma_dni1,int* roznica,bool pelnosc_dnia,bool graniczna,bool mija_rok);
void czy_pelny_dzien(int godzina,int minuta,int sekunda,int godzina1,int minuta1,int sekunda1,bool* pelnosc_dnia);
void czy_graniczna(int rok,int miesiac,int dzien,int rok1,int miesiac1,int dzien1,bool* graniczna);
void czy_mija_rok(int rok,int rok1,int miesiac,int miesiac1,bool* mija_rok);

int main()
{	int rok=0,dzien=0,miesiac=0,rok1=0,dzien1=0,miesiac1=0,suma_msc=0,suma_msc1=0;
	int suma_dni=0,suma_dni1=0,suma_rok=0,suma_rok1=0,roznica=0;
	int godzina=0,godzina1=0,minuta=0,minuta1=0,sekunda=0,sekunda1=0,ilosc_zestawow=0;
	bool pr=0,pr1=0,pelnosc_dnia=0,graniczna=0,mija_rok=0;
	int* psuma_msc=&suma_msc;
	int* psuma_dni=&suma_dni;
	int* psuma_rok=&suma_rok;
	int* proznica=&roznica;
	bool* pwarunek=&pelnosc_dnia;
	
	//wprowadzenie danych
	cout<<"Podaj ile zestawow danych chcesz porownac"<<endl;
	cin>>ilosc_zestawow;
	for(int i=0;i<ilosc_zestawow;i++){
	cout<<"Wprowadz 1-sza date w formacie dzien\\miesiac\\rok\\godzina\\minuta\\sekunda"<<endl;
	cin>>dzien>>miesiac>>rok>>godzina>>minuta>>sekunda;
	cout<<"Wprowadz 2-ga date w formacie dzien\\miesiac\\rok\\godzina\\minuta\\sekunda"<<endl;
	cin>>dzien1>>miesiac1>>rok1>>godzina1>>minuta1>>sekunda1;
	
	//okreslenie przestepnosci
	if(rok%4==0 and rok%100!=0 or rok%400==0){pr=1;}
	if(rok1%4==0 and rok1%100!=0 or rok1%400==0){pr1=1;}

	//cout<<pr<<" "<<pr1;
	//suma dni pod wzgledem roku
	ile_dni_rok(rok,psuma_rok);
	//cout<<"suma dni z lat z data1 wynosi"<<suma_rok<<endl;
	psuma_rok=&suma_rok1;
	ile_dni_rok(rok1,psuma_rok);
	//cout<<"suma dni z lat z data2 wynosi"<<suma_rok1<<endl;
	//suma dni pod wzgledem miesiecy
	ile_dni_miesiac(miesiac,rok,pr,psuma_msc);
	psuma_msc=&suma_msc1;
	ile_dni_miesiac(miesiac1,rok1,pr1,psuma_msc);
	//cout<<"suma dni z data1 wynosi = "<<suma_msc<<endl;
	//cout<<"suma dni z data2 wynosi = "<<suma_msc1<<endl;
	//suma dni ogolnie
	psuma_msc=&suma_msc;
	psuma_rok=&suma_rok;
	ile_dni(psuma_msc,psuma_dni,pr,miesiac,dzien,psuma_rok);
	cout<<"suma dni z data1 wynosi = "<<suma_dni<<endl;
	psuma_msc=&suma_msc1;
	psuma_dni=&suma_dni1;
	psuma_rok=&suma_rok1;
	ile_dni(psuma_msc,psuma_dni,pr,miesiac1,dzien1,psuma_rok);
	cout<<"suma dni z data2 wynosi = "<<suma_dni1<<endl;
	//sprawdzanie pelnosci dnia i czy data jest graniczna
	czy_pelny_dzien(godzina,minuta,sekunda,godzina1,minuta1,sekunda1,pwarunek);
	pwarunek=&graniczna;
	czy_graniczna(rok,miesiac,dzien,rok1,miesiac1,dzien1,pwarunek);
	pwarunek=&mija_rok;
	czy_mija_rok(rok,rok1,miesiac,miesiac1,pwarunek);
	//liczenie roznicy dni
	roznica_dni(suma_dni,suma_dni1,proznica,pelnosc_dnia,graniczna,mija_rok);
	cout<<"Różnica dni dla zestawu numer "<<i+1<<" wynosi = "<<roznica<<endl;}
	//zerowanie zmiennych
	rok=0,dzien=0,miesiac=0,rok1=0,dzien1=0,miesiac1=0,suma_msc=0,suma_msc1=0;
	suma_dni=0,suma_dni1=0,suma_rok=0,suma_rok1=0,roznica=0;
	godzina=0,godzina1=0,minuta=0,minuta1=0,sekunda=0,sekunda1=0,ilosc_zestawow=0;
	pr=0,pr1=0,pelnosc_dnia=0,graniczna=0,mija_rok=0;
}

void ile_dni_rok(int rok,int* suma_rok)
{
	int przest=0;
for(int j=1600;j<rok;j++){
	//przestepnosc
	if(j%4==0 and j%100!=0 or j%400==0){przest=1;}
	//liczenie
	if(przest==1){*suma_rok=*suma_rok+366;}
	else{*suma_rok=*suma_rok+365;}}
}
void ile_dni_miesiac(int miesiac,int rok,bool pr,int* suma)
{
for(int i=1;i<=miesiac;i++){
	if(i==2){if(pr==1){*suma=*suma+29;}
		else{*suma=*suma+28;}}
	if(i==4 or i==6 or i==9 or i==11){*suma=*suma+30;}
	if(i==1 or i==3 or 1==5 or i==7 or i==8 or i==10 or i==12){*suma=*suma+31;}}
}
void ile_dni(int* suma_msc,int* suma_dni,bool pr,int miesiac,int dzien,int* suma_rok)
{	
int i=miesiac;
if(i==2){if(pr==1){*suma_dni=*suma_msc-(29-dzien);}
	else{*suma_dni=*suma_msc-(28-dzien);}}
if(i==4 or i==6 or i==9 or i==11){*suma_dni=*suma_msc-(30-dzien);}
if(i==1 or i==3 or i==5 or i==7 or i==8 or i==10 or i==12){*suma_dni=*suma_msc-(31-dzien);}
//*suma_dni=*suma_msc+dzien;
*suma_dni=*suma_rok+*suma_dni;
}
void czy_pelny_dzien(int godzina,int minuta,int sekunda,int godzina1,int minuta1,int sekunda1,bool* pelnosc_dnia)
{
int suma_sekund=0,suma_sekund1=0;
//dla 1-szej daty
for(int i=1;i<=godzina;i++){suma_sekund=suma_sekund+3600;}
for(int j=1;j<=minuta;j++){suma_sekund=suma_sekund+60;}
suma_sekund=suma_sekund+sekunda;
//dla 2-giej daty
for(int i=1;i<=godzina1;i++){suma_sekund1=suma_sekund1+3600;}
for(int j=1;j<=minuta1;j++){suma_sekund1=suma_sekund1+60;}
suma_sekund1=suma_sekund1+sekunda1;
//porownanie
if(suma_sekund1>=suma_sekund){*pelnosc_dnia=1;}
}
void czy_graniczna(int rok,int miesiac,int dzien,int rok1,int miesiac1,int dzien1,bool* graniczna)
{
if(rok-rok1==-1 and miesiac==12 and miesiac1==1 and dzien==31 and dzien1==1){*graniczna=1;}
}
void czy_mija_rok(int rok,int rok1,int miesiac,int miesiac1,bool* mija_rok)
{
if (rok-rok1==-1 and miesiac==miesiac1){*mija_rok=1;}
}
void roznica_dni(int suma_dni,int suma_dni1,int* roznica,bool pelnosc_dnia,bool graniczna,bool mija_rok)
{
//roznica z pelnych dni
int x=suma_dni;
int y=suma_dni1;
if((x-y)<0){*roznica=-1*(x-y);}
else{*roznica=x-y;}
//ostateczna roznica z uwzglednieniem godzin i tego czy daty sa graniczne
if(graniczna==1){*roznica=*roznica-32;}
if(pelnosc_dnia==0){*roznica=*roznica-1;}
if(mija_rok==1){*roznica=*roznica-1;}
}
