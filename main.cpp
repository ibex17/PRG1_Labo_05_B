/*
-------------------------------------------------------------------------------------------------
File name       :   main.cpp
Laboratory name :
Author(s)       :   Richard SIERRA, Anthony CHRISTEN
Creation date   :   08.11.21
Description     :   <What does this program do ?>
Remarks         :   <Is there a bug or something ?>
Compiler        :   Apple clang version 13.0.0 (clang-1300.0.29.3)
-------------------------------------------------------------------------------------------------
*/

#include <cstdlib>
#include <iostream>
#include <limits>

using namespace std;

int main() {


    //-------------------------------------------------------------------------------------------
    //  Constant
    //-------------------------------------------------------------------------------------------

    cout << "Test git | Anthony";


    //-------------------------------------------------------------------------------------------
    // Welcome message
    //-------------------------------------------------------------------------------------------

    cout << "bonjour blahblaa" << endl;




    //-------------------------------------------------------------------------------------------
    //  User input
    //-------------------------------------------------------------------------------------------

    int nbrLetters = 0;

    do {
        cout << "Combien de lettres voulez-vous générer ? : ";
        cin >> nbrLetters;
        if (cin.fail()) {
            cin.clear();
            cout << "message erreur";
        }
        if (nbrLetters<=0){
            cout<<"Il faut mettre une valeur positive";
        }
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    } while (nbrLetters <= 0);




    //-------------------------------------------------------------------------------------------
    //  Game
    //-------------------------------------------------------------------------------------------

    int score;

    do {
        for (int i = 0; i < nbrLetters; ++i) {

        }


    } while (true);


    //-------------------------------------------------------------------------------------------
    //  Display results
    //-------------------------------------------------------------------------------------------




    return EXIT_SUCCESS;
}
