#ifndef SOMMET_H
#define SOMMET_H
#include <string>
#include <vector>
#include <unordered_map>
#include <unordered_set>

class Sommet
{
    public:
        Sommet(int,double,double);
        void ajouterVoisin(const Sommet*);
        void afficherData() const;
        void afficherVoisins() const;
        int getDegre() const;


  //      std::unordered_set<std::string> rechercherCC() const;

        ~Sommet();

    protected:

    private:
        std::vector<const Sommet*> m_voisins;
        int m_id;
        double m_x, m_y;

};

#endif // SOMMET_H
