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
    for (j=0; j<3; j++){
        t[i][j]==0;
    }
}

//wyswietl plansze
        cout << "00 01 02"<<endl;
        cout << "10 11 12"<<endl;
        cout << "20 21 22"<<endl;

//MULTIPLAYER
int ruchx1, ruchy1, ruchx2, ruchy2;
if (single_multi==2){
     while (true){
        if (t[0][0]==t[0][1] && t[0][1]==t[0][2] && t[0][2]==1  || t[0][0]==t[1][0] && t[1][0]==t[2][0] && t[2][0]==1  || t[1][0]==t[1][1] && t[1][1]==t[1][2] && t[1][2]==1 || t[2][0]==t[2][1] && t[2][1]==t[2][2] && t[2][2]==1 || t[0][1]==t[1][1] && t[1][1]==t[1][2] && t[1][2]==1 || t[0][2]==t[1][2] && t[1][2]==t[2][2] && t[2][2]==1 || t[0][0]==t[1][1] && t[1][1]==t[2][2] && t[2][2]==1 || t[0][2]==t[1][1] && t[1][1]==t[2][0] && t[2][0]==1){
            cout << "zwyciestwo gracza nr 1 (kolko)";
            break;
        }


        cin >> ruchx1, ruchy1;
        if (t[ruchx1][ruchy1]==0){
            t[ruchx1][ruchy1]==1;
        }










     }


}


//SINGLEPLAYER
}
