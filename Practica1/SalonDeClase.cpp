//Integrantes:
//  -Salinas Vilar María Luciana
//  -Marvin Poquechoque Gutierrez
//  -Isaac Joseph Vargas Oropeza
//  -Espinoza Virgo Diego Leytao
//  -Trujillo Zeballos Mauricio

//Nuestro codigo se basa en mostrar el nombre de un profesor y un estudiante
//En el codigo desarrollado llegamos a demostrar los siguientes puntos :


//Abstraccion:Hacemos uso de la abstraccion al hacer que objetos o personas
//reales tales como un alumno y un profesor puedan ser representados con sus nombres
//en base a que comparten algo en comun que es ser personas
#include <iostream>
#include <string>
using namespace std;

// Clase base
class Persona {
//Encapsulamiento: Usamos protected para que la variable ya 
//sea en este caso "nombre", solo pueda ser usada en la clase Persona
//pero a la vez pueda ser llamada por las clases hijas o heredadas
protected:
    string nombre;
public:
    Persona(string _nombre) : nombre(_nombre) {}
    void mostrar() const {
        cout << "Nombre: " << nombre << endl;
    }
};
//Herencia : La Herencia en el codigo es demostrada y usada
//en las clases(Estudiante y Profesor) ya que en dichas clases
//al llamar a la clase padre "Persona" heredan sus atributos

// Clase derivada
class Estudiante : public Persona {
public:
    Estudiante(string _nombre) : Persona(_nombre) {}
};

// Clase derivada
class Profesor : public Persona {
public:
    Profesor(string _nombre) : Persona(_nombre) {}
};

//Polimorfismo : El Polimorfismo se puede apreciar en la
//funcion principal (main) cuando llamamos a la clase Estudiante y Profesor
//para darle una valor a la variable de la clase padre "Persona"

int main() {
    Estudiante estudiante("Ana");
    Profesor profesor("Dr. Lopez");

    estudiante.mostrar();
    profesor.mostrar();

    return 0;
}