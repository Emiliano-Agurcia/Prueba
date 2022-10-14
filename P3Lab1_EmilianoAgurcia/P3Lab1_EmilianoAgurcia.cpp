// P3Lab1_EmilianoAgurcia.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

int main()
{
    int resp;

    cout << "1) Error Numerico\n";
    cout << "2) Division de  Entradas\n";
    cout << "Ingrese la opcion: ";
    cin >> resp;
    cout << "\n";

    if (resp == 1)
    {
        int X;
        int N;
        int S = 0;

        cout << "Ingrese un numero : ";
        cin >> N;

        if (N == 0) 
        {
            cout << "Evite ingresar 0";
        }
        else
        {
            X = 1 / N;

            for (size_t i = 0; i < N; i++)
            {
                S += X;
            }

            if (S != 1.0)
            {

            }
            else
            {

            }

            cout << "\nUsando Double:\n";
            cout << "E: " << N;

            cout << "\nUsando Float:\n";

            cout << "\nUsando Long Double:\n";
        }
    }
    else if(resp == 2)
    {
        int P;
        int A;
        int B;
        int M;

        cout << "Ingrese P: ";
        cin >> P;

        cout << "Ingrese A: ";
        cin >> A;

        cout << "Ingrese B: ";
        cin >> B;

        M = A/B + A/P;

        cout << "M = " << M;

    }
    else
    {
        cout << "Opcion Incorrecta";
    }

    /*
    float X = 1.0 / (float)N;
    float S = 0;
    if (S < 0)
    {
        S *= -1;
        cout S;
    }

    return 0;
    */
    
}
    

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
