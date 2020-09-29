#ifndef AVION_H_INCLUDED
#define AVION_H_INCLUDED



    #include <stdio.h>
    #include <iostream>
    #include <cstring>

    using namespace std; //permet de faciliter l'écriture en C++
    
    class Avion{
        private :
            char categorie[3];
            char immatriculation[7];
            float poids;
        public :
            Avion(float,const char[],const char[]);//constructeur
            ~Avion();
            void affichage();
         
        
        
         /*
    void change_poids(float pds)//permet de changer le poids de l'objet
    {
        poids = pds;
    }
    void change_immat(const char new_immat[])//permet de cahnger l'immatriculation de l'objet
    {
        strcpy(immatriculation,new_immat);
    }
    void change_type(const char new_type[])//permet de changer le type de l'objet
    {
        strcpy(categorie,new_type);
    }*/

    };






#endif // AVION_H_INCLUDED
