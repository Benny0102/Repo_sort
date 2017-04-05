#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void bublesort(int array[], int lunghezza){
 int temp;
 int i;
 int limite=0;
 int ultimoscambio;
 int scambio;
 do{
 scambio=0;
  for(i=lunghezza - 1; i>limite; i--){
  if(array[i] < array[i-1]){
   temp=array[i-1];
	array[i-1]=array[i];
	array[i]=temp;
	scambio=1;
	ultimoscambio=1;
   }
   }
  limite=ultimoscambio;
 }while(scambio>0);
}
int main(){
 int L;
 cout << "quanti numeri vuoi inserire? ";
 cin >> L;
 int vettore[L];
 srand(time(NULL));
 for(int i=0;i<L;i++){
	vettore[i]=(rand()%100)+0;
 }
 for(int i=0; i<L; i++) {
 	cout << vettore[i] << " ";
 }
 bublesort(vettore, L);
 cout << endl << "i numeri adesso sono ordinati:" << endl;
 for(int i=0;i<L;i++){
 cout << vettore[i] << " ";
 }
 return 0;
 }

