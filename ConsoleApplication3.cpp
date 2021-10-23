

#include <iostream>
using namespace std;
int main()
{
   // int liczba;
    float a, b,c,d;
    cout << "Nr albumu 66056\n";
    cout << "Podaj dwie liczby a i b \n";
    cin >> a;
    cin >> b;
    int kalk;
    float wynik = 0;
    cout << "1 - dodawanie\n";
    cout << "2 - odejmowanie\n";
    cout << "3 - mnozenie\n";
    cout << "4 - dzielenie\n";
    cin >> kalk;
    switch (kalk)
    {
    case 1:
        wynik = a + b;
        cout << "Wynik dodawania :" << wynik;
        break;
      case 2:
          wynik = a - b;
          cout << "Wynik odejmowania :" << wynik;
          break;
  case 3:
      wynik = a * b;
      cout << "Wynik mnozenia :" << wynik;
      break;
      case 4:
          if (b == 0) {
              cout << "Nie dzielimy przez zero\n";
          }
          else {
              wynik = a / b;
              cout << "Wynik dzielenia :" << wynik;
             
          }
          break;
      default:
       
              cout << "Podaj poprawne dane\n";
          
         break;

}
   
 /*  cout << "Podaj liczbe:\n";
    cin >> liczba;
    if (liczba % 2 == 0) {
        cout << "Podana liczba jest parzysta\n";
    }
    else {
        cout << "Podaba liczba jest niepaszysta\n";
    }*/
 
 /*cout << "podaj a,b,c,d\n";
    cin >> a;
    cin >> b;
    cin >> c;
    cin >> d;
    cout << (a + b + c + d) / 4;
    */
   
  /*  if (a > b) {
        cout << "Liczba a jest wieksza od b\n";
    }
    else {
        cout << "Liczba b jest wieksza od a\n";
    }
    */
}

