const int MAXX=8;
typedef int contenedor[MAXX];
typedef struct tpila{
					contenedor elem;
					int tope;		
				};
				
void crearPila(tpila &p)
{
	p.tope=-1;	
}			
bool llena(tpila p)
{
	return p.tope==MAXX-1;
	
}	

bool vacia(tpila p)
{
	return p.tope==-1;
}

void apilar(tpila &p, int dato)
{
	if(llena(p)!=true)
		
		//p.elem[++p.tope]=dato;
		{
			p.tope++;
			p.elem[p.tope]=dato;
		}
	else
		cout<<"PILA LLENA"<<endl;	//nueva condicion	
	
	
}

void desapilar(tpila &p, int &dato)
{
	if(vacia(p)!=true)
	
	//	dato=p.elem[p.elem--];
	{
		dato=p.elem[p.tope];
		p.tope--;
	}
}

int verTope(tpila p)	//uso de auxiliar
{int aux;
	if(vacia(p)!=true)
		aux=(p.elem[p.tope]);
	return aux;		
}

void vaciar(tpila &p)
{
	crearPila(p);
}




