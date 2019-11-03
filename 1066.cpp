//Pares, Ímpares, Positivos e Negativos
//Pares entre Cinco Números
#include <iostream>
using namespace std;
int main(){
    int x=0, y, nega=0, posi=0, imp=0;
    //x par imp posi nega
    for (int i = 0; i < 5; i++)
    {
        cin>>y;
        if (y%2==0)
        {
            x++;
        }
        if (y%2!=0)
        {
            imp++;
        }
        if (y>0)
        {
            posi++;
        }
        if (y<0)
        {
            nega++;
        }
        
        
    }    
    cout<<x<<" valor(es) par(es)"<<endl;
    cout<<imp<<" valor(es) impar(es)"<<endl;
    cout<<posi<<" valor(es) positivo(s)"<<endl;
    cout<<nega<<" valor(es) negativo(s)"<<endl;
}
/*
3 valor(es) par(es)
2 valor(es) impar(es)
1 valor(es) positivo(s)
3 valor(es) negativo(s)*/
