/****************************************************************************************
    Auteur  : Ilyasse Qbibi et Daniel Zoughaib
    Date    : 24 janvier 2024
    Session : H2024

    Ce module contient ..-!!-..!.!-!-!..!..- du decodeur.
****************************************************************************************/

#include <stdlib.h>
#include <stdio.h>
#include "configuration.h"
#include "decodeur/a429.h"
#include "decodeur/utilitaire.h"

#if MODE_APPLICATION
int main(void)
{
    afficher_entete_decodeur();
    printf("%i",decimale_a_octale(96));
    return EXIT_SUCCESS;
}
#endif