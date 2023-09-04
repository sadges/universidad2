#include <iostream>

using namespace std;

struct Nodo{
    int da;
    Nodo *ant;
    Nodo *sig;

};

void ilf(Nodo *li, int va){

    Nodo *a= new Nodo;
    Nodo *b;
    a->da=va;
    a->ant=NULL;
    a->sig=NULL;

    if(li==NULL){
        li=a;

    }
	else{
        b=li;
        while(b->sig!=NULL){
            b=b->sig;
    }
    b->sig=a;
    a->ant=b;
    }

}


void ied(Nodo *&li,int val, int valo){
	
    Nodo *a= new Nodo;
    
    a->ant=NULL;
    a->sig=NULL;
    a->da=valo;

    if(li!=NULL){
    	
     Nodo *c,*d;
    c=li;
        
    while(c!=NULL){
    	
        if(c->da==val){
            d=c->sig;
            
            if(c->sig!=NULL){
            	
                d->ant=a;
                a->sig=d;
            }
        a->ant=c;
        c->sig=a;
        }
    c=c->sig;
    }
    }
    else{
        li=a;
    }
}

void ml(Nodo *li){

    Nodo *b=li;
    while(b!=NULL){
        cout<<b->da<<" ";
        b=b->sig;
    }
cout << endl;
}



int main (){

    Nodo *li= NULL;

    int n,nu,v1,v2;

    cout<<"ingrese numero de datos: ";
    cin>>n;
    if(n>0){
        cout<<"ingrese dato "<<1<<":  \n";
        cin>>nu;
        li= new Nodo;
        li->da=nu;
        li->ant=NULL;
        li->sig=NULL;

        if(n>1){
            for(int i=1;i<n;i++){
                cout<<"ingrese dato "<<i+1<<":   \n";
                cin>>nu;
                ilf(li,nu);
            }
        }
        cout<<"\n";
        ml(li);
        cout<<"\n";


        cout<<"ingrese primer dato : ";
        cin>>v1;
        cout<<"ingrese segundo dato: ";
        cin>>v2;
        
        
        
        ied(li,v1,v2);
        
        ml(li);

    }
}

