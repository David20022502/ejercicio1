#include <iostream>
#include <iomanip>
using namespace std;

int potencia(int x, int y);
double x;
int y;
int main()
{
    bool ingresa = false, ingresa1 = false;
    int opc, opc1, base, exponen;
    double t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12;
    cout << setprecision(2) << fixed;
    do
    {
        cout << "\tMENU\n";
        cout << "1. deposito" << endl;
        cout << "2. potencia de un numero" << endl;
        cout << "3. McDonalds" << endl;
        cout << "4. calzados BUNKY" << endl;
        cout << "5. salir" << endl;
        cout << "ingrese una opcion: " << endl;
        cin >> opc;
        switch (opc)
        {
        case 1:
        {
            do
            {
                cout << "\tAhorro juanito" << endl;
                cout << "1.depositar dinero" << endl;
                cout << "2.consultar dinero" << endl;
                cout << "3.atras" << endl;
                cout << "ingresa una opcion: " << endl;
                cin >> opc1;
                switch (opc1)
                {
                case 1:
                {


                    cout << "ingrese la cantidad a depositar para el mes de enero: ";
                    cin >> t1;
                    cout << "ingrese la cantidad a depositar para el mes de febrero: ";
                    cin >> t2;
                    cout << "ingrese la cantidad a depositar para el mes de marzo: ";
                    cin >> t3;
                    cout << "ingrese la cantidad a depositar para el mes de abril: ";
                    cin >> t4;
                    cout << "ingrese la cantidad a depositar para el mes de mayo: ";
                    cin >> t5;
                    cout << "ingrese la cantidad a depositar para el mes de junio: ";
                    cin >> t6;
                    cout << "ingrese la cantidad a depositar para el mes de julio: ";
                    cin >> t7;
                    cout << "ingrese la cantidad a depositar para el mes de agosto: ";
                    cin >> t8;
                    cout << "ingrese la cantidad a depositar para el mes de septiembre: ";
                    cin >> t9;
                    cout << "ingrese la cantidad a depositar para el mes de octubre: ";
                    cin >> t10;
                    cout << "ingrese la cantidad a depositar para el mes de noviembre: ";
                    cin >> t11;
                    cout << "ingrese la cantidad a depositar para el mes de diciembre: ";
                    cin >> t12;
                    system("pause");
                    break;
                }
                case 2:
                {
                    cout << "enero: " << t1 << endl;
                    cout << "febrero: " << t2 << endl;
                    cout << "marzo: " << t3 << endl;
                    cout << "abril: " << t4 << endl;
                    cout << "mayo: " << t5 << endl;
                    cout << "junio: " << t6 << endl;
                    cout << "julio: " << t7 << endl;
                    cout << "agosto: " << t8 << endl;
                    cout << "septiembre: " << t9 << endl;
                    cout << "octubre: " << t10 << endl;
                    cout << "noviembre: " << t11 << endl;
                    cout << "diciembre: " << t12 << endl;
                    cout << "su dinero total es: " << t1 + t2 + t3 + t4 + t5 + t6 + t7 + t8 + t9 + t10 + t11 + t12 << "$" << endl;
                    system("pause");
                    break;

                }
                case 3:
                {
                    ingresa1 = true;
                    break;
                }
                default:

                    cout << "opcion no valida" << endl;
                    system("pause");
                    break;
                }

            } while (ingresa1 == false);
            system("pause");
            break;

        }
        case 2:
        {
            cout << "ingresa la base: ";
            cin >> base;
            cout << "ingresa el exponente: ";
            cin >> exponen;
            int resul = potencia(base, exponen);
            cout << "el resultado es: " << resul << endl;
            system("pause");
            break;

        }
        case 3:
        {
            int tipo, num;
            double cargo = 0, total;
            string metodo;
            cout << "\tMENU" << endl;
            cout << "1. sencillas" << endl;
            cout << "2. dobles" << endl;
            cout << "3. triples" << endl;
            cout << "tipo de hamburguesa: ";
            cin >> tipo;
            cout << "numero de hamburguesas: ";
            cin >> num;
            cout << "metodo de pago tarjeta(t), gectivo(e): ";
            cin >> metodo;
            switch (tipo)
            {
            case 1:
            {
                total = num * 1.50;

                break;
            }
            case 2:
            {
                total = num * 2.50;
                break;
            }
            case 3:
            {
                total = num * 3.25;
                break;
            }
            default:
            {
                cout << "numeroinvalido" << endl;
                break;
            }
            }
            if (metodo == "t")
            {
                cargo = total * 5 / 100;
            }
            double total1 = total + cargo;
            cout << "el total a pagar es: " << total1 << endl;
            system("pause");
            break;



        }
        case 4:
        {
            double sueldo1, sueldo2;
            int categor;
            cout << "ingrese el sueldo del trabajador: ";
            cin >> sueldo1;
            cout << " CATEGORIA         SUELDO" << endl;
            cout << "    1                 10%" << endl;
            cout << "    2                 20%" << endl;
            cout << "    3                 30%" << endl;
            cout << "ingrese la categoria: ";
            cin >> categor;
            switch (categor)
            {
            case 1:
            {
                sueldo2 = sueldo1 * 10 / 100;
                break;
            }
            case 2:
            {
                sueldo2 = sueldo1 * 20 / 100;
                break;
            }
            case 3:
            {
                sueldo2 = sueldo1 * 50 / 100;
                break;
            }

            default:
                cout << "opcion no valido" << endl;
                break;
            }
            cout << "el sueldo inicial es: " << sueldo1 << endl;
            cout << "el sueldo total es: " << sueldo1 + sueldo2 << endl;
            system("pause");
            break;

        }
        case 5:
        {
            ingresa = true;
            break;
        }

        default:
        {
            cout << "valor ingresado invalido" << endl;
            break;
        }

        }

    } while (ingresa == false);
    return 0;
}


