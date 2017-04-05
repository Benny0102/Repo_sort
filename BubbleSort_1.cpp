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
void bubble_sort(int array[], int l) {
	for(int i=0; i<l-1; i++) {
		for(int a=0; a<l-i; a++) {
			if(array[a]>array[a+1]) {
				swap(array[a], array[a+1]);
			}
		}
	}
}
void mostra_2(int array[], int l) {
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
	bubble_sort(vettore, lunghezza);
	cout << endl << "i numeri che sono stati inseriti, adesso sono ordinati in ordine crescente:" << endl;
	mostra_2(vettore, lunghezza);
	return 0;
}
