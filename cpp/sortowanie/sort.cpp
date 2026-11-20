#include <iostream>

using namespace std;

void sort(int list[10]){
	for(int i = 0; i < 10; i++){
		for(int j; j < 10 - i; j++){
			if(list[j] > list[j+1]){
				swap(list[j], list[j+1]);
			}
		}
	}
}
