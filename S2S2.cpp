#include <iostream>


using namespace std;
/*la funcion musetra el menu y valida la entrada 
que sea un valor correcto
retorna la opcion elegida por el usuario 
*/

int menu();
int factorial(int);
int main(){
 bool salir=false;
 while(!salir){
  switch(menu()){
   case 1:{
    int num1,num2;
    cout<<"Escriba un numero: "<<endl;
    cin>>num1;
    cout<<"Escriba un numero: "<<endl;
    cin>>num2;
    cout<<"El resultado es: "<<num1*num2<<endl; 
    break;
   }
   case 2:{
    int num1,num2;
    cout<<"Escriba un numero: "<<endl;
    cin>>num1;
    cout<<"Escriba un numero: "<<endl;
    cin>>num2;
    cout<<"EL resultado es: "<<num1+num2<<endl;
    break;
   }
   case 3:{
    int num;
    cout<<"Escriba un numero: "<<endl;
    cin>>num;
    cout<<"El factorial es: "<<factorial(num)<<endl;
    break;
   }
   case 4:{
    salir=true;
    break;
   }
  
  }
 }
 return 0;
}

int menu(){
 int opcion;
 bool valido=false;
 do{
  cout<<" Menu " <<endl
      <<"1. Multiplicar dos numeros"<<endl
      <<"2. Sumar dos numeros"<<endl
      <<"3. Calcular factorial"<<endl
      <<"4. Salir"<<endl;
  cout<<" Ingrese una opcion";
  cin>>opcion;
  if(opcion>0&&opcion<5){
   valido=true;
  }else{
   cout<<"opcion no valida, intente de nuevo..."<<endl;
   }
 }while(!valido);
  return opcion;
}
int factorial(int i){
    if(i<0){
        return 0;
    }else if(i==0){
        return 1;
    }else{
        return i*factorial(i-1);
    }
}
