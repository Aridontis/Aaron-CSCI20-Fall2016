//Created By: Aaron George
//Created On: 8/30/2016

#include <iostream>
#include <string>

using namespace std;

int main()
{
    string name;
    string weapname;
    string badname;
    int companions;
    string bodypart;
    string reward;
    
    //user input
    cout << "Please enter a name:" ;
    getline(cin, name);
    cout << endl;
    
    cout << "Please give the name of your weapon:" ;
    getline(cin, weapname);
    cout << endl;
    
    cout << "Please enter your enemy's name:";
    getline(cin, badname);
    cout << endl;
    
    cout << "Please enter a bodypart:";
    getline(cin, bodypart);
    cout << endl;

cout << "Please enter a plural noun:";
    getline(cin, reward);
    cout << endl;
    
    cout << "Please enter a number:";
    cin >> companions;
    cout << endl;
    
cout << name << " is a hero. Getting the great weapon " << weapname << "," << name << " set out on a quest to defeat the evil " << badname << "."; 
cout << " With " << companions << " companions following him, he enter the hall of doom, where he defeated the evil " << badname << ", by sticking " << weapname << " up into his " << bodypart << ".";
cout << "Thus vanquished," << name << " returned home where people gave him many " << reward <<".";

}