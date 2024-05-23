#include <iostream>

enum Wahl {
    SCHERE,
    STEIN,
    PAPIER
};

int main()
{
    bool isRunning = true;
    int winCounter = 0;
    int looseCounter = 0;

    while(isRunning){

        int spielerWahl;
        int computerWahl;

        std::cout << "Wähle eine Option (0 - Schere | 1 - Stein | 2 - Papier): ";
        std::cin >> spielerWahl;


        computerWahl = static_cast<Wahl>(arc4random() % 3);

        if(computerWahl == 0){
            std::cout << "Der Computer wählte: Schere! " << std::endl;
        }else if(computerWahl == 1){
            std::cout << "Der Computer wählte: Stein! " << std::endl;
        }else if(computerWahl == 2){
            std::cout << "Der Computer wählte: Papier! " << std::endl;
        }

        // if(spielerWahl == computerWahl){
        //     std::cout << "Unentschieden!" << std::endl;
        // }

        if(spielerWahl == SCHERE){
            if(computerWahl == SCHERE){
                std::cout << "Unentschieden!" << std::endl;
            }else if(computerWahl == STEIN){
                looseCounter++;
                std::cout << "Du hast verloren!" << std::endl;
                std::cout <<"##-Aktueller Stand-##  Gewonnen: " << winCounter << ", Verloren: " << looseCounter << std::endl << std::endl;
            }else if(computerWahl == PAPIER){
                winCounter++;
                std::cout << "Du hast gewonnen!" << std::endl;
                std::cout <<"##-Aktueller Stand-##  Gewonnen: " << winCounter << ", Verloren: " << looseCounter << std::endl << std::endl;
            }

        }else if(spielerWahl == STEIN){
            if(computerWahl == STEIN){
                std::cout << "Unentschieden!" << std::endl;
            }else if(computerWahl == PAPIER){
                looseCounter++;
                std::cout << "Du hast verloren!" << std::endl;
                std::cout <<"##-Aktueller Stand-##  Gewonnen: " << winCounter << ", Verloren: " << looseCounter << std::endl << std::endl;
            }else if(computerWahl == SCHERE){
                winCounter++;
                std::cout << "Du hast gewonnen!" << std::endl;
                std::cout <<"##-Aktueller Stand-##  Gewonnen: " << winCounter << ", Verloren: " << looseCounter << std::endl << std::endl;
            }

        }else if(spielerWahl == PAPIER){
            if(computerWahl == PAPIER){
                std::cout << "Unentschieden!" << std::endl;
            }else if(computerWahl == SCHERE){
                looseCounter++;
                std::cout << "Du hast verloren!" << std::endl;
                std::cout <<"##-Aktueller Stand-##  Gewonnen: " << winCounter << ", Verloren: " << looseCounter << std::endl << std::endl;
            }else if(computerWahl == STEIN){
                winCounter++;
                std::cout << "Du hast gewonnen!" << std::endl;
                std::cout <<"##-Aktueller Stand-##  Gewonnen: " << winCounter << ", Verloren: " << looseCounter << std::endl << std::endl;
            }
        }else{
            std::cout << "Ungültige Eingabe!" << std::endl;
        }
    }

    return 0;
}
