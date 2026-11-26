// badge.cpp, Lucas THIENPONT, 25/11/2026, Mission. Tu programmes l'affichage du badge qu'on remet à un visiteur à l'accueil. Le travail est individuel et découpé en 4 niveaux : fais-les dans l'ordre, et ne passe au suivant que lorsque le précédent fonctionne. Le niveau 4 est un défi. Tu déposes deux fichiers .cpp avant la fin de la séance : badge.cpp et repare.cpp.

#include <iostream>

int main()
{
    // Haut du bage
    std::cout << "+----------------------------------+" << std::endl;
    std::cout << "|        BADGE VISITEUR            |" << std::endl;
    // Information
    std::cout << "+----------------------------------+" << std::endl;
    std::cout << "| Nom       : Lucas THIENPONT      |" << std::endl;
    std::cout << "| Formation : BTS CIEL 1           |" << std::endl;
    std::cout << "| Salle     : B12                  |" << std::endl;
    // Bas du bagde
    std::cout << "+----------------------------------+\n";
    return 0;
}
// les commandes de compilation que j'ai tapé est :
// en 1. d:
// en 2. cd D:\Clone\TP\TP_C++\TP évalué M0.1\badge\badge
// en 3. cl /EHsc badge.cpp
/* en 4. badge.exe
+----------------------------------+
|        BADGE VISITEUR            |
+----------------------------------+
| Nom       : Lucas THIENPONT      |
| Formation : BTS CIEL 1           |
| Salle     : B12                  |
+----------------------------------+
*/

