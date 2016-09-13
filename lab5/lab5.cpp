//Created By: Aaron George
//Created On: 9/9/2016

#include <iostream>
#include <string>

using namespace std;

struct Monster {
    string name;
    string head;
    string eyes;
    string ears;
    string nose;
    string mouth;
};

int main () {
    Monster Freaky;
    
    cout << "Name your monster:" ;
    cin >> Freaky.name;
    cout << endl;
    
    cout << "Head: Zombus, Franken or Happy?" ;
    cin >> Freaky.head;
    cout << endl;
    
    cout << "Eyes: Vegitas, Wackus, Spritem or none?" ;
    cin >> Freaky.eyes;
    cout << endl;
    
    cout << "Ears: Vegitas, Wackus, Spritem or none?" ;
    cin >> Freaky.ears;
    cout << endl;
    
    cout << "Nose: Vegitas, Wackus, Spritem or none?" ;
    cin >> Freaky.nose;
    cout << endl;
    
    cout << "Mouth: Vegitas, Wackus, Spritem or none?" ;
    cin >> Freaky.mouth;
    cout << endl;
    
    cout << Freaky.name << ":"
         << Freaky.head << ","
         << Freaky.eyes << ","
         << Freaky.ears << ","
         << Freaky.nose << ","
         << Freaky.mouth << endl;
         
}
