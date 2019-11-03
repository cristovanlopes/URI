//Pares entre Cinco Números
//Pares entre Cinco Números
#include <iostream>
using namespace std;
int main(){
    int x=0, y;
    for (int i = 0; i < 5; i++)
    {
        cin>>y;
        if (y%2==0)
        {
            x++;
        }
        
    }
    cout<<x<<" valores pares"<<endl;
}
