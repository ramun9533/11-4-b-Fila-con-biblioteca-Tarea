#include <iostream>
#include <vector>
using namespace std;
const int CAPACITY = 8;

void insertElement(vector<double>& vec) {
    if (vec.size() >= CAPACITY) {
        cout << "Error: No se puede insertar más elementos. El vector está lleno." << endl;
        return;
    }

    double num;
    cout << "Ingrese el elemento a insertar: ";
    cin >> num;

    vec.push_back(num);
    cout << "Elemento insertado correctamente." << endl;
}

void removeElement(vector<double>& vec) {
    if (vec.empty()) {
        cout << "Error: No se puede eliminar ningún elemento. El vector está vacío." << endl;
        return;
    }

    vec.erase(vec.begin());
    cout << "Elemento eliminado correctamente." << endl;
}

void emptyVector(vector<double>& vec) {
    vec.clear();
    cout << "Vector vaciado correctamente." << endl;
}

void displayVector(const vector<double>& vec) {
    if (vec.empty()) {
        cout << "El vector está vacío." << endl;
        return;
    }

    cout << "Contenido del vector:" << endl;
    for (const auto& num : vec) {
        cout << num << " ";
    }
    cout << endl;
}

int main() {
    vector<double> vectorApellidoMaterno;
    int opcion;

    do {
        cout << "\nMenu de Manejo del Vector:\n";
        cout << "1. Insertar elemento\n";
        cout << "2. Eliminar elemento\n";
        cout << "3. Vaciar vector\n";
        cout << "4. Mostrar vector\n";
        cout << "5. Salir\n";
        cout << "Opción: ";
        cin >> opcion;

        switch (opcion) {
            case 1:
                insertElement(vectorApellidoMaterno);
                break;
            case 2:
                removeElement(vectorApellidoMaterno);
                break;
            case 3:
                emptyVector(vectorApellidoMaterno);
                break;
            case 4:
                displayVector(vectorApellidoMaterno);
                break;
            case 5:
                cout << "Saliendo del programa..." << endl;
                break;
            default:
                cout << "Opción inválida. Intente nuevamente." << endl;
        }
    } while (opcion != 5);

    return 0;
}
