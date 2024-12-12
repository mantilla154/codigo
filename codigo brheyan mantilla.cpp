#include <iostream> 
using namespace std; 

int main() {
    int opcion;  
    double total = 0;  

    while(opcion!=8) {
        cout << "Bienvenido a la Papeleria!" << endl;
        cout << "1. Comprar lapiz - $1.00" << endl;
        cout << "2. Comprar cuaderno - $2.50" << endl;
        cout << "3. Comprar borrador - $0.50" << endl;
        cout << "4. compara hojas de block - 5.000" << endl;
        cout << "5. comprar lapicero - 12.00" << endl;
        cout << "6. comprar cartulina - 3.000" << endl;
        cout << "7. Ver total" << endl;
        cout << "8. Salir" << endl;
        cout << "Elija una opcion: ";
        cin >> opcion;

        if (opcion == 1) {
            total += 1.000; 
            cout << "Ha comprado un lapiz." << endl;
        }
        else if (opcion == 2) {
            total += 2.500;  
            cout << "Ha comprado un cuaderno." << endl;
        }
        else if (opcion == 3) {
            total += 5.00;  
            cout << "Ha comprado un borrador." << endl;    
        }
        else if (opcion == 4) {
        	total += 5.000;
        	cout << "Ha comprado unas hojas block" << endl;
        }
        else if (opcion == 5) {
        	total += 12.00;
        	cout << "Ha comprado un lapicero" << endl;
        }
		else if (opcion == 6) {
			total += 3.000;
			cout << "Ha comprado una cartulina" << endl;
		}	
        else if (opcion == 7) {
            cout << "El total de su compra es: $" << total << endl; 
        }
        else if (opcion == 8) {
            cout << "Gracias por su compra!" << endl;
            break; 
        }
        else {
            cout << "Opcion no valida, por favor intente nuevamente." << endl;  
        }
    }

    return 0; 
}
