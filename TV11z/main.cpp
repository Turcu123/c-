#include <iostream>

using namespace std;
long unsigned FactorialIterativ(int n)
{
    long  unsigned fct = 1;
    for(int i=1; i<=n; i++)
        fct *= i;
    return fct;
}
long  unsigned FactorialRecursiv(int n)
{
    if(n<=1)return 1;
    else return FactorialRecursiv(n-1)*n;
}

int main()
{
    int n = 7;
    cout<< "Dati un nr "; cin >>n;

    cout << "Pr.nr.2 , elaborat de Turcu Victor" << endl;
    cout << "Factorial interativ" << endl;
    for (int j=0; j<=n; j++){
    cout << j <<"!= " << FactorialIterativ(j) << endl;
    }

    cout<< "Dati un nr "; cin >>n;
    cout << "Facroeial recursiv" << endl;
    for (int j=0; j<=n; j++){
    cout << j <<"!= " << FactorialRecursiv(j) << endl;
    }
    return 0;
}
