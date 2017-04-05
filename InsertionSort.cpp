#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void caricamento(int array[], int l) {
	srand(time(NULL));
	for(int i=0; i<l; i++) {
		array[i]=(rand()%100)+0;
	}
}
void mostra_1(int array[], int l) {
	cout << "ecco i numeri che sono stati inseriti:" << endl;
	for(int i=0; i<l; i++) {
		cout << array[i] << " ";
	}
}
void insertion_sort(int array[], int l) {
	int salva=0, a=0;
	for(int i=0; i<l; i++) {
		a=i;
		while(i>0 && array[a]<array[a-1]) {
			salva=array[a];
			array[a]=array[a-1];
			array[a-1]=salva;
			a--;
		}
	}
}
void mostra_2(int array[], int l) {
	cout << endl << "i numeri inseriti, adesso sono ordinati:" << endl;
	for(int i=0; i<l; i++) {
		cout << array[i] << " ";
	}
}
int main() {
	int lunghezza=0;
	cout << "Dimmi quanti numeri voi che siano inseriti:" << endl;
	cin >> lunghezza;
	int vettore[lunghezza];
	caricamento(vettore, lunghezza);
	mostra_1(vettore, lunghezza);
	insertion_sort(vettore, lunghezza);
	mostra_2(vettore, lunghezza);
	return 0;
}