int potencia(int x, int y)
{
    double potenci;
    if (y == 0)
    {
        potenci = 1;
    }
    else
    {
        potenci = x * potencia(x, y - 1);
    }
    return potenci;

}






/*
#include <iostream>
using namespace std;
int main()
{
    bool ingresa = false;
    double t1, t2, t3, t4, t5, t6, t7, t8, t9, t10, t11, t12;
    int opc;
    do
    {
        system("cls");
        cout << "\tAhorro juanito" << endl;
        cout << "1.depositar dinero" << endl;
        cout << "2.consultar dinero" << endl;
        cout << "3.salir" << endl;
        cout << "ingresa una opcion: " << endl;
        cin >> opc;
        switch (opc)
        {
        case 1:
        {

            
            cout << "ingrese la cantidad a depositar para el mes de enero: " ;
            cin >> t1;
            cout << "ingrese la cantidad a depositar para el mes de febrero: " ;
            cin >> t2;
            cout << "ingrese la cantidad a depositar para el mes de marzo: " ;
            cin >> t3;
            cout << "ingrese la cantidad a depositar para el mes de abril: ";
            cin >> t4;
            cout << "ingrese la cantidad a depositar para el mes de mayo: " ;
            cin >> t5;
            cout << "ingrese la cantidad a depositar para el mes de junio: " ;
            cin >> t6;
            cout << "ingrese la cantidad a depositar para el mes de julio: " ;
            cin >> t7;
            cout << "ingrese la cantidad a depositar para el mes de agosto: " ;
            cin >> t8;
            cout << "ingrese la cantidad a depositar para el mes de septiembre: " ;
            cin >> t9;
            cout << "ingrese la cantidad a depositar para el mes de octubre: " ;
            cin >> t10;
            cout << "ingrese la cantidad a depositar para el mes de noviembre: " ;
            cin >> t11;
            cout << "ingrese la cantidad a depositar para el mes de diciembre: " ;
            cin >> t12;
            system("pause");
            break;
        }
        case 2:
        {
            cout << "enero: " << t1 << endl;
            cout << "febrero: " << t2 << endl;
            cout << "marzo: " << t3 << endl;
            cout << "abril: " << t4 << endl;
            cout << "mayo: " << t5 << endl;
            cout << "junio: " << t6 << endl;
            cout << "julio: " << t7 << endl;
            cout << "agosto: " << t8 << endl;
            cout << "septiembre: " << t9 << endl;        
            cout << "octubre: " << t10 << endl;
            cout << "noviembre: " << t11 << endl;
            cout << "diciembre: " << t12 << endl;
            cout << "su dinero total es: " << t1+t2+t3+t4+t5+t6+t7+t8+t9+t10+t11+t12 << "$" << endl;
            system("pause");
            break;

        }
        case 3:
        {
            ingresa = true;
            break;
        }
        default:
            cout << "opcion no valida" << endl;
            system("pause");
            break;
        }

    } while (ingresa == false);
    return 0;

}
*/
