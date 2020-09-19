#include<iostream>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
#include "PilaTDA.hpp"
//#include "PilaTDAReg.hpp"
void cargar_elementos(tpila &p);
void mostrar_elementos(tpila p);
void fibonacci(tpila &p);

main()
{
	tpila pila;
	int num;
	crearPila(pila);
	//cargar_elementos(pila);
//	mostrar_elementos(pila);
	fibonacci(pila);
	//system("pause");
		
	//system("pause");
	
}

void cargar_elementos(tpila &p)
{
	int dato, valor;		
	char resp;
	tpila aux;
	crearPila(aux);
	do
	{
		cout<<"Ingrese un valor:";
		cin>>dato;
		if(vacia(p))
			apilar(p,dato);
		else
		{
			while(!vacia(p) && dato>verTope(p))
			{
				desapilar(p,valor);
				apilar(aux,valor);	
			}					
			apilar(p,dato);
			while(vacia(aux)!=true)
			{	
			
				desapilar(aux,valor);
				apilar(p,valor);
			}
		}	
		cout<<"desea seguir s\n:";
		cin>>resp;
		
	}while(resp!='n' && resp!= 'N' && llena(p)!=true);
}
void mostrar_elementos(tpila p)
{
	tpila aux;
	int extraido;
	crearPila(aux);
	cout<<"Orden 1	"<<endl;
	while(vacia(p)!=true)
		{
			desapilar(p,extraido);
			apilar(aux, extraido);	
			cout<<extraido<<endl;
		}
		
	cout<<"Orden 2	"<<endl;	 
		while(vacia(aux)==false)
		{
			desapilar(aux,extraido);
			apilar(p,extraido);
			cout<<extraido<<endl;
			
		}

}

void fibonacci(tpila &p)
{
	int num1=1;
	int num2=1;
	int i;
	int total;
	int total1;
	tpila aux;
	crearPila(p);
	//cout<<"asd"<<endl;
	if(vacia(p)!=false)
	{
		//do{
		for(i=0;i<=MAXX;i++)	
		{
		
			apilar(p,num1);			
			apilar(p,num2);
			total=p.elem[p.tope]=num1+num2;
			total+=num1;
			desapilar(p,num1);
			desapilar(p,num2);
			//p.tope++;
			apilar(aux,num1);
			apilar(aux,num2);
			
			//p.tope++;
		//	apilar(aux,total1);
		//	desapilar(aux,total);
		//	desapilar(aux,total1);
			//desapilar(aux,total);
			
			
				
			cout<<total<<endl;
			//cout<<total1<<endl;
		}
		//}while(total!=MAX);
	}

}

