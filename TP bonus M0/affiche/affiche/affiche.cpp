// But : Affiche à réaliser pour le Forum des Metiers.
// Auteur : Lucas THIENPONT
// Date : 25/11/2026
// Commande pour le compiler avec cl /EHsc : cl /EHsc affiche.cpp 
// Commande pour le lancer : affiche.exe
/*Aperçu du résultat attendu :
+--------------------------------------+
|        FORUM DES METIERS 2026        |
+--------------------------------------+
|                                      |
|            **._______.**             |
|            _____________             |
|           /             \            |
|           *   BTS CIEL  *            |
|           \_____________/            |
|            ..*_______*..             |
|                                      |
|  Reseaux - Programmation - Securite  |
|                                      |
+--------------------------------------+
*/

#include <iostream>

int main()
{
    std::cout << "+--------------------------------------+\n"
        << "|        FORUM DES METIERS 2026        |\n"
        << "+--------------------------------------+\n"
        << "|                                      |\n"
        << "|            **._______.**             |\n"
        << "|            _____________             |\n"
        << "|           /             \\            |\n"
        << "|           *   BTS CIEL  *            |\n"
        << "|           \\_____________/            |\n"
        << "|            ..*_______*..             |\n"
        << "|                                      |\n"
        << "|  Reseaux - Programmation - Securite  |\n"
        << "|                                      |\n"
        << "+--------------------------------------+\n";
return 0;
}
// La différence entre le std::endl et le \n c'est qu'il y en a pas, il permettre tout deux de retourner à la ligne c'est juste la syntaxe qui change.