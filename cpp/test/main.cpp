#include <iostream>

using namespace std;

// wczytujemy do tablicy 3 wartości z klawiatury i szukamy maksymalnej

int main(){
	int tab[3];
	for (int i = 0; i < 3; i++){
		cout<<"Padaj liczbę "<<i + 1<<endl;
		cin>>tab[i];
	}
	int max = 0;
	for (int i = 1; i < 3; i++){
		if (tab[i] > tab[max]){
			max = i;
		}
	}
	cout<<"Maksymalne jest "<<tab[max]<<endl;
	return 0;
}
