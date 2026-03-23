#include <iostream>
#include <fstream>
#include <sstream>
#include <pstl/utils.h>

using namespace std;

int main() {
    int opcion = 0;

    ofstream salida("numerado.txt");
    ifstream entrada("datos.txt");
    if (!entrada) {
        cout<<"Erro no alocacion memoria"<<endl;
        return -1;
    }
    string linea;
    int n=1;

    while (getline(entrada, linea)) {
        salida<<n++<<"."<<linea<<"\n";
    }


    return 0;
}