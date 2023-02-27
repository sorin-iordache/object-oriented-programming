#include <iostream>
#include <string>

using namespace std;

int main() {
string nume;
int varsta;
cout << "Introduceti numele persoanei: ";
getline(cin, nume);
cout << "Introduceti varsta persoanei: ";
cin >> varsta;
cout << "Numele persoanei este: " << nume << endl;
cout << "Varsta persoanei este: " << varsta << endl;
return 0;
}
