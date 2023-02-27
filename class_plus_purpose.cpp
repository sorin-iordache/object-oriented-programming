#include <iostream>
#include <string>

using namespace std;

class Persoana {
private:
string nume;
int varsta;
string adresa;
public:
Persoana(string nume, int varsta, string adresa) {
this->nume = nume;
this->varsta = varsta;
this->adresa = adresa;
}
string getNume() {
return nume;
}
int getVarsta() {
return varsta;
}
string getAdresa() {
return adresa;
}
};
int main() {
Persoana persoana("Maria Popescu", 30, "Strada Victoriei nr. 20");
cout << "Nume: " << persoana.getNume() << endl;
cout << "Varsta: " << persoana.getVarsta() << endl;
cout << "Adresa: " << persoana.getAdresa() << endl;
return 0;
}
