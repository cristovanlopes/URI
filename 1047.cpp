#include <iostream>
using namespace std;
int main(){
	int fh, fm, lh, lm;
	cin>>fh>>fm>>lh>>lm;	
	fh=lh-fh;
	fm=lm-fm;	
		// Corrigir horas para 24 (no caso de hora negativa)
	if(fh<=0){
		fh=fh+24;	
	}
		// Corrigir o minutos para 60, e corrigir hora(subtrair um)
	if(fm<0){
		fm=fm+60;
		fh=fh-1;		
	}	
	cout<<"O JOGO DUROU "<<fh<< " HORA(S) E " <<fm<< " MINUTO(S)";	
}
