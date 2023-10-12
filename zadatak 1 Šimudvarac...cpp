#include <iostream>

using namespace std;
float povrsina(float duljina, float sirina){
      return (duljina*sirina);
}
float brojuredu(float duljina){
      return (duljina-4)/2;
}
float brojpored(float sirina){
      return (sirina-5.5)/3.5;
}
float brojsadnica(float duljina, float sirina){
      return ((duljina-4)/2)*((sirina-5.5)/3.5);
}
float cijena(float sadnice){
      return (sadnice*15);
}
float rupe(float sadnice){
      return (sadnice*20);
}
float trosak(float cjena, float a){
         return (cjena + a);
}
long int zarada(long int sadnice,long int b){
         cout<<"Unesi otkupnu cijenu po kg: ";
         cin>>b;
         return (sadnice*120*b);
}
void povrat(float cjena, float a,float uk,float c,float p){
     uk=cjena+a;
     p=c/uk;
     cout<<"Povrat "<<p<<" mjeseci"<<endl;

}
void sok(float sadnice,float ukupno,float brpak,float zarada1){
      ukupno=(sadnice*120)/2.5;
      brpak=ukupno/5;
      zarada1=(brpak*40)-(brpak*12);
      cout<<"Broj litara 100% soka od jabuke: "<<ukupno<<endl;
      cout<<"Broj pakiranja od 5l: "<<brpak<<endl;
      cout<<"Zarada od prodaje soka: "<<zarada1<<" kn"<<endl;

}
int main()
{
    float sadnice,duljina,sirina,brojporedu,brojredova,povrsina2;
    float a,v,cjena,b,ukupno,brpak,zarada1,c,p;
    cout<<"Unesite dimenzije u duljinu i sirinu zemljista u metrima: "<<endl;
    cin>>duljina;
    cin>>sirina;
    cout<<"Povrsina zemljista je: "<<povrsina(duljina,sirina)<<"m"<<endl;
    povrsina2=(duljina-4)*(sirina-5.5);
    cout<<"Broj sadnica u redu: "<<brojuredu(duljina)<<endl;
    cout<<"Broj redova: "<<brojpored(sirina)<<endl;
    cout<<"Broj sadnica: "<<brojsadnica(duljina,sirina)<<endl;
    sadnice=brojsadnica(duljina,sirina);
    cout<<"Cijena sadnica: "<<cijena(brojsadnica(duljina,sirina))<<"kn, a cijena iskopa rupa je: "<<rupe(sadnice)<<"kn"<<endl;
    cjena=cijena(sadnice);
    a=rupe(sadnice);
    c=zarada(sadnice,b);
    cout<<"Trosak kopanja rupa i sadnica: "<<trosak(cjena,a)<<endl;
    sok(sadnice,ukupno,brpak,zarada1),povrat(cjena,a,ukupno,c,p);;
    return 0;
}
