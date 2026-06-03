#include <iostream>
using namespace std;
int t[3][3];
int main (){
//WPROWADZENIE DO KÓ£KO I KRZY¯YK
cout << "Witaj w grze kolko i krzyzyk." << endl;
cout << "Jan Jakuszewicz" << endl;
cout << "Dla singleplayer wcisnij 1, dla multiplayer wcisnij 2" << endl;
int single_multi;
cin >> single_multi;

//wyzeruj plansze
for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
        t[i][j]==0;
    }
}

//wyswietl plansze
cout << "To jest plansza gry. By wykonac ruch i zajac pole, napisz indeksy pola." << endl;
        cout << "00 01 02"<<endl;
        cout << "10 11 12"<<endl;
        cout << "20 21 22"<<endl;

//MULTIPLAYER
int ruchx1, ruchy1, ruchx2, ruchy2, licznik_ruchow=0;
if (single_multi==2){
     while (true){
        cout << endl;
        cin >> ruchx1 >> ruchy1;

        if (t[ruchx1][ruchy1]==0){
            t[ruchx1][ruchy1]=1;
            licznik_ruchow++;
        }
        for (int i=0; i<3; i++){
            for (int j=0; j<3; j++){
                if (t[i][j]==0) cout << "_ ";
                else if (t[i][j]==1) cout << "O ";
                else cout << "X ";
            }
            cout << endl;
        }
        if (t[0][0]==t[0][1] && t[0][1]==t[0][2] && t[0][2]==1  || t[0][0]==t[1][0] && t[1][0]==t[2][0] && t[2][0]==1  || t[1][0]==t[1][1] && t[1][1]==t[1][2] && t[1][2]==1 || t[2][0]==t[2][1] && t[2][1]==t[2][2] && t[2][2]==1 || t[0][1]==t[1][1] && t[1][1]==t[1][2] && t[1][2]==1 || t[0][2]==t[1][2] && t[1][2]==t[2][2] && t[2][2]==1 || t[0][0]==t[1][1] && t[1][1]==t[2][2] && t[2][2]==1 || t[0][2]==t[1][1] && t[1][1]==t[2][0] && t[2][0]==1){
            cout << "zwyciestwo gracza nr 1 (kolko)";
            break;
        }

        if (licznik_ruchow==9){
            cout << "Remis. Koniec gry.";
            break;
        }
        cout << endl;
        cin >> ruchx2 >> ruchy2;
        if (t[ruchx2][ruchy2]==0){
            t[ruchx2][ruchy2]=2;
            licznik_ruchow++;
        }
        for (int i=0; i<3; i++){
            for (int j=0; j<3; j++){
                if (t[i][j]==0) cout << "_ ";
                else if (t[i][j]==1) cout << "O ";
                else cout << "X ";
            }
            cout << endl;
        }

        if (t[0][0]==t[0][1] && t[0][1]==t[0][2] && t[0][2]==2  || t[0][0]==t[1][0] && t[1][0]==t[2][0] && t[2][0]==2  || t[1][0]==t[1][1] && t[1][1]==t[1][2] && t[1][2]==2 || t[2][0]==t[2][1] && t[2][1]==t[2][2] && t[2][2]==2 || t[0][1]==t[1][1] && t[1][1]==t[1][2] && t[1][2]==2 || t[0][2]==t[1][2] && t[1][2]==t[2][2] && t[2][2]==2 || t[0][0]==t[1][1] && t[1][1]==t[2][2] && t[2][2]==2 || t[0][2]==t[1][1] && t[1][1]==t[2][0] && t[2][0]==2){
            cout << "zwyciestwo gracza nr 2 (krzyzyk)";
            break;

        }

        if (licznik_ruchow==9){
            cout << "Remis. Koniec gry.";
            break;
        }





     }


}


//SINGLEPLAYER
}
