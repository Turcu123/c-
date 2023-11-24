#include <iostream>

using namespace std;

long long unsigned FactorialIterative(int n)
{
   long long unsigned fact = 1;
   for(int i=1; i<=n; i++)
        fact *= i;
   return fact;
}
long long unsigned FactorialRecursiv(int n)
{
   if (n<= 1) return 1;
   else return FactorialRecursiv(n-1) * n;

}
long long unsigned Permutari(int n)
{
    return FactorialIterative(n);
}
long long unsigned Aranjamente(int n, int m)
{
    // FactorialIterative(n)/FactorialIterative(n-m);
    long long unsigned p = 1;
    for(int i=n; i>n-m; i--){
        p *= i;
    }
    return p;
}
long long unsigned Combinari(int n, int m)
{
    long long unsigned p = 1, q = 1;
    for(int i=1; i<=m; i++){
        q *= i;
        p *= (n-i+1);
    }
    return p/q;
}
int main()
{
    int n = 10, m = 2;
   // cout << "Dati un numar pina la cat: ";
   // cin >> n;
    cout << "Elemente din combinatorica!" << endl;
    cout << "Pr. nr. 2 elaborat Turcu Victor" << endl;

    for (int j=0; j<=n; j++)
    {
    cout << j << "! = " << FactorialIterative(j) << endl;
    }
    cout << "Recursiv" << endl;
        for (int j=0; j<=n; j++)
    {
    cout << j << "! = " << FactorialRecursiv(j) << endl;
    }
    cout << "\n Permutari din " << n << " elemente : " << Permutari(n);
    cout << "\n Aranjamente din " << n << " elemente cite "<< m << " elemente : "<< Aranjamente(n,m);
    cout << "\n Combinari din " << n << " elemente cite "<< m << " elemente : "<< Combinari(n,m);

    return 0;
}
