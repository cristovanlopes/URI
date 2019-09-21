//Problem URI https://www.urionlinejudge.com.br/judge/pt/problems/view/1049
#include <iostream>
#include <string>
using namespace std;
int main(){
  string a, b, c;
  cin >> a >> b >> c;

  if(a == "vertebrado" && b == "ave" && c == "carnivoro"){
    cout << "aguia" << endl;
  }else if(a == "vertebrado" && b == "ave" && c == "onivoro" ){
    cout<<"pomba"<<endl;}
  else if(a=="vertebrado"&&b=="mamifero")
  {
    if(c=="onivoro"){
      cout<<"homem"<<endl;}
      else{
        cout <<"vaca" << endl;
      }
    }
  else{
    if(b=="inseto"&&c=="hematofago"){cout<<"pulga"<<endl;}
    else if(b=="inseto"&&c=="herbivoro"){cout<<"lagarta"<<endl;}
    else{
      if (c=="hematofago"){
        cout << "sanguessuga" << endl;
      }
      else{
        cout << "minhoca" << endl;
      }
    }
  }
}
