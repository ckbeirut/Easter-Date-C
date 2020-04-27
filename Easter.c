#include <stdio.h>
#include <string.h>

int main()
{
    int AN;
    int G,I,J,C,H,L, JourPaque, MoisPaque;
    char MP[12];

    for (I=0; I<36;I++)
	printf ("*");
	printf ("\n");

    printf ( "* Enter Year to find Easter Date   *\n");
    printf ("\t\t");
    scanf ("%d", &AN);
    printf ("\n");

    G = AN % 19;
    C = AN / 100;
    H = (C - C / 4 - (8 * C + 13) / 25 + 19 * G + 15) % 30;
    I = H - (H / 28) * (1 - (H / 28) * (29 / (H + 1)) * ((21 - G) / 11));
    J = (AN + AN / 4 + I + 2 - C + C / 4) % 7;

    L = I - J;
    MoisPaque = 3 + (L + 40) / 44;
    JourPaque = L + 28 - 31 * (MoisPaque / 4);

    switch (MoisPaque) {
        case 1:
            strcpy (MP,"January");
        break;
        case 2:
            strcpy (MP,"February");
        break;
        case 3:
            strcpy (MP,"March");
        break;
        case 4:
            strcpy (MP,"April");
        break;
        case 5:
            strcpy (MP,"May");
        break;
        case 6:
            strcpy (MP,"June");
        break;
        case 7:
            strcpy (MP,"July");
        break;
        case 8:
            strcpy (MP,"August");
        break;
        case 9:
            strcpy (MP,"September");
        break;
        case 10:
            strcpy (MP,"October");
        break;
        case 11:
            strcpy (MP,"November");
        break;
        case 12:
            strcpy (MP,"December");
        break;
    }

    for (I=0; I<36;I++)
	printf ("*");
	printf ("\n");
	
    printf ("* If falls on Sunday %d %s %d *\n",JourPaque, MP,AN);
    for (I=0; I<36;I++)
                printf ("*");
	printf ("\n");
    printf ("Press Any Key To Continue....\n");
    getch();

    return 0;
}