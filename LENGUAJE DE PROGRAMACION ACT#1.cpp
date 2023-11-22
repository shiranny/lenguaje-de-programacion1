/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <iostream>// organiza codigos en grupos
#include <stdio.h>/******ingresa un valor edad, y que determine si es mayor de edad o menor de edad.
 mostrando en la pantalla con la leyenda , eres mayor de edad o eres menor de edad.
*****/
int main () //aqui es donde se empieza a ejecutar el programa ya que nos prmite introducir el primer valor de la variable.
{
    int edad = 0; // Declara una variable para guardar la edad
// ingrese la edad del ususario
 std::cout << "ingrese su edad: "; //cout nos permite indicarle al ususario que se tiene que realizar 
 std::cin >> edad; //aqui tenemos que ingresar el valor por medio de teclado
    // Verificar si la edad es mayor o igual a 18
    if (edad >= 18) //if es la condicional que nos indicara si el valor ingresado nos indica que el usuario es mayor de edad 
    {
        std::cout << "Eres mayor de edad." << std::endl;
    } else //else es la condicional que nos indicara si el valor ingresado por el usuario nos indica si es menor de edad 
    {
        std::cout << "Eres menor de edad." << std::endl;
    }

    return 0;
}
