#include <iostream>

using namespace std;
void ejemplo();
void comparar(int ,int);
int main(){
	cout<<"Hola Mundo"<<endl;
	//int num=0;
	int salir=1;
	while (salir==1){
	 int arreglo [5];

	 for(int i =0 ;i<5;i++ ){
	  cout<<"escriba algo";
	//cin>>num;
	  cin>>arreglo[i];
	 }
	 cout<<endl<<"los valores leidos son"<<endl;
	 for(int i=0; i<5;i++){
	  cout<<arreglo[i]<<endl;
	 }
	 cout<<endl<<"ingrese 1 para continuar y 0 para salir";
	 cin>>salir;
	}
	ejemplo();
	int numero1, numero2;
	cout<<"ingrese un numero";
	cin>>numero1;
	cout<<"ingrese otro numero";
	cin>>numero2;
	comparar(numero1, numero2);
	return 0;
}
void comparar(int a, int b){
	if(a>b){
	cout<<a<<"mayor que b "<<b<<endl;
	}else if(a==b){
		cout<<a<<"son iguales"<<b<<endl;
	}else{
		cout<<b<<"mayor que a"<<a<<endl;
	}
	
}

void ejemplo(){
	cout<<"lo que sea"<<endl;
}


