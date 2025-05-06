 #include <iostream>
using namespace std;
int main(){
int v1;
do{
  cout<<"ingrese un numero:";
cin>>v1;
  if(v1!=0){
     string resultado =(v1>0)? "positivo":"negativo";
  cout<<" el numero es: "<<resultado;
  }
}while(v1!=0);
  cout<<""<<endl;
return 0;
}