#include <iostream>
using namespace std;
int main(){
   int a[]= {1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
   int b[]={16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
   int c[]={31,32,33,34,35,36,37,38,39,40,41,42,43,44,45};
   int x,numero,d,mitad,primero,ultimo;
   primero=0;
   ultimo=14;
   x=0;
while (true){

cout << "1 numeros del 1 al 15 \n";
cout << "2 numeros el 16 al 30\n";
cout << "3 numeros de 31 al 45\n";
cin>>numero;

switch (numero){
case 1:
cout<<"ingrese el numero que busca\n";
cin>>d;

while (primero <= ultimo && x==0) {
    mitad = (primero + ultimo)/2;

    if (d== a[mitad]){
    x =1;}
    if (d < a[mitad]){
    ultimo = mitad-1;}
    if (d== a[mitad]){
    primero =mitad+1;}

}
  if (x==1) {
  cout<<"el numero si esta\n";}
 else{
    cout<<"el numero no esta n";}
 break;
case 2:
cout<<"ingrese el numero que busca\n";
cin>>d;
while (primero <= ultimo && x==0)
{
    mitad = (primero + ultimo)/2;

    if (d== b[mitad]){
    x =1;}
    if (d < b[mitad]){
    ultimo = mitad-1;}
    if (d== b[mitad]){
    primero =mitad+1;}

}
  if (x==1){
  cout<<"el numero si esta\n";}
 else{
    cout<<"el numero no esta";}
break;

case 3:
cout<<"el numero si esta\n";
cin>>d;
while (primero <= ultimo && x==0)
{
    mitad = (primero + ultimo)/2;

    if (d== c[mitad]){
    x =1;}
    if (d < c[mitad]){
    ultimo = mitad-1;}
    if (d== c[mitad]){
    primero =mitad+1;}

}
  if (x==1){
  cout<<" el numero si esta\n";}
 else{
    cout<<"el el numero no esta\n";}
break;


default:
cout << "numero no valido";

}

}
   
   return 0;
}

	
	



