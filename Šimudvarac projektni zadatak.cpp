#include <iostream>
#include <cstdlib>

using namespace std;
int cijenaiskopa=45;
float cijenabetona=531.5,visinaetaze=2.8, cijenabloka=8.95,cijenamreze=22.67;
void ispis(){
    cout<<"Dobro dosli u aplikaciju koja ce vam pomoci pri planiranju izgradnje vase nove kuce!"<<endl;
}
void povrsinatemelja(float a, float b){
    if(a==b){
        float P=a*a*0.3;
        cout<<P<<" m^2."<<endl;
    }
    else{
        float P=a*b*0.3;
        cout<<P<<" m^2."<<endl;
    }
}
void cijenatemeljaiploce(float x, float y){
    float dubinatemelja=1.2,sirinatemelja=0.5,zemlja,cijena,beton,betoncijena,mreza,mrezacijena,trosak;
    if(x==y){
        float zemlja=x*x*0.3*dubinatemelja;
        cout<<"Treba iskopati "<<zemlja<<" m^3."<<endl;
        float cijena=zemlja*cijenaiskopa;
        cout<<"Iskop ce kostati "<<cijena<<" kn."<<endl;
        float beton=x*dubinatemelja*0.4;
        float betoncijena=beton*cijenabetona;
        cout<<"Treba "<<beton<<" betona."<<endl;
        cout<<"Beton ce kostati "<<betoncijena<<" kn."<<endl;
        float mreza=beton/(1*2);
        float mrezaCijena=mreza*cijenamreze;
        cout<<"Armatura ce kostati "<<mrezacijena<<" kn."<<endl;
        float trosak=cijena+betoncijena+mrezacijena;
        cout<<"Ukupni trosak "<<trosak<<" kn."<<endl;

    }
    else{
        float zemlja=x*y*0.3*dubinatemelja;
        float cijena=zemlja*cijenaiskopa;
        float beton=y*dubinatemelja*0.4;
        float betoncijena=beton*cijenabetona;
        float mreza=beton/(1*2), mrezacijena=mreza*cijenamreze;
        float trosak=cijena+betoncijena+mrezacijena;
        cout<<"Treba iskopati: "<<zemlja<<"m^3."<<endl;
        cout<<"Iskop ce kostati: "<<cijena<<"kn."<<endl;
        cout<<"Treba "<<beton<<" kg betona."<<endl;
        cout<<"Beton ce kostati: "<<betoncijena<<"kn."<<endl;
        cout<<"Armatura ce kostati:"<<mrezacijena<<"kn."<<endl;
        cout<<"Ukupni trosak: "<<trosak<<"kn."<<endl;
    }
}
void izolacija(float a, float b){
    float x=0.38,y=0.2,z=0.238;
    float oplosjekuce=4*a*visinaetaze*2, povrsinakomada=x*y;
    float brojkomada=oplosjekuce/povrsinakomada, cijenakomada=brojkomada*cijenabloka;
    cout<<"Broj blokova: "<<brojkomada<<endl;
    cout<<"Cijena blokova "<<cijenakomada<<" kn."<<endl;
    }
int piramida(int red){
    if(red==0){
			return 0;
			}
		else if(red==1){
			return 1;
			}
		else {
			return ((red*4)-4)+piramida(red-1);
		}

}

int main()
{
    int red=10;
    float a,b,x,y;
    ispis();
    cout<<"Unesite sirinu i duljinu u metrima: ";
    cin>>a>>b;
    cout<<"Povrsina vaseg temelja smije iznositi maksimalno ";
    povrsinatemelja(a,b);
    cout<<"Unesi sirinu temelja i duljinu temelja u metrima: ";
    cin>>x>>y;
    cijenatemeljaiploce(x,y);
    izolacija(a,b);
    cout<<"Broj blokova za piramidu: "<<piramida(red)<<endl;
    system ("pause");
    return 0;
}
