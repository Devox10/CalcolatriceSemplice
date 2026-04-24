#include <iostream>
using namespace std;

// Dichiarazione Funzione Addizione

int addizione(int num1,int num2) {
	
	return num1 + num2;
	
}

// Dichiarazione Funzione Sottrazione

int sottrazione(int num1,int num2) {
	
	return num1 - num2;
	
}

// Dichiarazione Funzione Moltiplicazione

int moltiplicazione(int num1,int num2) {
	
	return num1 * num2;
	
}

// Dichiarazione Funzione Divisione

int divisione(int num1,int num2) {
	
	return num1 / num2;
	
}

// Funzione Principale(main)

int main() {
	
	// Dichiarazione variabili
	
	int num1;
	int num2;
	
	int opz;
	
	// Menu Principale
	
	cout << "Calcolatore" << endl;
	cout << "\nOpzioni disponibili:" << endl;
	
	cout << "\n1: Addizione";
	cout << "\n2: Sottrazione";
	cout << "\n3: Moltiplicazione";
	cout << "\n4: Divisione" << endl;
	
	cout << "\nInserisci opzione(1/4): ";
	cin >> opz;
	
	// Inserimento numeri
	
	cout << "\n\nInserisci il primo numero: ";
	cin >> num1;
	
	cout << "\nInserisci il secondo numero: ";
	cin >> num2;
	
	// Istruzione switch per scelta della funzione da utilizzare
	
	switch(opz) {
		
		case 1:
			
			cout << addizione(num1,num2);
			break;
			
		case 2:
			
			cout << sottrazione(num1,num2);
			break;
			
		case 3:
			
			cout << moltiplicazione(num1,num2);
			break;
			
		case 4:
			
			cout << divisione(num1,num2);
			break;
			
		default:
			
			cout << "\nAttenzione! opzione inserita non corretta, risultato non disponibile";
			
	}
}
