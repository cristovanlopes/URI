#include <iostream>
#include <cmath>
using namespace std;
int main(){
    int y, v, n;
    double p, x;
    cin>>v>>n;
    p=v*n;
    for (int i = 10; i <= 90; i=i+10)
    {           
        x=ceil(p*i/100);
        y=x;
        if (i==90)  
            cout<<y<<endl;            
        else
            cout<<y<<" ";
        
    }
}
