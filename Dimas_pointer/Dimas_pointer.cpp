#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim();	//deklarasi methode
};

void mahasiswa::showNim() {		//implementasi methode di luar class
	cout << "No Induk = " << nim << endl;
}

