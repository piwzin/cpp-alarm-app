#include <iostream>
using namespace std;
int main() {
  int hi,mi,ha,ma,f,haa,maa;
  cout<<"Digite as horas e minutos iniciais respectivamente:\n";
  cin>>hi>>mi;
  if(hi<0||hi>23||mi<0||mi>59){
    cout<<" Horario inicial invalido. ";
    return 0;
    }
  cout<<"Digite as horas e minutos atuais respectivamente que irá despertar:\n";
  cin>>ha>>ma;
  if(ha<0||ha>23||ma<0||ma>59){
  cout<<" Horario de alarme invalido ";
  return 0;
  }
  else if(hi<ha){
    f=((ha*60)+ma)-((hi*60)+mi);
    maa=f%60;
    haa=f/60;
    cout<<"O alarme vai despertar daqui a "<<haa<<" hora(s) e "<<maa<<" minuto(s). "<<endl; 
  }
  else if(hi>ha&&mi<ma){
    f=((hi*60)+mi)-((ha*60)+ma);
    maa=f%60;
    haa=(f/60)-1;
    cout<<"O alarme vai despertar daqui a "<<haa<<" hora(s) e "<<maa<<" minuto(s). "<<endl; 
    }
}
