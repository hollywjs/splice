#include <iostream>
#include "LinkedList.h"
#include "ArrayList.h"

using namespace std;

int main(){
	ArrayList l;

	l.pushFront(1.0);
	l.pushFront(2.0);
	l.pushFront(3.0);

	cout << "[";
	for(int i=0; l.at(i) != NULL; i++){
		if(i != 0) {
			cout << ", ";
		}
		cout << l.getData(l.at(i));
	}
	cout << "]" << endl;

	return 0;
}