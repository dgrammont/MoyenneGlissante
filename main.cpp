#include <iostream>
#include "fonctions.h"


using namespace std;

int main()
{
    const int NB_ACQUIS = 10;
    float valeursBrute[NB_ACQUIS]={1,2,3,4 ,5 ,6,7,8,9,10};
    float valeursMoyennes[NB_ACQUIS-3];

    for (int i=0;i<NB_ACQUIS-3;i++)
    {
        valeursMoyennes[i]=(valeursBrute[i]+valeursBrute[i+1]+valeursBrute[i+2])/3;
    }
    AfficherTableau(valeursBrute,NB_ACQUIS);

    return 0;
}
