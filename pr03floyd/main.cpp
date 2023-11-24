#include <iostream>
#include <fstream>
#define NMAX 50
using namespace std;

int main()
{
    int n, m;
    int x[NMAX], y[NMAX];
    double c[NMAX];
    char nume[NMAX][21] = {"index","Briceni", "Drochia" , "Balti", "Orhei", "Chisinau","Cimislia"};
    ifstream fin("floydin.txt");
    fin >> n >> m;
    cout << "Floyd-ul meu are " << n << " virfuri si " << m << " arce .\n";
    for (int i=0; i<m ; i++)
    {
        fin >> x[i] >> y[i] >> c[i];
        cout << "(" << nume[x[i]] << ";" << nume[y[i]] << ") = "<< c[i] <<endl;
    }
    fin.close();
    return 0;
}
