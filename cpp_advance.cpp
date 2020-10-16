
#include <iostream>

using namespace std;

int main()
{
//basic variables
    float a;
    char operador;
    float b;
    float suma = 0;
//extra variables for givin more "profesional"
//ayuda for a large text of help
    string ayuda = "        Primero ponga un numero y luego el operador: + de sumar, - de restar, x de multiplicar, / de dividr, luego ponga otro numero y listo";
    bool cerrar = true; // for closing the program
    char comando; // for do the comand of help and exit
    bool mostrar = true; // for showing the result or not

    string fraseFinal[] = { "suma" , "resta" , "multiplicacion" , "divicion" };
    int eligir = 0;
//calculator intro
    cout << "              Calculadora de c++, a+b o a/b eliga usted              " << endl;
    cout << ayuda << endl;
    while (cerrar) {
        mostrar = true;
        //comannd for exit the application
        cout << "Presiona e para salir o h para ayuda o si no quieres hacer nada de eso presione cualquier tecla" << endl;
        cin >> comando;
        if (comando == 'e') {
            cerrar = false;
            cout << " Haga una calculacion mas pls y me cierro lo prometo." << endl;
        }
        if (comando == 'h') {
            cout << ayuda << endl;
        }
//user input frist number
        cout << "Ponga su primero numero: " << endl;

        cin >> a;
        
        //now the user put the operator.including the second input number
        
        cout << "Ponga el operador: " << endl;
        cin >> operador;
        switch (operador) {
        case('+'): {
            cout << "Ahora el segundo numero: " << endl;
            cin >> b;
            suma = a + b;

            eligir = 0;
            break;
        }
        case('-'): {
            cout << "Ahora el segundo numero: " << endl;
            cin >> b;
            suma = a - b;

            eligir = 1;
            break;
        }
        case('x'): {
            cout << "Ahora el segundo numero: " << endl;
            cin >> b;
            suma = a * b;

            eligir = 2;
            break;
        }
        case('/'): {
            cout << "Ahora el segundo numero: " << endl;
            cin >> b;
            if (b == 0) {
                cout << "Porque demonios quieres calcular 0 ??!! Intenta otro numero" << endl;
                mostrar = false;
            }
            else {
                suma = a / b;

                eligir = 3;
            }
            break;
        } default: {
            cout << "error: no se encontro el caracter que pusiste" << endl;
            mostrar = false;
        }

//finally the calculator shows the result:
        }
        if (mostrar == true) {
            cout << "     la " << fraseFinal[eligir] << " es: " << suma << endl;
        }
    }
   
}
