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
void selection_sort(int array[], int l) {
	int minimo=0, salva=0;
	for(int i=0; i<l-1; i++) {
		minimo=i;
		for(int a=i+1; a<l; a++) {
			if(array[a]<array[minimo]) {
				minimo=a;
				salva=array[minimo];
				array[minimo]=array[i];
				array[i]=salva;
			}
		}
	}
}
void mostra_2(int array[], int l) {
	cout << endl << "i numeri che sono stati inseriti, adesso sono ordinati in senso crescente:" << endl;
	for(int i=0; i<l; i++) {
		cout << array[i] << " ";
	}
}
int main() {
	int lunghezza=0;
	cout << "Dimmi quanti numeri vuoi che siano inseriti:" << endl;
	cin >> lunghezza;
	int vettore[lunghezza];
	caricamento(vettore, lunghezza);
	mostra_1(vettore, lunghezza);
	selection_sort(vettore, lunghezza);
	mostra_2(vettore, lunghezza);
	return 0;
}
