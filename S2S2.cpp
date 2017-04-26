#include <iostream>


using namespace std;
/*la funcion musetra el menu y valida la entrada 
que sea un valor correcto
retorna la opcion elegida por el usuario 
*/

int menu();

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
   
    break;
   }
   case 3:{

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
