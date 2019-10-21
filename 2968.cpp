#include <iostream>
using namespace std;
int main()
{
	double abacaxi,  banana, caju, damasco, embauba, figo, V, N, goiaba, jaca, kiwi;
	int abacaxi2, banana2, caju2, damasco2, embauba2, figo2, goiaba2, jaca2, kiwi2;
	cin>>V>>N;
	V=V*N;
	abacaxi=0.1*V;
	abacaxi2=abacaxi;
	if(abacaxi2!=abacaxi)
	{
		abacaxi2++;;
	}
	banana=2*abacaxi;
	banana2=banana;
	if(banana2!=banana){
       banana2++; 
	}
    caju=3*abacaxi;
    caju2=caju;
	if(caju2!=caju){
        caju2++;
	}
    damasco=4*abacaxi;
    damasco2=damasco;
    if(damasco2!=damasco){
        damasco2=damasco2+1;
	}else
    {
        damasco2=damasco;
    }
    
    embauba=5*abacaxi;
    embauba2=embauba;
    if (embauba2!=embauba)
    {
        embauba2++;
    }
    
    
    figo=6*abacaxi;
    figo2=figo;
    if(figo2!=figo){
        figo2++;
    }
    goiaba=7*abacaxi;
    goiaba2=goiaba;
    if (goiaba2!=goiaba)
    {
        goiaba2++;
    }
    
    jaca=8*abacaxi;
    jaca2=jaca;
    if(jaca2!=jaca){
        jaca2++;
    }
    kiwi=9*abacaxi;
    kiwi2=kiwi;
    if (kiwi2!=kiwi)
    {
        kiwi2++;
    }    
    cout<<abacaxi2<<" "<<banana2<<" " <<caju2<<" "<<damasco2<<" "<<embauba2	<<" "<< figo2<<" "<< goiaba2<<" "<< jaca2<<" "<< kiwi2<< endl;
	
	return 0;
}
