#include "fonctions.h"
#include <iostream>
using namespace std;
void AfficherTableau(float Donnees[], int nbElements)
{
    cout <<nbElements ;
    for(int i=0;i<nbElements;i++)
    {
        cout<<Donnees[i]<<endl;;
    }
}
