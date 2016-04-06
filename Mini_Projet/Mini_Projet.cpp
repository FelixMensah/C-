#include <iostream>
#include <string>

using namespace std;
string nomJoueur1,nomJoueur2;
int nombreManche;
char p,f,c,l,s;

int main()
{
    cout << "Joueur1 : Comment t'appelles-tu?";
    cin >> nomJoueur1;

    cout << "Joueur2 : Comment t'appelles-tu?";
    cin >> nomJoueur2;

    cout << "Bienvenue"<<" "<<nomJoueur1<<" "<<"et"<<" "<<nomJoueur2 <<"."<<" ";

    cout << "En combien de manche voulez-vous effectuer cette partie: choisissez un nombre impair de manches SVP";
    cin >> nombreManche;

    while(nombreManche % 2==0){
        cout << "Saississez un nombre pair de manche SVP!";
        cin >> nombreManche;
    }

    cout << "Vous voulez effectuer cette partie en" <<" "<<nombreManche<<" "<<"manches"<<endl;
    return 0;
}
