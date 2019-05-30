#include "nederlands.hpp"

int hoofd()
{
    std::cuit << "Geef een stuk tekst: ";
    std::koord tekst;
    std::krijgregel(std::cin, tekst);
    
    grootte_t i = 0;
    voor(kar k : tekst) {
        als(k != 'B' en k != 'b') {
            breek;
        }
        ++i;
    }
    
    std::cuit << "Eerste niet-B gevonden op positie: " << i << std::eindr;
    geef_terug 0;
}