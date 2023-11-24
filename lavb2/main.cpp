#include <iostream>
#include <stdio.h>
#include <cstdlib>
using namespace std;
void Line(char lf, char ln, char md, char rt, int nc = 2)
{
    int i;
    printf("%c", lf);
    for (int j=1; j<nc; j++) {
        for(i=1; i<=3; i++) printf("%c", ln);
        printf("%c", md);
    }
    for(i=1; i<=8; i++) printf("%c", ln); printf("%c", rt);
    cout << endl;
}
int main()
{
    int a, b;
    system("color F0");
    system("cls");
    cout << "Proiect Nr. 1, elaborat de Turcu Victor!" << endl;
    cout << "Tema: Operastii cu multimi\n";
    cout << "\tNegatia:\n";
    Line(201, 205, 209, 187);
    printf("%c A %c not A  %c\n", 186, 179, 186);
    Line(199, 196, 197, 182);
    for( a=0; a<=1; a++)
        printf("%c %d %c %3d %4c \n", 186, a, 179, !a, 186);
    Line(200, 205, 207, 188, 2);


    cout << "\tDisjunctia:\n";
    Line(201, 205, 209, 187, 3);
    printf("%c A %c B %c A or B %c\n", 186, 179 , 179 , 186);
    Line(199, 196, 197, 182, 3);
    for( a=0; a<=1; a++)
        for( b=0; b<=1; b++)
        printf("%c %d %c %d %c %3d %4c\n", 186, a, 179, b,179, a|b, 186);
    Line(200, 205, 207, 188, 3);

    cout << "\tConjunctia:\n";
    Line(201, 205, 209, 187, 3);
    printf("%c A %c B %c A and B%c\n", 186, 179 , 179 , 186);
    Line(199, 196, 197, 182, 3);
    for( a=0; a<=1; a++)
        for( b=0; b<=1; b++)
        printf("%c %d %c %d %c %3d %4c\n", 186, a, 179, b,179, a&b, 186);
    Line(200, 205, 207, 188, 3);

        cout << "\tDiferenta:\n";
        Line(201, 205, 209, 187, 3);
        printf("%c A %c B %c A - B %2c\n", 186, 179 , 179 , 186);
        Line(199, 196, 197, 182, 3);
        for( a=0; a<=1; a++)
            for( b=0; b<=1; b++)
            printf("%c %d %c %d %c %3d %4c\n", 186, a, 179, b,179, a&!b, 186);
        Line(200, 205, 207, 188, 3);

    cout << "\tDiferenta simetrica:\n";
    Line(201, 205, 209, 187, 3);
    printf("%c A %c B %c A %c B %2c\n", 186, 179 , 179 , 1 ,186);
    Line(199, 196, 197, 182, 3);
    for( a=0; a<=1; a++)
        for( b=0; b<=1; b++)
        printf("%c %d %c %d %c %3d %4c\n", 186, a, 179, b,179, a^b, 186);
    Line(200, 205, 207, 188, 3);

    return 0;
}
