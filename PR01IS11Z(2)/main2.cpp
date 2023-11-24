#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;
void Line(char lf, char ln, char md, char rt)
{
    int i;
    printf("%c", lf);
    for(i=1; i<=3; i++) printf("%c", ln); printf("%c", md);
    for(i=1; i<=7; i++) printf("%c", ln); printf("%c", rt);
    cout << endl;

}

int main()
{
    system("color F0");
    system("cls");
    cout << "Proiect Nr. 1, elaborat de TV!" << endl;
    cout << "Tema: Operastii cu multimi\n";
    cout << "\tNegatia:\n";
    Line(201, 205, 209, 187);
    printf("%c A %c not A %c\n", 186, 179, 186);
    Line(199, 196, 197, 182);
    for(int a=0; a<=1; a++)
        printf("%c %d %c %3d %3c\n", 186, a, 179, !a, 186);
    Line(200, 205, 207, 188);

    return 0;
}

