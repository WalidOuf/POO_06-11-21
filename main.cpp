#include <iostream>
#include "Banque.cpp"

using namespace std;
using namespace banque;

void main(){
    Compte cp = Compte(12453, "Walid", 1200);
    Compte dest = Compte(4723, "Mohamed", 300);

    cp.consulterSolde();

    cp.deposerArgent(1200);
    cp.consulterSolde();

    cout << cp.retirerArgent(1000);
    cp.consulterSolde();

    cout << cp.retirerArgent(2000);
    cp.consulterSolde();

    cp.transfererArgent(&dest, 500);
    cp.consulterSolde();
    dest.consulterSolde();

    cp.transfererArgent(&dest, 2400);
    cp.consulterSolde();
    dest.consulterSolde();
}