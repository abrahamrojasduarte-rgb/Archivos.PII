#include <iostream>
#include <fstream>
#include <sstream>

using namespace std;
int EjercicioUno();
int EjercicioDos();


int main() {
    int o = EjercicioUno();
    cout<<o<<endl;

    return 0;
}
int  EjercicioUno() {
    ofstream salida("numerado.txt");
    ifstream entrada("datos.txt");
    if (!entrada) {
        cout<<"Erro no alocacion memoria"<<endl;
        return -1;
    }else {
        cout<<"Archivo abierto \n";
    }
    string linea;
    int n=1;

    while (getline(entrada, linea)) {
        salida<<n++<<"- . -"<<linea<<"\n";
    }
    entrada.close();
    salida.close();
    cout<<"Archivo numerado genera \n";
    return 1;
}
int EjercicioDos() {
    ifstream f("numeros.txt");
    int suma=0;
    if (!f) {
        cout<<"Erro no alocacion memoria";
        return -1;
    }
    int count=0;//contador para las iteraciones
    double x;//variable temporal que lee cada entrada del archivo
    while (f>>x) {//mienttras se lea un numero siga
        suma+=x;
        x++;
        count++;
    }
    if (f.eof()) {
        cout<<"Se leyo correctamente \n";
    }
    if (f.fail() && !f.eof()) {
        cout<<"Error de lectura \n";
    }
    f.close();
    if (count > 0) {
        cout<<"Promedio " <<suma/count<<"\n";
    }

}