#include <iostream>
#include <windows.h>

using namespace std;
int t[3][3];
int main (){
//WPROWADZENIE DO KÓ£KO I KRZY¯YK
cout << "Witaj w grze kolko i krzyzyk." << endl;
cout << "Autor: Jan Jakuszewicz" << endl;
cout << "Dla trybu singleplayer wcisnij 1, a dla trybu multiplayer wcisnij 2. Dla trybu specjalnego multiplayer wcisnij 3." << endl;
int single_multi;
cin >> single_multi;

//wyzeruj plansze
for (int i=0; i<3; i++){
    for (int j=0; j<3; j++){
        t[i][j]=0;
    }
}

//wyswietl plansze
        cout << "To jest plansza gry. By wykonac ruch i zajac pole, napisz indeksy wybranego pola." << endl;
        cout << "00 01 02"<<endl;
        cout << "10 11 12"<<endl;
        cout << "20 21 22"<<endl;

int ruchx1, ruchy1, ruchx2, ruchy2, licznik_ruchow=0;
//MULTIPLAYER
if (single_multi==2){
     while (true){
        cout << endl;

        //ruch gracza 1
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




        //ruch gracza 2
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
else if (single_multi==1){

    cout << "Witam w trybie singleplayer. Bedziesz kolkiem, a ja krzyzykiem." << endl;
    while (true){
        //ruch gracza

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
            cout << endl;
        if (t[0][0]==t[0][1] && t[0][1]==t[0][2] && t[0][2]==1  || t[0][0]==t[1][0] && t[1][0]==t[2][0] && t[2][0]==1  || t[1][0]==t[1][1] && t[1][1]==t[1][2] && t[1][2]==1 || t[2][0]==t[2][1] && t[2][1]==t[2][2] && t[2][2]==1 || t[0][1]==t[1][1] && t[1][1]==t[1][2] && t[1][2]==1 || t[0][2]==t[1][2] && t[1][2]==t[2][2] && t[2][2]==1 || t[0][0]==t[1][1] && t[1][1]==t[2][2] && t[2][2]==1 || t[0][2]==t[1][1] && t[1][1]==t[2][0] && t[2][0]==1){
            cout << "zwyciestwo gracza nr 1 (kolko)";
            break;
        }

        if (licznik_ruchow==9){
            cout << "Remis. Koniec gry.";
            break;
        }

        //ruch komputera
        //1 - wygraj
        //pion
        int czy_zagral_ruch=0;
        int win=0;
        if (t[0][0]==2 && t[1][0]==2 && t[2][0]==0){
            t[2][0]=2;
            cout << "zwyciestwo gracza nr 2 (krzyzyk)";
            win=1;
        }

        else if (t[0][0]==0 && t[1][0]==2 && t[2][0]==2){
            t[0][0]=2;
            cout << "zwyciestwo gracza nr 2 (krzyzyk)";
            win=1;
        }

        else if (t[0][0]==2 && t[1][0]==0 && t[2][0]==2){
            t[1][0]=2;
            cout << "zwyciestwo gracza nr 2 (krzyzyk)";
            win=1;

        }

        else if (t[0][1]==2 && t[1][1]==0 && t[2][1]==2){
            t[1][1]=2;
            cout << "zwyciestwo gracza nr 2 (krzyzyk)";
            win=1;
        }
        else if (t[0][1]==0 && t[1][1]==2 && t[2][1]==2){
            t[0][1]=2;
            cout << "zwyciestwo gracza nr 2 (krzyzyk)";
            win=1;
        }
        else if (t[0][1]==2 && t[1][1]==2 && t[2][1]==0){
            t[2][1]=2;
            cout << "zwyciestwo gracza nr 2 (krzyzyk)";
            win=1;
        }
        else if (t[0][2]==2 && t[1][2]==2 && t[2][2]==0){
            t[2][2]=2;
            cout << "zwyciestwo gracza nr 2 (krzyzyk)";
            win=1;
        }
        else if (t[0][2]==0 && t[1][2]==2 && t[2][2]==2){
            t[0][2]=2;
            cout << "zwyciestwo gracza nr 2 (krzyzyk)";
            win=1;
        }
        else if (t[0][2]==2 && t[1][2]==0 && t[2][2]==2){
            t[1][2]=2;
            cout << "zwyciestwo gracza nr 2 (krzyzyk)";
            win=1;
        }
        //poziom
        else if (t[0][0]==2 && t[0][1]==0 && t[0][2]==2){
            t[0][1]=2;
            cout << "zwyciestwo gracza nr 2 (krzyzyk)";
            win=1;
        }
        else if (t[0][0]==0 && t[0][1]==2 && t[0][2]==2){
            t[0][0]=2;
            cout << "zwyciestwo gracza nr 2 (krzyzyk)";
            win=1;
        }
        else if (t[0][0]==2 && t[0][1]==2 && t[0][2]==0){
            t[0][2]=2;
            cout << "zwyciestwo gracza nr 2 (krzyzyk)";
            win=1;
        }
        else if (t[1][0]==2 && t[1][1]==2 && t[1][2]==0){
            t[1][2]=2;
            cout << "zwyciestwo gracza nr 2 (krzyzyk)";
            win=1;
        }
        else if (t[1][0]==2 && t[1][1]==0 && t[1][2]==2){
            t[1][1]=2;
            cout << "zwyciestwo gracza nr 2 (krzyzyk)";
            win=1;
        }
        else if (t[1][0]==0 && t[1][1]==2 && t[1][2]==2){
            t[1][0]=2;
            cout << "zwyciestwo gracza nr 2 (krzyzyk)";
            win=1;
        }
        else if (t[2][0]==0 && t[2][1]==2 && t[2][2]==2){
            t[2][0]=2;
            cout << "zwyciestwo gracza nr 2 (krzyzyk)";
            win=1;
        }
        else if (t[2][0]==2 && t[2][1]==0 && t[2][2]==2){
            t[2][1]=2;
            cout << "zwyciestwo gracza nr 2 (krzyzyk)";
            win=1;
        }
        else if (t[2][0]==2 && t[2][1]==2 && t[2][2]==0){
            t[2][2]=2;
            cout << "zwyciestwo gracza nr 2 (krzyzyk)";
            win=1;
        }
        //przekatne
        else if (t[0][0]==2 && t[1][1]==2 && t[2][2]==0){
            t[2][2]=2;
            cout << "zwyciestwo gracza nr 2 (krzyzyk)";
            win=1;
        }
        else if (t[0][0]==2 && t[1][1]==0 && t[2][2]==2){
            t[1][1]=2;
            cout << "zwyciestwo gracza nr 2 (krzyzyk)";
            win=1;
        }
        else if (t[0][0]==0 && t[1][1]==2 && t[2][2]==2){
            t[0][0]=2;
            cout << "zwyciestwo gracza nr 2 (krzyzyk)";
            win=1;
        }
        else if (t[0][2]==2 && t[1][1]==0 && t[2][0]==2){
            t[1][1]=2;
            cout << "zwyciestwo gracza nr 2 (krzyzyk)";
            win=1;
        }
        else if (t[0][2]==0 && t[1][1]==2 && t[2][0]==2){
            t[0][2]=2;
            cout << "zwyciestwo gracza nr 2 (krzyzyk)";
            win=1;
        }
        else if (t[0][2]==2 && t[1][1]==2 && t[2][0]==0){
            t[2][0]=2;
            cout << "zwyciestwo gracza nr 2 (krzyzyk)";
            win=1;
        }
        //jesli wygral to koniec
        if (win==1){
        cout << endl;
        for (int i=0; i<3; i++){
            for (int j=0; j<3; j++){
                if (t[i][j]==0) cout << "_ ";
                else if (t[i][j]==1) cout << "O ";
                else cout << "X ";
            }
            cout << endl;
        }
        break;
        }



        //2 zablokuj wygran¹
if (czy_zagral_ruch!=1){
        if (t[0][0]==1 && t[1][0]==1 && t[2][0]==0){
            t[2][0]=2;
            czy_zagral_ruch=1;
        }

        else if (t[0][0]==0 && t[1][0]==1 && t[2][0]==1){
            t[0][0]=2;
            czy_zagral_ruch=1;
        }

        else if (t[0][0]==1 && t[1][0]==0 && t[2][0]==1){
            t[1][0]=2;
            czy_zagral_ruch=1;
        }

        else if (t[0][1]==1 && t[1][1]==0 && t[2][1]==1){
            t[1][1]=2;
            czy_zagral_ruch=1;
        }
        else if (t[0][1]==0 && t[1][1]==1 && t[2][1]==1){
            t[0][1]=2;
            czy_zagral_ruch=1;
        }
        else if (t[0][1]==1 && t[1][1]==1 && t[2][1]==0){
            t[2][1]=2;
            czy_zagral_ruch=1;
        }
        else if (t[0][2]==1 && t[1][2]==1 && t[2][2]==0){
            t[2][2]=2;
            czy_zagral_ruch=1;
        }
        else if (t[0][2]==0 && t[1][2]==1 && t[2][2]==1){
            t[0][2]=2;
            czy_zagral_ruch=1;
        }
        else if (t[0][2]==1 && t[1][2]==0 && t[2][2]==1){
            t[1][2]=2;
            czy_zagral_ruch=1;
        }
        //poziom
        else if (t[0][0]==1 && t[0][1]==0 && t[0][2]==1){
            t[0][1]=2;
            czy_zagral_ruch=1;
        }
        else if (t[0][0]==0 && t[0][1]==1 && t[0][2]==1){
            t[0][0]=2;
            czy_zagral_ruch=1;
        }
        else if (t[0][0]==1 && t[0][1]==1 && t[0][2]==0){
            t[0][2]=2;
            czy_zagral_ruch=1;
        }
        else if (t[1][0]==1 && t[1][1]==1 && t[1][2]==0){
            t[1][2]=2;
            czy_zagral_ruch=1;
        }
        else if (t[1][0]==1 && t[1][1]==0 && t[1][2]==1){
            t[1][1]=2;
            czy_zagral_ruch=1;
        }
        else if (t[1][0]==0 && t[1][1]==1 && t[1][2]==1){
            t[1][0]=2;
            czy_zagral_ruch=1;
        }
        else if (t[2][0]==0 && t[2][1]==1 && t[2][2]==1){
            t[2][0]=2;
            czy_zagral_ruch=1;
        }
        else if (t[2][0]==1 && t[2][1]==0 && t[2][2]==1){
            t[2][1]=2;
            czy_zagral_ruch=1;
        }
        else if (t[2][0]==1 && t[2][1]==1 && t[2][2]==0){
            t[2][2]=2;
            czy_zagral_ruch=1;
        }
        //przekatne
        else if (t[0][0]==1 && t[1][1]==1 && t[2][2]==0){
            t[2][2]=2;
            czy_zagral_ruch=1;
        }
        else if (t[0][0]==1 && t[1][1]==0 && t[2][2]==1){
            t[1][1]=2;
            czy_zagral_ruch=1;
        }
        else if (t[0][0]==0 && t[1][1]==1 && t[2][2]==1){
            t[0][0]=2;
            czy_zagral_ruch=1;
        }
        else if (t[0][2]==1 && t[1][1]==0 && t[2][0]==1){
            t[1][1]=2;
            czy_zagral_ruch=1;
        }
        else if (t[0][2]==0 && t[1][1]==1 && t[2][0]==1){
            t[0][2]=2;
            czy_zagral_ruch=1;
        }
        else if (t[0][2]==1 && t[1][1]==1 && t[2][0]==0){
            t[2][0]=2;
            czy_zagral_ruch=1;
        }

}


     //3.  ROZGA£ÊZIENIA

int dobre_linie=0;
     //dobra linia to taka gdzie nie ma kó³ka, jest krzyzyk i 2 puste pola
if (czy_zagral_ruch!=1){
     for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            dobre_linie=0;
            if (t[i][j]==0){
                //sprawdzam kolumnê
                int l_krzyz=0, l_kol=0;
                for (int k=0; k<3; k++){
                    if (t[k][j]==1){
                        l_kol++;
                        break;
                    }
                    if (t[k][j]==2) l_krzyz++;

                }
                if (l_kol==0 && l_krzyz>0) dobre_linie++;

                //sprawdzam wiersz
                l_krzyz=0, l_kol=0;
                for (int k=0; k<3; k++){
                    if (t[i][k]==1){
                        l_kol++;
                        break;
                    }
                    if (t[i][k]==2) l_krzyz++;

                }
                if (l_kol==0 && l_krzyz>0) dobre_linie++;

                //sprawdzam przekatne
                int przek=1;
                if (t[1][1]==1) przek=0;
                if (i==0 && j==0 && dobre_linie>0 && przek==1){
                    if (t[2][2]!=1 && (t[1][1]==2 || t[2][2]==2)){
                        dobre_linie++;
                    }
                }
                else if (i==2 && j==2 && dobre_linie>0 && przek==1){
                    if (t[0][0]!=1 && (t[1][1]==2 || t[0][0]==2)){
                        dobre_linie++;
                    }
                }
                else if (i==0 && j==2 && dobre_linie>0 && przek==1){
                    if (t[2][0]!=1 && (t[1][1]==2 || t[2][0]==2)){
                        dobre_linie++;
                    }
                }
                else if (i==2 && j==0 && dobre_linie>0 && przek==1){
                    if (t[0][2]!=1 && (t[1][1]==2 || t[0][2]==2)){
                        dobre_linie++;
                    }
                }
                else if (i==1 && j==1 && dobre_linie>0 && przek==1){
                    if (t[0][0]!=1 && t[2][2]!=1 && (t[0][0]==2||t[2][2]==2))
                        dobre_linie++;
                    }
                    if (t[0][2]!=1 && t[2][0]!=1 && (t[0][2]==2||t[2][0]==2))
                        dobre_linie++;
                    }
                if (dobre_linie>1 && czy_zagral_ruch!=0){
                    t[i][j]=2;
                    czy_zagral_ruch=1;
                }
                }


            }
}

 //4. blokowanie rozgalezien przeciwnika
     int zle_linie=0;
     //zla linia to taka gdzie 1 kolko i 2 puste pola i bez krzyzyka
if (czy_zagral_ruch!=1){
     for (int i=0; i<3; i++){
        for (int j=0; j<3; j++){
            zle_linie=0;
            if (t[i][j]==0){
                //sprawdzam kolumnê
                int l_krzyz=0, l_kol=0;
                for (int k=0; k<3; k++){
                    if (t[k][j]==2){
                        l_krzyz++;
                        break;
                    }
                    if (t[k][j]==1) l_kol++;

                }
                if (l_krzyz==0 && l_kol>0) zle_linie++;

                //sprawdzam wiersz
                l_krzyz=0, l_kol=0;
                for (int k=0; k<3; k++){
                    if (t[i][k]==2){
                        l_krzyz++;
                        break;
                    }
                    if (t[i][k]==1) l_kol++;

                }
                if (l_krzyz==0 && l_kol>0) zle_linie++;

                //sprawdzam przekatne
                int przek=1;
                if (t[1][1]==2) przek=0;
                if (i==0 && j==0 && zle_linie>0 && przek==1){
                    if (t[2][2]!=2 && (t[1][1]==1 || t[2][2]==1)){
                        zle_linie++;
                    }
                }
                else if (i==2 && j==2 && zle_linie>0 && przek==1){
                    if (t[0][0]!=2 && (t[1][1]==1 || t[0][0]==1)){
                        zle_linie++;
                    }
                }
                else if (i==0 && j==2 && zle_linie>0 && przek==1){
                    if (t[2][0]!=2 && (t[1][1]==1 || t[2][0]==1)){
                        zle_linie++;
                    }
                }
                else if (i==2 && j==0 && zle_linie>0 && przek==1){
                    if (t[0][2]!=2 && (t[1][1]==1 || t[0][2]==1)){
                        zle_linie++;
                    }
                }
                else if (i==1 && j==1 && zle_linie>0 && przek==1){
                    if (t[0][0]!=2 && t[2][2]!=2 && (t[0][0]==1||t[2][2]==1))
                        zle_linie++;
                    }
                    if (t[0][2]!=2 && t[2][0]!=2 && (t[0][2]==1||t[2][0]==1))
                        zle_linie++;
                    }
                if (zle_linie>1 && czy_zagral_ruch!=1){
                    t[i][j]=2;
                    czy_zagral_ruch=1;
                }
                }


            }

}




//5 zagraj srodek
            if (t[1][1]==0 && czy_zagral_ruch!=1){
                    t[1][1]=2;
                }



//6. przeciwny naroznik
            else if (t[0][0]==0 && t[2][2]==1 && czy_zagral_ruch!=1){
                t[0][0]=2;
            }
            else if (t[2][2]==0 && t[0][0]==1 && czy_zagral_ruch!=1){
                t[2][2]=2;
            }
            else if (t[2][0]==0 && t[0][2]==1 && czy_zagral_ruch!=1){
                t[2][0]=2;
            }
            else if (t[0][2]==0 && t[2][0]==1 && czy_zagral_ruch!=1){
                t[0][2]=2;
            }

//7. naroznik
            else if (t[0][0]==0 && czy_zagral_ruch!=1){
                t[0][0]=2;
            }
            else if (t[2][2]==0 && czy_zagral_ruch!=1){
                t[2][2]=2;
            }
            else if (t[0][2]==0 && czy_zagral_ruch!=1){
                t[0][2]=2;
            }
            else if (t[2][0]==0 && czy_zagral_ruch!=1){
                t[2][0]=2;
            }

 //8. bok
            else if (t[1][0]==0 && czy_zagral_ruch!=1){
                t[1][0]=2;
            }
            else if (t[0][1]==0 && czy_zagral_ruch!=1){
                t[0][1]=2;
            }
            else if (t[2][1]==0 && czy_zagral_ruch!=1){
                t[2][1]=2;
            }
            else if (czy_zagral_ruch!=1){
                t[1][2]=2;
            }
            licznik_ruchow++;


//wyswietl plansze po ruchu komputera
        for (int i=0; i<3; i++){
            for (int j=0; j<3; j++){
                if (t[i][j]==0) cout << "_ ";
                else if (t[i][j]==1) cout << "O ";
                else cout << "X ";
            }
            cout << endl;
        }
        cout << endl;
if (licznik_ruchow==9){
    cout << "Remis, koniec gry." << endl;
    break;
}
        }



}




//TRYB SPECJALNY MUTLIPLAYER Z EFEKTAMI DZWIEKOWYMI
else if (single_multi==3){
cout << "Ile gier chcesz zagrac?" << endl;
int liczba_gier, gracz1=0, gracz2=0, remisy=0;
cin >> liczba_gier;
int zero_zero=0, zero_jeden=0, zero_dwa=0, jeden_zero=0, jeden_jeden=0, jeden_dwa=0, dwa_zero=0, dwa_jeden=0, dwa_dwa=0; //do dŸwiêków
     for (int n=0; n<liczba_gier; n++){
            //wyzeruj plansze
            for (int i=0; i<3; i++){
                for (int j=0; j<3; j++){
                    t[i][j]=0;
                }
            }

            //wyswietl plansze
            cout << endl << "To jest plansza gry. By wykonac ruch i zajac pole, napisz indeksy wybranego pola." << endl;
            cout << "00 01 02"<<endl;
            cout << "10 11 12"<<endl;
            cout << "20 21 22"<<endl;



        while (true){
        //ruch gracza 1
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
            PlaySound(TEXT("audio_tomek_ty_smieciu.wav"), NULL, SND_FILENAME | SND_SYNC);
            gracz1++;
            break;
        }

        if (licznik_ruchow==9){
            cout << "Remis. Koniec gry.";
            remisy++;
            PlaySound(TEXT("audio_adam1.wav"), NULL, SND_FILENAME | SND_SYNC);
            break;
        }

        //dodatkowe efekty do gracza 1
        if (t[0][0]==1 && zero_zero==0){
            PlaySound(TEXT("audio_barka.wav"), NULL, SND_FILENAME | SND_ASYNC);
            zero_zero++;
        }
        if (t[0][1]==1 && zero_jeden==0){
            PlaySound(TEXT("audio_adam2.wav"), NULL, SND_FILENAME | SND_ASYNC);
            zero_jeden++;
        }
        if (t[0][2]==1 && zero_dwa==0){
            PlaySound(TEXT("audio_adam3.wav"), NULL, SND_FILENAME | SND_ASYNC);
            zero_dwa++;
        }
        if (t[1][0]==1 && jeden_zero==0){
            PlaySound(TEXT("audio_chryzantemy.wav"), NULL, SND_FILENAME | SND_ASYNC);
            jeden_zero++;
        }
        if (t[1][1]==1 && jeden_jeden==0){
            PlaySound(TEXT("audio_tomek_izrael.wav"), NULL, SND_FILENAME | SND_ASYNC);
            jeden_jeden++;
        }
        if (t[1][2]==1 && jeden_dwa==0){
            PlaySound(TEXT("audio_tomek_matki.wav"), NULL, SND_FILENAME | SND_ASYNC);
            jeden_dwa++;
        }
        if (t[2][0]==1 && dwa_zero==0){
            PlaySound(TEXT("audio_jude.wav"), NULL, SND_FILENAME | SND_ASYNC);
            dwa_zero++;
        }
        if (t[2][1]==1 && dwa_jeden==0){
            PlaySound(TEXT("audio_tomek_matki.wav"), NULL, SND_FILENAME | SND_ASYNC);
            dwa_jeden++;
        }
        if (t[2][2]==1 && dwa_dwa==0){
            PlaySound(TEXT("audio_tomek_ty_smieciu.wav"), NULL, SND_FILENAME | SND_ASYNC);
            dwa_dwa++;
        }


        //ruch gracza 2
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
            PlaySound(TEXT("audio_antczak_kebs.wav"), NULL, SND_FILENAME | SND_ASYNC);
            gracz2++;
            break;

        }

        if (licznik_ruchow==9){
            cout << "Remis. Koniec gry.";
            remisy++;
            PlaySound(TEXT("audio_adam1.wav"), NULL, SND_FILENAME | SND_SYNC);
            break;
        }

        //dodatkowe efekty gracza 2
        if (t[0][0]==2 && zero_zero==0){
            PlaySound(TEXT("audio_barka.wav"), NULL, SND_FILENAME | SND_ASYNC);
            zero_zero++;
        }
        if (t[0][1]==2 && zero_jeden==0){
            PlaySound(TEXT("audio_adam2.wav"), NULL, SND_FILENAME | SND_ASYNC);
            zero_jeden++;
        }
        if (t[0][2]==2 && zero_dwa==0){
            PlaySound(TEXT("audio_adam3.wav"), NULL, SND_FILENAME | SND_ASYNC);
            zero_dwa++;
        }
        if (t[1][0]==2 && jeden_zero==0){
            PlaySound(TEXT("audio_chryzantemy.wav"), NULL, SND_FILENAME | SND_ASYNC);
            jeden_zero++;
        }
        if (t[1][1]==2 && jeden_jeden==0){
            PlaySound(TEXT("audio_antczak_typie.wav"), NULL, SND_FILENAME | SND_ASYNC);
            jeden_jeden++;
        }
        if (t[1][2]==2 && jeden_dwa==0){
            PlaySound(TEXT("audio_antczak_kebs.wav"), NULL, SND_FILENAME | SND_ASYNC);
            jeden_dwa++;
        }
        if (t[2][0]==2 && dwa_zero==0){
            PlaySound(TEXT("audio_jude.wav"), NULL, SND_FILENAME | SND_ASYNC);
            dwa_zero++;
        }
        if (t[2][1]==2 && dwa_jeden==0){
            PlaySound(TEXT("audio_antczak_prokrastynacja.wav"), NULL, SND_FILENAME | SND_ASYNC);
            dwa_jeden++;
        }
        if (t[2][2]==2 && dwa_dwa==0){
            PlaySound(TEXT("audio_antczak_typie.wav"), NULL, SND_FILENAME | SND_ASYNC);
            dwa_dwa++;
        }
        }




     }

     //wyniki gry
     cout << endl;
     cout << "gracz 1 " << gracz1 << endl;
     cout << "gracz 2 " << gracz2 << endl;
     cout << "remisow " << remisy << endl;
    PlaySound(TEXT("audio_barka.wav"), NULL, SND_FILENAME | SND_SYNC);



}


}









