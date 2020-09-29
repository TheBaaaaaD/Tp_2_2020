/******************************************************************************
Nom : Tp_c++_20200925
Création : 25/09/20
Os : Windows 10
Compilateur : onlineGDB.com
Auteur : Thibault De Cort
Usgae :Révision_C++
*******************************************************************************/
#include "Avion.h"


int main()
{
    
    Avion *avionLc1 = new Avion(40003,"C4-M4R","Lc");
    Avion *avionMc1 = new Avion(12500,"CL4P-","MC");
    
    avionLc1->affichage();
    avionMc1->affichage();

    delete avionLc1;
    delete avionMc1;
    
    avionLc1->affichage();
    avionMc1->affichage();    
    
    return 0;
}
