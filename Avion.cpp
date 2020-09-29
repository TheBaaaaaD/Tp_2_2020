#include "Avion.h"

    Avion::Avion(float pds, char const new_immat[], char const new_type[])//constructeur
    {
        this->poids = pds;
        strcpy(this->immatriculation,new_immat);
        strcpy(this->categorie,new_type);
             
    }
        
    void Avion::affichage(void)
    {
        cout<<"L'avion pese "<<poids<<" kg, son immatriculation est : "<<immatriculation<<" et il est de type : "<<categorie<<endl;
    }
    Avion::~Avion(void)
    {
        cout<<"L'objet a ete detruit !"<<endl;
    }
