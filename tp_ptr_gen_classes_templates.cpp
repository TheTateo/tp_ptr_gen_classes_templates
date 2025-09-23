// tp_ptr_gen_classes_templates.cpp : Ce fichier contient la fonction 'main'. L'exécution du programme commence et se termine à cet endroit.
//

#include <iostream>
#include "Header.h"

using namespace std;

int main()
{
	Calculatrice<int> classObject_int(1, 2);
	Calculatrice<float> classObject_float(1, 2);
	Calculatrice<double> classObject_double(1, 2);

	cout << "objet int : " << endl;
	classObject_int.afficherResultats();

	cout << "objet float : " << endl;
	classObject_float.afficherResultats();

	cout << "objet int : " << endl;
	classObject_double.afficherResultats();
}