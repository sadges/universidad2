#include <iostream>
#include <conio.h>

using namespace std;

struct Nodo{
	int da;
	Nodo *siguiente;
};

void il(Nodo *&,int);
void ml(Nodo *);
void bu(Nodo *,int);
void ac(Nodo *,int);
void en(Nodo *&,int);




int main (){
 
	Nodo *li = NULL;
	int da,a,e;
	a=0;
	
	cout<<"ingrese cantidad de numeros de la lista:\n";
	cin>>e;
	
	for ( a ; e > a  ; a++){
    cout<<"inserte numero:\n";
	cin>>da;
	il(li,da);
    	
}

	ml(li);
	system ("pause");
	cout<<"\n";
	
	cout<<"\ningrese dato a buscar\n";
	cin>>da;
	bu(li,da);
	system ("pause");
	
	cout<<"\ningrese dato a actualizar\n";
	cin>>da;
	ac(li,da);
	system ("pause");
	
	cout<<"\n digite dato a eliminar \n";
	cin>>da;
	en(li,da);
	cout<<"\n";
	
	

	
}


void il(Nodo *&li,int n){
	Nodo *nn=new Nodo();
	nn->da =n;
	
	Nodo *a1=li;
    Nodo *a2; 
    
    while ((a1 !=NULL)&&(a1->da<n)){
	a2 =a1;
	a1 = a1 ->siguiente;

}

if(li == a1){
	li = nn;
}
else{
	a2->siguiente = nn;
}

nn->siguiente = a1;

cout<<"elemento "<<n<<" insertado\n";

}

void ml(Nodo *li){
	Nodo *actual = new Nodo();
	actual = li;
	
	while(actual != NULL){
		cout<<actual->da<<"  ";
		actual = actual->siguiente;
	}
}



void bu(Nodo *li,int n){
	bool band= false;
	
	Nodo *actual = new Nodo();
	actual = li;
	
	while((actual !=NULL)&&(actual->da <=n)){
		if(actual->da==n){
			band=true;
		}
		actual=actual->siguiente;
		
	}
	if(band==true){
		cout<<"elemento  "<<n<<"  encontrado\n";
	}
	else{
		cout<<"elemento  "<<n<<"  no encontrado\n";
	}
}
void ac(Nodo *li,int n){
    bool band = false;
    
	Nodo *actual =new Nodo();
    actual = li;
    
    while((actual !=NULL)&&(actual->da <=n)){
     if(actual->da==n){
     	band=true;

	   }
	   actual=actual->siguiente;
	   
    } 
    if(band==true){
    cout<<"ingrese el nuevo dato\n";
    cin>>actual->da;
    }
    else{
	cout<<"elemento "<<n<<" no encontrado\n";}
}

void en(Nodo *&li,int n){
	if(li != NULL){
		Nodo *ab;
		Nodo *anterior =NULL;
		
		ab=li;
		
		while((ab != NULL)&&(ab->da !=n)){
			anterior =ab;
			ab =ab->siguiente;
		}
		if(ab==NULL){
			cout<<"elmento no encontrado";
		}
		else if(anterior!=NULL){
			li=li->siguiente;
				delete ab;
		}
		else{
			anterior->siguiente=ab->siguiente;
			delete ab;
		}
	}
	
	
}




