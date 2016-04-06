#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;
string nomJoueur1,nomJoueur2;
int nombreManche;
int pointJoueur1=0;
int pointJoueur2=0;
int manche;
int nouvelleManche;
int inM;
int choixMode;
int alea;
int partie;
char nouvellePartie;

int main()
{

int tabMmanche[nombreManche];
char choixJoueur1,choixJoueur2;
// On attribue un caractere a chaque lettre
char p;
p='p';
char f;
f='f';
char c;
c ='c';
char l;
l ='l';
char s;
s ='s';
// On attribue un caractere a "o"=oui et "n"=non pour savoir s'il veut recommencer une partie
char o;
o='o';
char n;
n='n';


// Presentation des regles du jeux
cout <<"Vous allez jouer a la version ""Big Bang Theory"" de pierre papier ciseau.";
cout << endl;
cout << endl;
cout << endl;
cout << endl;
cout << "Ciseau :c -> coupe la feuille et decapite le lezard.";
cout << endl;
cout << endl;
cout << "Feuille :f -> recouvre la pierre et discredite spock.";
cout << endl;
cout << endl;
cout << "Pierre :p -> ecrase le lezard et detruit le ciseau.";
cout << endl;
cout << endl;
cout << "Spock :s -> vaporise la pierre et casse le ciseau.";
cout << endl;
cout << endl;
cout <<"Lezard :l -> mange le papier et empoisonne spock.";
cout << endl;
cout << endl;
cout << endl;
cout << endl;
cout << "Il faudra taper la lettre correspondante a votre choix.";
cout << endl;
cout << endl;
cout << endl;
// Choix du mode de jeux, contre une personne ou l'ordinateur
cout << "Choisissez votre mode de jeux";
cout << endl;
cout << endl;
cout << "Mode 1 joueur: tapez 1"<<" "<<"|"<<" "<<"Mode 2 Joueur: tapez 2";
cin >> choixMode;
cout << endl;
// Boucle pour l'utilisateur ne tape que 1 ou 2 pour choisir son mode
while ((choixMode!=1) && (choixMode!=2)){
    cout << "Tapez 1 ou 2 pour choisir votre mode de jeu";
    cin >>choixMode;
}
// Modalité du jeux si le joueur joue contre l'ordianateur
if (choixMode==1){

// Initialisation du générateur à partir de l'heure courante
srand(time(NULL));
// Génération d'un nombre aléatoire compris entre 1 et 100
alea = rand()%100 + 1;

//Le choix du joueur 2 est attribué aléatoirement par le générateur de nombre
if (alea>0 && alea<21){
    choixJoueur2 =p;
}
else if (alea>20 && alea<41){
    choixJoueur2 =l;
}
else if (alea>40 && alea<61){
    choixJoueur2 =c;
}
else if (alea>60 && alea<81){
    choixJoueur2 =s;
}
else if (alea>80 && alea<101){
    choixJoueur2 =f;
}
//attribution du resultat de alea au choixJoueur2
choixJoueur2=alea;
//Demande prenom du joueur
cout << "Joueur 1 : Comment t'appelles-tu?";
cin >> nomJoueur1;
//le nom du PC
nomJoueur2="Paulo le PC";
cout <<" "<< endl;
cout << "Bienvenue"<<" "<<nomJoueur1<<"."<<" "<<"Tu vas jouer contre"<<" "<<nomJoueur2;
cout << endl;
cout << endl;
// On demande le nombre de partie jouer qui ne peut pas être un nombre négatif
    cout << "En combien de manches veux-tu effectuer cette partie:";
    cin >> nombreManche;
while(nombreManche<0){
    cout << "Saississez un nombre réel de manche SVP!";
    cin >> nombreManche;
    cout << endl;
//Résultat du nombre de manches voulus
    cout << "Tu veux effectuer cette partie en" <<" "<<nombreManche<<" "<<"manches.";

//On donne les différentes possibilités aux joueurs
    cout << "p: pierre  f: feuille  c: ciseaux  l: lezard et s: spock.";
    cout << endl;
    cout << endl;
    cout << "Il faudra tapez la lettre correspondante a votre choix.";
    cout << endl;
    cout << endl;
}
}

else if(choixMode==2){
        // On demande le nom des 2 joueurs
    cout << "Joueur 1 : Comment t'appelles-tu?";
    cin >> nomJoueur1;
    cout <<" "<< endl;

    cout << "Joueur 2 : Comment t'appelles-tu?";
    cin >> nomJoueur2;
        cout << endl;
    cout << endl;
    cout << endl;
    cout << "Bienvenues"<<" "<<nomJoueur1<<" "<<"et"<<" "<<nomJoueur2 <<"."<<" ";
    cout << endl;
    cout << endl;
// On demande le nombre de partie jouer qui ne peut être ni négatif ni impair
    cout << "En combien de manches voulez-vous effectuer cette partie:";
    cout << endl;
    cout << endl;
    cout << "Choisissez un nombre de manches SVP";
    cin >> nombreManche;
    cout << endl;

while(nombreManche<0){
        cout << "Saississez un nombre réel de manche SVP!";
        cin >> nombreManche;
    }
//Résultat du nombre de manches voulus
    cout << endl;
    cout << endl;
    cout << "Vous voulez effectuer cette partie en" <<" "<<nombreManche<<" "<<"manches."<<"                                ";
    cout << endl;
//On donne les différentes possibilités aux joueurs
    cout << "p: pierre  f: feuille  c: ciseaux  l: lezard et s: spock.";
    cout << endl;
    cout << endl;
    cout << "Il faudra tapez la lettre correspondante a votre choix.";
    cout << endl;
    cout << endl;
//La boucle pour permettant de repeter le nombre de partie

}
for (partie=0;partie<nombreManche;partie++){
//Le joueur 1 un effectue son choix
    cout << nomJoueur1<<" "<< "fais ton choix";
    cout << endl;
    cin >> choixJoueur1;
    cout << endl;
// Une bloucle tant que qui s'affiche tant que la proposition ne correspond pas à l'un des 5 caractères
    while ((choixJoueur1!=p)&&(choixJoueur1!=f)&&(choixJoueur1!=c)&&(choixJoueur1!=l)&&(choixJoueur1!=s)) {
    cout << "Fais ton choix parmi les propositions suivantes, p: pierre, f: feuille, c: ciseaux, l: lezard et s: spock.";
    cin >> choixJoueur1;
    }
if (choixMode==2){

//Le joueur 2 un effectue son choix
    cout << nomJoueur2<<" "<<"fais ton choix";
    cout << endl;
    cin >> choixJoueur2;
    cout << endl;
}
else if (choixMode==1){
    choixJoueur2=alea;
}


}

// Une bloucle tant que qui s'affiche tant que la proposition ne correspond pas à l'un des 5 caractères
    while ((choixJoueur2!=p) && (choixJoueur2!=f)&& (choixJoueur2!=c) && (choixJoueur2!=l) && (choixJoueur2!=s) ){
    cout << "Fais ton choix parmi les propositions suivantes, p: pierre, f: feuille, c: ciseaux, l: lezard et s: spock.";
    cin >> choixJoueur2;
    }

// Le ciseau coupe la feuille:
if ( choixJoueur1==c && choixJoueur2==f){
       (pointJoueur1 = pointJoueur1+1)  ;
       cout    <<endl;
     cout    <<endl;
        cout << "LE CISEAU COUPE LA FEUILLE";
}
else if ( choixJoueur2==c && choixJoueur1==f){
       (pointJoueur2 += pointJoueur2+1)  ;
       cout    <<endl;
     cout    <<endl;
        cout << "LE CISEAU COUPE LA FEUILLE";
}

if ( choixJoueur1==c && choixJoueur2==l){
       (pointJoueur1 = pointJoueur1+1)  ;
       cout    <<endl;
     cout    <<endl;
        cout << "LE CISEAU DECAPITE LA TETE DU LEZARD";
    }

else if ( choixJoueur1==l && choixJoueur2==c){
       (pointJoueur2 = pointJoueur2+1)  ;
       cout    <<endl;
     cout    <<endl;
        cout << "LE CISEAU DECAPITE LA TETE DU LEZARD";
    }
//La pierre detruit le ciseau :victoire joueur 1
if ( choixJoueur1==c && choixJoueur2==p){
        (pointJoueur1 = pointJoueur1+1);
        cout    <<endl;
     cout    <<endl;
        cout << "LA PIERRE DETRUIT LE CISEAU";
    }
//La pierre detruit le ciseau :victoire joueur 2
if ( choixJoueur2==c && choixJoueur1==p){
    (pointJoueur2 = pointJoueur2+1);
    cout    <<endl;
     cout    <<endl;
        cout << "LA PIERRE DETRUIT LE CISEAU";
    }
if ( choixJoueur2==p && choixJoueur1==l){
    (pointJoueur1 = pointJoueur1+1);
    cout    <<endl;
     cout    <<endl;
        cout << "LA PIERRE ECRASE LE LEZARD";
    }
if ( choixJoueur2==l && choixJoueur1==p){
    (pointJoueur2 = pointJoueur2+1);
    cout    <<endl;
     cout    <<endl;
        cout << "LA PIERRE ECRASE LE LEZARD";
    }
if ( choixJoueur1==c && choixJoueur2==s){
        (pointJoueur1 = pointJoueur1+1);
        cout    <<endl;
     cout    <<endl;
        cout << "SPOCK CASSE LE CISEAU";
    }
if ( choixJoueur1==s && choixJoueur2==c){
        (pointJoueur2 = pointJoueur2+1);
        cout    <<endl;
     cout    <<endl;
        cout << "SPOCK CASSE LE CISEAU";
    }
if ( choixJoueur1==f && choixJoueur2==p){
    (pointJoueur1 = pointJoueur1+1);
    cout    <<endl;
     cout    <<endl;
        cout << "LA FEUILLE RECOUVRE LA PIERRE";
    }
if ( choixJoueur1==p && choixJoueur2==f){
    (pointJoueur2 = pointJoueur2+1);
    cout    <<endl;
     cout    <<endl;
        cout << "LA FEUILLE RECOUVRE LA PIERRE";
    }
if ( choixJoueur1==f && choixJoueur2==s){
    (pointJoueur1 = pointJoueur1+1);
    cout    <<endl;
     cout    <<endl;
        cout << "LA FEUILLE DISCREDITE SPOCK";
    }
if ( choixJoueur1==s && choixJoueur2==f){
    (pointJoueur2 = pointJoueur2+1);
    cout    <<endl;
     cout    <<endl;
        cout << "LA FEUILLE DISCREDITE SPOCK";
    }
if ( choixJoueur1==s && choixJoueur2==p){
        (pointJoueur1 = pointJoueur1+1);
        cout    <<endl;
     cout    <<endl;
        cout << "SPOCK VAPORISE LA PIERRE";
    }
if ( choixJoueur1==p && choixJoueur2==s){
        (pointJoueur2 = pointJoueur2+1);
        cout    <<endl;
     cout    <<endl;
        cout << "SPOCK VAPORISE LA PIERRE";
    }
if ( choixJoueur1==l && choixJoueur2==s){
        (pointJoueur1 = pointJoueur1+1);
        cout    <<endl;
     cout    <<endl;
        cout << "LE LEZARD EMPOISONNE SPOCK";
    }
if ( choixJoueur1==s && choixJoueur2==l){
        (pointJoueur2 = pointJoueur2+1);
        cout << "LE LEZARD EMPOISONNE SPOCK";
    }
if ( choixJoueur1==l && choixJoueur2==f){
        (pointJoueur1 = pointJoueur1+1);
        cout    <<endl;
    cout    <<endl;
        cout << "LE LEZARD MANGE LA FEUILLE";
    }
if ( choixJoueur1==f && choixJoueur2==l){
        (pointJoueur2 = pointJoueur2+1);
        cout    <<endl;
    cout    <<endl;
        cout << "LE LEZARD MANGE LA FEUILLE";
    }
    cout    <<endl;
    cout    <<endl;
    cout    <<endl;
    cout    <<endl;
    cout << "RESULTAT DE LA MANCHE";
    cout    <<endl;
     cout    <<endl;
    cout << nomJoueur1 <<" "<< ":"<<" "<<choixJoueur1;
    cout    <<endl;
     cout    <<endl;
    cout << nomJoueur2 <<" "<<":"<<" "<<choixJoueur2;
    cout    <<endl;
     cout    <<endl;
    cout   <<"SCORES";
    cout    <<endl;
     cout    <<endl;
    cout <<nomJoueur1<< " "<< "|"<<pointJoueur1<< "-"<<pointJoueur2 <<"|"<<" "<<nomJoueur2;
      cout    <<endl;
     cout    <<endl;
     cout << "Manche"<<" "<<partie+1<<" "<<"terminee"<<" "<<"..."<<" "<<"("<<" "<<nombreManche << "manches gagnantes"<<" "<<")";
    cout    <<endl;
    cout    <<endl;
    cout    <<endl;
    cout    <<endl;
     cout << "p: pierre  f: feuille  c: ciseaux  l: lezard et s: spock.";
     cout    <<endl;
    cout    <<endl;
     if (pointJoueur1==pointJoueur2){
        nombreManche = nombreManche+1;
    }


    if(pointJoueur1>pointJoueur2){
        cout << nomJoueur1<<" "<<"est le VAINQUEUR: Bravo bebe.";
         cout    <<endl;
        cout << "Voulez-vous recommencer une partie? o = oui, n = non";
        cin >> nouvellePartie;
        if(nouvellePartie==o){
            cout <<"En combien de manches";
            cin >>nouvelleManche;
            partie = partie+nouvelleManche;
        }
        cout    <<endl;
        }
    else if (pointJoueur2>pointJoueur1){
        cout << nomJoueur2<<" "<<"est le VAINQUEUR: Bravo bebe.";
         cout    <<endl;
        cout << "Voulez-vous recommencer une partie? o = oui, n = non";
        cin >> nouvellePartie;
        cout    <<endl;
        cout    <<endl;
    cout    <<endl;
    }
    return 0;
}
