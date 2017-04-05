#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;
void bubble_sort(int array[], int l) {
	int ultimo_scambio, sup=l-1;
	while(sup!=0) {
		ultimo_scambio=0;
		for(int i=0; i<sup; i++) {
			if(array[i]>array[i+1])  {
				swap(array[i], array[i+1]);
				ultimo_scambio=i;
			}
		}
		sup=ultimo_scambio;
	}
}
int main() {
	int lunghezza=0;
	cout << "inserisci la lunghezza:" << endl;
	cin >> lunghezza;
	int vettore[lunghezza];
	srand(time(NULL));
	for(int i=0; i<lunghezza; i++) {
		vettore[i]=(rand()%100)+0;
	}
	for(int i=0; i<lunghezza; i++) {
		cout << vettore[i] << " ";
	}
	bubble_sort(vettore, lunghezza);
	cout << endl;
	for(int i=0; i<lunghezza; i++) {
		cout << vettore[i] << " ";
	}
	return 0;
}
