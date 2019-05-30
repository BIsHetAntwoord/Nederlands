#include "nederlands.hpp"

klasse A {
    publiek:
        virtueel ongetekend lang lang functie(ongetekend lang lang a, ongetekend kort b) {
            geef_terug a + b;
        }
        
        virtueel ~A() = standaard;
};

klasse B : publiek A {
    prive:
        dubbel factor;
    publiek:
        B(dubbel x) : factor(x) {}
        
        virtueel ongetekend lang lang functie(ongetekend lang lang a, ongetekend kort b) {
            geef_terug dit->factor * a + b;
        }
        
        leegte ruim_op() {
            verwijder dit;
        }
        
        virtueel ~B() = standaard;
};

int hoofd()
{
    A a;
    B* b = nieuw B(2.5f);
    
    A* c = &a;
    
    std::cuit << "Instantie door a: " << c->functie(2, 3) << std::eindr;
    
    c = b;
    std::cuit << "Instantie door b: " << c->functie(2, 3) << std::eindr;
    
    b->ruim_op();
    
    geef_terug 0;
}