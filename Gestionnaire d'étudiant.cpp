#include <string>
#include <vector>
#include <iostream>

class Etudiant {
private:
    std::string nom;
    std::string prenom;
    string numeroEtudiant;
    std::vector<float> notes; 

public:

    Etudiant(std::string n, std::string p, string num) : nom(n), prenom(p), numeroEtudiant(num) {}


    void ajouterNote(float note) { notes.push_back(note); }

    void afficherInfos() const {
        std::cout << "Nom : " << nom << std::endl;
        std::cout << "Prénom : " << prenom << std::endl;
        std::cout << "Numéro étudiant : " << numeroEtudiant << std::endl;
        std::cout << "Notes : ";
        for (float note : notes) {
            std::cout << note << " ";
        }
        std::cout << std::endl;
    }


    std::string getNom() const { return nom; }
    std::string getPrenom() const { return prenom; }
    int getNumeroEtudiant() const { return numeroEtudiant; }
    std::vector<float> getNotes() const {return notes;}


}
