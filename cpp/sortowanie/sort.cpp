#include <iostream>

using namespace std;

void sort(int liczby[10]){
	for(int i = 0; i < 9; i++){
		for(int j = 0; j < 9 - i; j++){
			if(liczby[j] > liczby[j+1]){
				swap(liczby[j], liczby[j+1]);
			}
		}
	}
}
