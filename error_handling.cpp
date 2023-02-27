#include <iostream>
#include <stdexcept>

using namespace std;

int main() {
int a, b, result;
try {
cout << "Introduceti primul numar: ";
cin >> a;
cout << "Introduceti al doilea numar: ";
cin >> b;
if (b == 0) {
  throw runtime_error("Impartirea la 0 nu este permisa!");
}
result = a / b;
cout << "Rezultatul impartirii este: " << result << endl;
}
catch (const exception& e) {
cerr << "Eroare: " << e.what() << endl;
}
return 0;
}
