#include <iostream>
#include <string>
using namespace std;

class Souris
{
  /*****************************************************
    Compléter le code à partir d'ici
  *******************************************************/
private:
       double poids;
       string couleur;
       unsigned int age ;
       unsigned int esperance_vie;
       bool clonee=false ;
   public:
    Souris(double poids,string couleur,unsigned int age=0, unsigned int esperance_vie=36):poids(poids),couleur(couleur),age(age),esperance_vie(esperance_vie)

        {
            cout<<"Une nouvelle souris !\n" ;
        }
    Souris(const Souris& other)
        {
            this->poids=other.poids ;
            this->couleur=other.couleur;
            this->age=other.age;
            this->clonee=true ;
            this->esperance_vie= (other.esperance_vie *4 ) /5 ;
            cout<<"Clonage d'une souris !\n" ;
        }
        ~Souris()
        {
            cout<<"Fin d'une souris..." ;
            cout<<"\n" ;
        }

        void afficher() const
{
cout << "Une souris " << couleur
     << (clonee ? " , clonee ," : "")
     << " de " << age << " mois"
     << " et pesant " << poids << " grammes" << endl;
}


       void vieillir()
{
    this->age += 1;
    if (this->clonee && this->age > (this->esperance_vie) / 2)
    {
        this->couleur = "verte";
    }
}

void evolue()
{
    while (this->age < this->esperance_vie)
    {
        this->vieillir();
    }
}

  /*******************************************
   * Ne rien modifier après cette ligne.
   *******************************************/

}; // fin de la classe Souris

int main()
{
  Souris s1(50.0, "blanche", 2);
  Souris s2(45.0, "grise");
  Souris s3(s2);
  // ... un tableau peut-être...
  s1.afficher();
  s2.afficher();
  s3.afficher();
  s1.evolue();
  s2.evolue();
  s3.evolue();
  s1.afficher();
  s2.afficher();
  s3.afficher();
  return 0;
}
