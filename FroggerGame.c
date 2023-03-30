/*
BİSMİLLAHİRRAHMANİRRAHİM
Demirhan Adıgüzel
Frogger Game
*/
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

//x y
int saha[80][23] = { 0 };
int BlokY[9];
int BlokX[9];
int Blok2Y[9];
int Blok2X[9];
int Blok3Y[9];
int Blok3X[9];
int Blok4Y[9];
int Blok4X[9];
int Blok5Y[9];
int Blok5X[9];

int Blok6Y[9];
int Blok6X[9];
int Blok7Y[9];
int Blok7X[9];
int Blok8Y[9];
int Blok8X[9];
int Blok9Y[9];
int Blok9X[9];
int Blok10Y[9];
int Blok10X[9];

int Blok11Y[9];
int Blok11X[9];
int Blok12Y[9];
int Blok12X[9];
int Blok13Y[9];
int Blok13X[9];
int Blok14Y[9];
int Blok14X[9];
int Blok15Y[9];
int Blok15X[9];

int Blok16Y[9];
int Blok16X[9];
int Blok17Y[9];
int Blok17X[9];
int Blok18Y[9];
int Blok18X[9];
int Blok19Y[9];
int Blok19X[9];
int Blok20Y[9];
int Blok20X[9];

int Blok21Y[9];
int Blok21X[9];
int Blok22Y[9];
int Blok22X[9];
int Blok23Y[9];
int Blok23X[9];
int Blok24Y[9];
int Blok24X[9];
int Blok25Y[9];
int Blok25X[9];

int Blok26Y[9];
int Blok26X[9];
int Blok27Y[9];
int Blok27X[9];
int Blok28Y[9];
int Blok28X[9];
int Blok29Y[9];
int Blok29X[9];
int Blok30Y[9];
int Blok30X[9];

int Blok31Y[9];
int Blok31X[9];
int Blok32Y[9];
int Blok32X[9];
int Blok33Y[9];
int Blok33X[9];
int Blok34Y[9];
int Blok34X[9];
int Blok35Y[9];
int Blok35X[9];

//bu fonksiyon ekranın herhangi bir konumuna gitmemize yarar
void gotoxy(short x, short y) {
    HANDLE hConsoleOutput;
    COORD Cursor_Pos = { x - 1, y - 1 };

    hConsoleOutput = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleCursorPosition(hConsoleOutput, Cursor_Pos);
}
//bu fonksiyonda yazdıracağımız çerçevenin kenarlarına belirli sayılar atayarak yazdırma 
//fonksiyonunda uygun bir çerçeve tipini rahatlıkla belirlememiz için
void cerceve(int x1, int y1, int x2, int y2, int kenar_tipi)
{
    int i;
    for (i = x1; i <= x2; i++)
    {
        if (15 < i && i < 21)
        {
            saha[i][y1 + 1] = kenar_tipi;
            saha[i][y1 + 2] = kenar_tipi;
        }
        else if (36 < i && i < 42)
        {
            saha[i][y1 + 1] = kenar_tipi;
            saha[i][y1 + 2] = kenar_tipi;
        }
        else if (57 < i && i < 63)
        {
            saha[i][y1 + 1] = kenar_tipi;
            saha[i][y1 + 2] = kenar_tipi;
        }


    }
    for (i = x1; i <= x2; i++)
    {
        saha[i][y1] = kenar_tipi;

        saha[i][y2] = kenar_tipi;

    }
    for (i = y1; i <= y2; i++)
    {
        saha[x1][i] = kenar_tipi;

        saha[x2][i] = kenar_tipi;

    }
}
void ekrani_bas()
{
    system("cls");//ekranı temizlemeye yarar
    int x, y;
    for (x = 0; x < 80; x++)
    {


        for (y = 0; y < 23; y++)
        {
            gotoxy(x + 1, y + 1);
            if (saha[x][y] == 1)
            {
                printf("%c", 219);
            }

            else if (saha[x][y] == 2)//cerceve fonksiyonunda atadığımız fonksiyonlara ascii tablosundan değerler atıyoruz
            {
                printf("%c", 177);
            }
            else if (saha[x][y] == 3) {
                printf("%c", 88);
            }
            else if (saha[x][y] == 4) {
                printf("%c", 176);
            }
            else if (saha[x][y] == 5) {
                printf("%c", 32);
            }
            else if (saha[x][y] == 6) {
                printf("%c", 178);
            }

        }
    }
}
void oyun()
{
    cerceve(0, 0, 79, 22, 1);
    ekrani_bas();
    int puan = 0;
    int blokkonumu_x = 2, blokkonumu_y = 18;
    int blok2konumu_x = 17, blok2konumu_y = 18;
    int blok3konumu_x = 32, blok3konumu_y = 18;
    int blok4konumu_x = 47, blok4konumu_y = 18;
    int blok5konumu_x = 62, blok5konumu_y = 18;

    int blok6konumu_x = 63, blok6konumu_y = 15;
    int blok7konumu_x = 48, blok7konumu_y = 15;
    int blok8konumu_x = 35, blok8konumu_y = 15;
    int blok9konumu_x = 19, blok9konumu_y = 15;
    int blok10konumu_x = 3, blok10konumu_y = 15;

    int blok11konumu_x = 2, blok11konumu_y = 12;
    int blok12konumu_x = 17, blok12konumu_y = 12;
    int blok13konumu_x = 32, blok13konumu_y = 12;
    int blok14konumu_x = 47, blok14konumu_y = 12;
    int blok15konumu_x = 62, blok15konumu_y = 12;

    int blok16konumu_x = 63, blok16konumu_y = 11;
    int blok17konumu_x = 48, blok17konumu_y = 11;
    int blok18konumu_x = 35, blok18konumu_y = 11;
    int blok19konumu_x = 19, blok19konumu_y = 11;
    int blok20konumu_x = 3, blok20konumu_y = 11;

    int blok21konumu_x = 2, blok21konumu_y = 8;
    int blok22konumu_x = 17, blok22konumu_y = 8;
    int blok23konumu_x = 32, blok23konumu_y = 8;
    int blok24konumu_x = 47, blok24konumu_y = 8;
    int blok25konumu_x = 62, blok25konumu_y = 8;

    int blok26konumu_x = 63, blok26konumu_y = 7;
    int blok27konumu_x = 48, blok27konumu_y = 7;
    int blok28konumu_x = 35, blok28konumu_y = 7;
    int blok29konumu_x = 19, blok29konumu_y = 7;
    int blok30konumu_x = 3, blok30konumu_y = 7;

    int blok31konumu_x = 2, blok31konumu_y = 6;
    int blok32konumu_x = 17, blok32konumu_y = 6;
    int blok33konumu_x = 32, blok33konumu_y = 6;
    int blok34konumu_x = 47, blok34konumu_y = 6;
    int blok35konumu_x = 62, blok35konumu_y = 6;

    int oyuncu_konumu_x = 37, oyuncu_konumu_y = 20;

    int ilerletme_x = 0, ilerletme_y = 0;
    int ilerletme_eksix = 0, ilerletme_eksiy = 0;
    int oyuncu_ilerletme_x = 0, oyuncu_ilerletme_y = 0;
    unsigned char tus;
    int Dongu_Degeri = 1;
    int i;
    int blok_uzunlugu = 7;
    int oyun_hızı = 100;
    gotoxy(3, 3); printf(" Puan:%d", puan);
    do
    {
        if (_kbhit())
        {
            tus = _getch();
            if (tus == 224)
            {
                tus = _getch();
                switch (tus)
                {
                case 72:oyuncu_konumu_y--; oyuncu_ilerletme_x = 0;
                    break;
                case 80:oyuncu_konumu_y++; oyuncu_ilerletme_x = 0;
                    break;
                case 77: oyuncu_ilerletme_x = +1; oyuncu_ilerletme_y = 0;
                    break;
                case 75: oyuncu_ilerletme_x = -1; oyuncu_ilerletme_y = 0;
                }
            }
        }
        ilerletme_x = +1; ilerletme_y = 0;
        ilerletme_eksix = -1; ilerletme_eksiy = 0;

        oyuncu_konumu_x = oyuncu_konumu_x + oyuncu_ilerletme_x, oyuncu_konumu_y = oyuncu_konumu_y + oyuncu_ilerletme_y;
        blokkonumu_x = blokkonumu_x + ilerletme_x;
        blok2konumu_x = blok2konumu_x + ilerletme_x;
        blok3konumu_x = blok3konumu_x + ilerletme_x;
        blok4konumu_x = blok4konumu_x + ilerletme_x;
        blok5konumu_x = blok5konumu_x + ilerletme_x;
        blok6konumu_x = blok6konumu_x + ilerletme_eksix;
        blok7konumu_x = blok7konumu_x + ilerletme_eksix;
        blok8konumu_x = blok8konumu_x + ilerletme_eksix;
        blok9konumu_x = blok9konumu_x + ilerletme_eksix;
        blok10konumu_x = blok10konumu_x + ilerletme_eksix;
        blok11konumu_x = blok11konumu_x + ilerletme_x;
        blok12konumu_x = blok12konumu_x + ilerletme_x;
        blok13konumu_x = blok13konumu_x + ilerletme_x;
        blok14konumu_x = blok14konumu_x + ilerletme_x;
        blok15konumu_x = blok15konumu_x + ilerletme_x;
        blok16konumu_x = blok16konumu_x + ilerletme_eksix;
        blok17konumu_x = blok17konumu_x + ilerletme_eksix;
        blok18konumu_x = blok18konumu_x + ilerletme_eksix;
        blok19konumu_x = blok19konumu_x + ilerletme_eksix;
        blok20konumu_x = blok20konumu_x + ilerletme_eksix;
        blok21konumu_x = blok21konumu_x + ilerletme_x;
        blok22konumu_x = blok22konumu_x + ilerletme_x;
        blok23konumu_x = blok23konumu_x + ilerletme_x;
        blok24konumu_x = blok24konumu_x + ilerletme_x;
        blok25konumu_x = blok25konumu_x + ilerletme_x;
        blok26konumu_x = blok26konumu_x + ilerletme_eksix;
        blok27konumu_x = blok27konumu_x + ilerletme_eksix;
        blok28konumu_x = blok28konumu_x + ilerletme_eksix;
        blok29konumu_x = blok29konumu_x + ilerletme_eksix;
        blok30konumu_x = blok30konumu_x + ilerletme_eksix;
        blok31konumu_x = blok31konumu_x + ilerletme_x;
        blok32konumu_x = blok32konumu_x + ilerletme_x;
        blok33konumu_x = blok33konumu_x + ilerletme_x;
        blok34konumu_x = blok34konumu_x + ilerletme_x;
        blok35konumu_x = blok35konumu_x + ilerletme_x;

        blokkonumu_y = blokkonumu_y + ilerletme_y;
        blok2konumu_y = blok2konumu_y + ilerletme_y;
        blok3konumu_y = blok3konumu_y + ilerletme_y;
        blok4konumu_y = blok4konumu_y + ilerletme_y;
        blok5konumu_y = blok5konumu_y + ilerletme_y;
        blok6konumu_y = blok6konumu_y + ilerletme_eksiy;
        blok7konumu_y = blok7konumu_y + ilerletme_eksiy;
        blok8konumu_y = blok8konumu_y + ilerletme_eksiy;
        blok9konumu_y = blok9konumu_y + ilerletme_eksiy;
        blok10konumu_y = blok10konumu_y + ilerletme_eksiy;

        if (blokkonumu_x > 79)
            blokkonumu_x = 2;
        if (blok2konumu_x > 79)
            blok2konumu_x = 2;
        if (blok3konumu_x > 79)
            blok3konumu_x = 2;
        if (blok4konumu_x > 79)
            blok4konumu_x = 2;
        if (blok5konumu_x > 79)
            blok5konumu_x = 2;
        if (blok6konumu_x < 2)
            blok6konumu_x = 79;
        if (blok7konumu_x < 2)
            blok7konumu_x = 79;
        if (blok8konumu_x < 2)
            blok8konumu_x = 79;
        if (blok9konumu_x < 2)
            blok9konumu_x = 79;
        if (blok10konumu_x < 2)
            blok10konumu_x = 79;
        if (blok11konumu_x > 79)
            blok11konumu_x = 2;
        if (blok12konumu_x > 79)
            blok12konumu_x = 2;
        if (blok13konumu_x > 79)
            blok13konumu_x = 2;
        if (blok14konumu_x > 79)
            blok14konumu_x = 2;
        if (blok15konumu_x > 79)
            blok15konumu_x = 2;
        if (blok16konumu_x < 2)
            blok16konumu_x = 79;
        if (blok17konumu_x < 2)
            blok17konumu_x = 79;
        if (blok18konumu_x < 2)
            blok18konumu_x = 79;
        if (blok19konumu_x < 2)
            blok19konumu_x = 79;
        if (blok20konumu_x < 2)
            blok20konumu_x = 79;
        if (blok21konumu_x > 79)
            blok21konumu_x = 2;
        if (blok22konumu_x > 79)
            blok22konumu_x = 2;
        if (blok23konumu_x > 79)
            blok23konumu_x = 2;
        if (blok24konumu_x > 79)
            blok24konumu_x = 2;
        if (blok25konumu_x > 79)
            blok25konumu_x = 2;
        if (blok26konumu_x < 2)
            blok26konumu_x = 79;
        if (blok27konumu_x < 2)
            blok27konumu_x = 79;
        if (blok28konumu_x < 2)
            blok28konumu_x = 79;
        if (blok29konumu_x < 2)
            blok29konumu_x = 79;
        if (blok30konumu_x < 2)
            blok30konumu_x = 79;
        if (blok31konumu_x > 79)
            blok31konumu_x = 2;
        if (blok32konumu_x > 79)
            blok32konumu_x = 2;
        if (blok33konumu_x > 79)
            blok33konumu_x = 2;
        if (blok34konumu_x > 79)
            blok34konumu_x = 2;
        if (blok35konumu_x > 79)
            blok35konumu_x = 2;

        if (oyuncu_konumu_x > 79)
            oyuncu_konumu_x = 2;
        if (oyuncu_konumu_x < 2)
            oyuncu_konumu_x = 79;
        if (oyuncu_konumu_y > 22)
            oyuncu_konumu_y = 4;
        if (oyuncu_konumu_y < 2)
            oyuncu_konumu_y = 22;
        if (oyuncu_konumu_y < 4) {
            puan++;
            gotoxy(3, 3); printf(" Puan :%d", puan);
            oyuncu_konumu_x = 40;
            oyuncu_konumu_y = 22;
            if (puan == 1) {
                blokkonumu_y--;
            }
            if (puan == 2) {
                blok3konumu_y = blok3konumu_y - 2;
            }
            if (puan == 3) {
                blok5konumu_y = blok5konumu_y + 1;
            }
            if (puan == 4) {
                blok6konumu_y = blok6konumu_y + 5;
            }
            if (puan == 5) {
                blok13konumu_y = 21;
                blok17konumu_y = 20;
                blok16konumu_y = 9;
                blok19konumu_y = 10;
            }
            if (puan == 6) {
                blok30konumu_y = 13;
                blok33konumu_y = 13;
                blok26konumu_y = 14;
                blok28konumu_y = 14;
            }
            if (oyun_hızı == 1) {
                oyun_hızı = oyun_hızı;
            }
            else if (oyun_hızı <= 35) {
                oyun_hızı = oyun_hızı - 1;
            }
            else {
                oyun_hızı = oyun_hızı - 10;
            }
        }
        BlokX[0] = blokkonumu_x;
        BlokY[0] = blokkonumu_y;
        Blok2X[0] = blok2konumu_x;
        Blok2Y[0] = blok2konumu_y;
        Blok3X[0] = blok3konumu_x;
        Blok3Y[0] = blok3konumu_y;
        Blok4X[0] = blok4konumu_x;
        Blok4Y[0] = blok4konumu_y;
        Blok5X[0] = blok5konumu_x;
        Blok5Y[0] = blok5konumu_y;
        Blok6X[0] = blok6konumu_x;
        Blok6Y[0] = blok6konumu_y;
        Blok7X[0] = blok7konumu_x;
        Blok7Y[0] = blok7konumu_y;
        Blok8X[0] = blok8konumu_x;
        Blok8Y[0] = blok8konumu_y;
        Blok9X[0] = blok9konumu_x;
        Blok9Y[0] = blok9konumu_y;
        Blok10X[0] = blok10konumu_x;
        Blok10Y[0] = blok10konumu_y;
        Blok11X[0] = blok11konumu_x;
        Blok11Y[0] = blok11konumu_y;
        Blok12X[0] = blok12konumu_x;
        Blok12Y[0] = blok12konumu_y;
        Blok13X[0] = blok13konumu_x;
        Blok13Y[0] = blok13konumu_y;
        Blok14X[0] = blok14konumu_x;
        Blok14Y[0] = blok14konumu_y;
        Blok15X[0] = blok15konumu_x;
        Blok15Y[0] = blok15konumu_y;
        Blok16X[0] = blok16konumu_x;
        Blok16Y[0] = blok16konumu_y;
        Blok17X[0] = blok17konumu_x;
        Blok17Y[0] = blok17konumu_y;
        Blok18X[0] = blok18konumu_x;
        Blok18Y[0] = blok18konumu_y;
        Blok19X[0] = blok19konumu_x;
        Blok19Y[0] = blok19konumu_y;
        Blok20X[0] = blok20konumu_x;
        Blok20Y[0] = blok20konumu_y;
        Blok21X[0] = blok21konumu_x;
        Blok21Y[0] = blok21konumu_y;
        Blok22X[0] = blok22konumu_x;
        Blok22Y[0] = blok22konumu_y;
        Blok23X[0] = blok23konumu_x;
        Blok23Y[0] = blok23konumu_y;
        Blok24X[0] = blok24konumu_x;
        Blok24Y[0] = blok24konumu_y;
        Blok25X[0] = blok25konumu_x;
        Blok25Y[0] = blok25konumu_y;
        Blok26X[0] = blok26konumu_x;
        Blok26Y[0] = blok26konumu_y;
        Blok27X[0] = blok27konumu_x;
        Blok27Y[0] = blok27konumu_y;
        Blok28X[0] = blok28konumu_x;
        Blok28Y[0] = blok28konumu_y;
        Blok29X[0] = blok29konumu_x;
        Blok29Y[0] = blok29konumu_y;
        Blok30X[0] = blok30konumu_x;
        Blok30Y[0] = blok30konumu_y;
        Blok31X[0] = blok31konumu_x;
        Blok31Y[0] = blok31konumu_y;
        Blok32X[0] = blok32konumu_x;
        Blok32Y[0] = blok32konumu_y;
        Blok33X[0] = blok33konumu_x;
        Blok33Y[0] = blok33konumu_y;
        Blok34X[0] = blok34konumu_x;
        Blok34Y[0] = blok34konumu_y;
        Blok35X[0] = blok35konumu_x;
        Blok35Y[0] = blok35konumu_y;
        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == BlokX[i] && oyuncu_konumu_y == BlokY[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }
        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == Blok2X[i] && oyuncu_konumu_y == Blok2Y[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }
        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == Blok3X[i] && oyuncu_konumu_y == Blok3Y[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }
        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == Blok4X[i] && oyuncu_konumu_y == Blok4Y[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }
        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == Blok5X[i] && oyuncu_konumu_y == Blok5Y[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }
        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == Blok6X[i] && oyuncu_konumu_y == Blok6Y[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }
        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == Blok7X[i] && oyuncu_konumu_y == Blok7Y[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }
        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == Blok8X[i] && oyuncu_konumu_y == Blok8Y[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }
        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == Blok9X[i] && oyuncu_konumu_y == Blok9Y[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }
        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == Blok10X[i] && oyuncu_konumu_y == Blok10Y[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }

        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == Blok11X[i] && oyuncu_konumu_y == Blok11Y[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }
        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == Blok12X[i] && oyuncu_konumu_y == Blok12Y[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }
        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == Blok13X[i] && oyuncu_konumu_y == Blok13Y[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }
        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == Blok14X[i] && oyuncu_konumu_y == Blok14Y[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }
        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == Blok15X[i] && oyuncu_konumu_y == Blok15Y[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }
        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == Blok16X[i] && oyuncu_konumu_y == Blok16Y[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }
        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == Blok17X[i] && oyuncu_konumu_y == Blok17Y[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }
        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == Blok18X[i] && oyuncu_konumu_y == Blok18Y[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }
        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == Blok19X[i] && oyuncu_konumu_y == Blok19Y[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }
        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == Blok20X[i] && oyuncu_konumu_y == Blok20Y[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }
        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == Blok21X[i] && oyuncu_konumu_y == Blok21Y[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }
        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == Blok22X[i] && oyuncu_konumu_y == Blok22Y[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }
        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == Blok23X[i] && oyuncu_konumu_y == Blok23Y[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }
        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == Blok24X[i] && oyuncu_konumu_y == Blok24Y[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }
        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == Blok25X[i] && oyuncu_konumu_y == Blok25Y[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }
        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == Blok26X[i] && oyuncu_konumu_y == Blok26Y[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }
        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == Blok27X[i] && oyuncu_konumu_y == Blok27Y[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }
        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == Blok28X[i] && oyuncu_konumu_y == Blok28Y[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }
        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == Blok29X[i] && oyuncu_konumu_y == Blok29Y[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }
        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == Blok30X[i] && oyuncu_konumu_y == Blok30Y[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }
        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == Blok31X[i] && oyuncu_konumu_y == Blok31Y[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }
        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == Blok32X[i] && oyuncu_konumu_y == Blok32Y[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }
        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == Blok33X[i] && oyuncu_konumu_y == Blok33Y[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }
        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == Blok34X[i] && oyuncu_konumu_y == Blok34Y[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }
        for (i = 0; i <= blok_uzunlugu; i++)
        {
            if ((oyuncu_konumu_x == Blok35X[i] && oyuncu_konumu_y == Blok35Y[i]))
            {
                Dongu_Degeri = 0;
                system("cls");

                ekrani_bas();
                gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("--YANDINIZ--\n");


            }


        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            BlokY[i] = BlokY[i - 1];
            BlokX[i] = BlokX[i - 1];
        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            Blok2Y[i] = Blok2Y[i - 1];
            Blok2X[i] = Blok2X[i - 1];
        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            Blok3Y[i] = Blok3Y[i - 1];
            Blok3X[i] = Blok3X[i - 1];
        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            Blok4Y[i] = Blok4Y[i - 1];
            Blok4X[i] = Blok4X[i - 1];
        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            Blok5Y[i] = Blok5Y[i - 1];
            Blok5X[i] = Blok5X[i - 1];
        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            Blok6Y[i] = Blok6Y[i - 1];
            Blok6X[i] = Blok6X[i - 1];
        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            Blok7Y[i] = Blok7Y[i - 1];
            Blok7X[i] = Blok7X[i - 1];
        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            Blok8Y[i] = Blok8Y[i - 1];
            Blok8X[i] = Blok8X[i - 1];
        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            Blok9Y[i] = Blok9Y[i - 1];
            Blok9X[i] = Blok9X[i - 1];
        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            Blok10Y[i] = Blok10Y[i - 1];
            Blok10X[i] = Blok10X[i - 1];
        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            Blok11Y[i] = Blok11Y[i - 1];
            Blok11X[i] = Blok11X[i - 1];
        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            Blok12Y[i] = Blok12Y[i - 1];
            Blok12X[i] = Blok12X[i - 1];
        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            Blok13Y[i] = Blok13Y[i - 1];
            Blok13X[i] = Blok13X[i - 1];
        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            Blok14Y[i] = Blok14Y[i - 1];
            Blok14X[i] = Blok14X[i - 1];
        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            Blok15Y[i] = Blok15Y[i - 1];
            Blok15X[i] = Blok15X[i - 1];
        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            Blok16Y[i] = Blok16Y[i - 1];
            Blok16X[i] = Blok16X[i - 1];
        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            Blok17Y[i] = Blok17Y[i - 1];
            Blok17X[i] = Blok17X[i - 1];
        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            Blok18Y[i] = Blok18Y[i - 1];
            Blok18X[i] = Blok18X[i - 1];
        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            Blok19Y[i] = Blok19Y[i - 1];
            Blok19X[i] = Blok19X[i - 1];
        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            Blok20Y[i] = Blok20Y[i - 1];
            Blok20X[i] = Blok20X[i - 1];
        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            Blok21Y[i] = Blok21Y[i - 1];
            Blok21X[i] = Blok21X[i - 1];
        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            Blok22Y[i] = Blok22Y[i - 1];
            Blok22X[i] = Blok22X[i - 1];
        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            Blok23Y[i] = Blok23Y[i - 1];
            Blok23X[i] = Blok23X[i - 1];
        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            Blok24Y[i] = Blok24Y[i - 1];
            Blok24X[i] = Blok24X[i - 1];
        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            Blok25Y[i] = Blok25Y[i - 1];
            Blok25X[i] = Blok25X[i - 1];
        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            Blok26Y[i] = Blok26Y[i - 1];
            Blok26X[i] = Blok26X[i - 1];
        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            Blok27Y[i] = Blok27Y[i - 1];
            Blok27X[i] = Blok27X[i - 1];
        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            Blok28Y[i] = Blok28Y[i - 1];
            Blok28X[i] = Blok28X[i - 1];
        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            Blok29Y[i] = Blok29Y[i - 1];
            Blok29X[i] = Blok29X[i - 1];
        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            Blok30Y[i] = Blok30Y[i - 1];
            Blok30X[i] = Blok30X[i - 1];
        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            Blok31Y[i] = Blok31Y[i - 1];
            Blok31X[i] = Blok31X[i - 1];
        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            Blok32Y[i] = Blok32Y[i - 1];
            Blok32X[i] = Blok32X[i - 1];
        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            Blok33Y[i] = Blok33Y[i - 1];
            Blok33X[i] = Blok33X[i - 1];
        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            Blok34Y[i] = Blok34Y[i - 1];
            Blok34X[i] = Blok34X[i - 1];
        }
        for (i = blok_uzunlugu; i > 0; i--)
        {
            Blok35Y[i] = Blok35Y[i - 1];
            Blok35X[i] = Blok35X[i - 1];
        }

        if (Dongu_Degeri == 1) {
            gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("%c", 2);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(BlokX[i], BlokY[i]); printf("%c", 219);
            }
            gotoxy(blokkonumu_x, blokkonumu_y); printf("%c", 219);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok2X[i], Blok2Y[i]); printf("%c", 219);
            }
            gotoxy(blok2konumu_x, blok2konumu_y); printf("%c", 219);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok3X[i], Blok3Y[i]); printf("%c", 219);
            }
            gotoxy(blok3konumu_x, blok3konumu_y); printf("%c", 219);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok4X[i], Blok4Y[i]); printf("%c", 219);
            }
            gotoxy(blok4konumu_x, blok4konumu_y); printf("%c", 219);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok5X[i], Blok5Y[i]); printf("%c", 219);
            }
            gotoxy(blok5konumu_x, blok5konumu_y); printf("%c", 219);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok6X[i], Blok6Y[i]); printf("%c", 205);
            }
            gotoxy(blok6konumu_x, blok6konumu_y); printf("%c", 273);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok7X[i], Blok7Y[i]); printf("%c", 205);
            }
            gotoxy(blok7konumu_x, blok7konumu_y); printf("%c", 273);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok8X[i], Blok8Y[i]); printf("%c", 205);
            }
            gotoxy(blok8konumu_x, blok8konumu_y); printf("%c", 273);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok9X[i], Blok9Y[i]); printf("%c", 205);
            }
            gotoxy(blok9konumu_x, blok9konumu_y); printf("%c", 273);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok10X[i], Blok10Y[i]); printf("%c", 205);
            }
            gotoxy(blok10konumu_x, blok10konumu_y); printf("%c", 273);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok11X[i], Blok11Y[i]); printf("%c", 219);
            }
            gotoxy(blok11konumu_x, blok11konumu_y); printf("%c", 219);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok12X[i], Blok12Y[i]); printf("%c", 219);
            }
            gotoxy(blok12konumu_x, blok12konumu_y); printf("%c", 219);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok13X[i], Blok13Y[i]); printf("%c", 219);
            }
            gotoxy(blok13konumu_x, blok13konumu_y); printf("%c", 219);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok14X[i], Blok14Y[i]); printf("%c", 219);
            }
            gotoxy(blok14konumu_x, blok14konumu_y); printf("%c", 219);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok15X[i], Blok15Y[i]); printf("%c", 219);
            }
            gotoxy(blok15konumu_x, blok15konumu_y); printf("%c", 219);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok16X[i], Blok16Y[i]); printf("%c", 205);
            }
            gotoxy(blok16konumu_x, blok16konumu_y); printf("%c", 273);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok17X[i], Blok17Y[i]); printf("%c", 205);
            }
            gotoxy(blok17konumu_x, blok17konumu_y); printf("%c", 273);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok18X[i], Blok18Y[i]); printf("%c", 205);
            }
            gotoxy(blok18konumu_x, blok18konumu_y); printf("%c", 273);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok19X[i], Blok19Y[i]); printf("%c", 205);
            }
            gotoxy(blok19konumu_x, blok19konumu_y); printf("%c", 273);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok20X[i], Blok20Y[i]); printf("%c", 205);
            }
            gotoxy(blok20konumu_x, blok20konumu_y); printf("%c", 273);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok21X[i], Blok21Y[i]); printf("%c", 219);
            }
            gotoxy(blok21konumu_x, blok21konumu_y); printf("%c", 219);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok22X[i], Blok22Y[i]); printf("%c", 219);
            }
            gotoxy(blok22konumu_x, blok22konumu_y); printf("%c", 219);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok23X[i], Blok23Y[i]); printf("%c", 219);
            }
            gotoxy(blok23konumu_x, blok23konumu_y); printf("%c", 219);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok24X[i], Blok24Y[i]); printf("%c", 219);
            }
            gotoxy(blok24konumu_x, blok24konumu_y); printf("%c", 219);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok25X[i], Blok25Y[i]); printf("%c", 219);
            }
            gotoxy(blok25konumu_x, blok25konumu_y); printf("%c", 219);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok26X[i], Blok26Y[i]); printf("%c", 205);
            }
            gotoxy(blok26konumu_x, blok26konumu_y); printf("%c", 273);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok27X[i], Blok27Y[i]); printf("%c", 205);
            }
            gotoxy(blok27konumu_x, blok27konumu_y); printf("%c", 273);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok28X[i], Blok28Y[i]); printf("%c", 205);
            }
            gotoxy(blok28konumu_x, blok28konumu_y); printf("%c", 273);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok29X[i], Blok29Y[i]); printf("%c", 205);
            }
            gotoxy(blok29konumu_x, blok29konumu_y); printf("%c", 273);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok30X[i], Blok30Y[i]); printf("%c", 205);
            }
            gotoxy(blok30konumu_x, blok30konumu_y); printf("%c", 273);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok31X[i], Blok31Y[i]); printf("%c", 219);
            }
            gotoxy(blok31konumu_x, blok31konumu_y); printf("%c", 219);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok32X[i], Blok32Y[i]); printf("%c", 219);
            }
            gotoxy(blok32konumu_x, blok32konumu_y); printf("%c", 219);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok33X[i], Blok33Y[i]); printf("%c", 219);
            }
            gotoxy(blok33konumu_x, blok33konumu_y); printf("%c", 219);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok34X[i], Blok34Y[i]); printf("%c", 219);
            }
            gotoxy(blok34konumu_x, blok34konumu_y); printf("%c", 219);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok35X[i], Blok35Y[i]); printf("%c", 219);
            }
            gotoxy(blok35konumu_x, blok35konumu_y); printf("%c", 219);
        }



        Sleep(oyun_hızı);



        gotoxy(oyuncu_konumu_x, oyuncu_konumu_y); printf("%c", 32);
        if (Dongu_Degeri == 1) {
            gotoxy(blokkonumu_x, blokkonumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(BlokX[i], BlokY[i]); printf(" ");
            }
            gotoxy(blok2konumu_x, blok2konumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok2X[i], Blok2Y[i]); printf(" ");
            }
            gotoxy(blok3konumu_x, blok3konumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok3X[i], Blok3Y[i]); printf(" ");
            }
            gotoxy(blok4konumu_x, blok4konumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok4X[i], Blok4Y[i]); printf(" ");
            }
            gotoxy(blok5konumu_x, blok5konumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok5X[i], Blok5Y[i]); printf(" ");
            }
            gotoxy(blok6konumu_x, blok6konumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok6X[i], Blok6Y[i]); printf(" ");
            }
            gotoxy(blok7konumu_x, blok7konumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok7X[i], Blok7Y[i]); printf(" ");
            }
            gotoxy(blok8konumu_x, blok8konumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok8X[i], Blok8Y[i]); printf(" ");
            }
            gotoxy(blok9konumu_x, blok9konumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok9X[i], Blok9Y[i]); printf(" ");
            }
            gotoxy(blok10konumu_x, blok10konumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok10X[i], Blok10Y[i]); printf(" ");
            }
            gotoxy(blok11konumu_x, blok11konumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok11X[i], Blok11Y[i]); printf(" ");
            }
            gotoxy(blok12konumu_x, blok12konumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok12X[i], Blok12Y[i]); printf(" ");
            }
            gotoxy(blok13konumu_x, blok13konumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok13X[i], Blok13Y[i]); printf(" ");
            }
            gotoxy(blok14konumu_x, blok14konumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok14X[i], Blok14Y[i]); printf(" ");
            }
            gotoxy(blok15konumu_x, blok15konumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok15X[i], Blok15Y[i]); printf(" ");
            }
            gotoxy(blok16konumu_x, blok16konumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok16X[i], Blok16Y[i]); printf(" ");
            }
            gotoxy(blok17konumu_x, blok17konumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok17X[i], Blok17Y[i]); printf(" ");
            }
            gotoxy(blok18konumu_x, blok18konumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok18X[i], Blok18Y[i]); printf(" ");
            }
            gotoxy(blok19konumu_x, blok19konumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok19X[i], Blok19Y[i]); printf(" ");
            }
            gotoxy(blok20konumu_x, blok20konumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok20X[i], Blok20Y[i]); printf(" ");
            }
            gotoxy(blok21konumu_x, blok21konumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok21X[i], Blok21Y[i]); printf(" ");
            }
            gotoxy(blok22konumu_x, blok22konumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok22X[i], Blok22Y[i]); printf(" ");
            }
            gotoxy(blok23konumu_x, blok23konumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok23X[i], Blok23Y[i]); printf(" ");
            }
            gotoxy(blok24konumu_x, blok24konumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok24X[i], Blok24Y[i]); printf(" ");
            }
            gotoxy(blok25konumu_x, blok25konumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok25X[i], Blok25Y[i]); printf(" ");
            }
            gotoxy(blok26konumu_x, blok26konumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok26X[i], Blok26Y[i]); printf(" ");
            }
            gotoxy(blok27konumu_x, blok27konumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok27X[i], Blok27Y[i]); printf(" ");
            }
            gotoxy(blok28konumu_x, blok28konumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok28X[i], Blok28Y[i]); printf(" ");
            }
            gotoxy(blok29konumu_x, blok29konumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok29X[i], Blok29Y[i]); printf(" ");
            }
            gotoxy(blok30konumu_x, blok30konumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok30X[i], Blok30Y[i]); printf(" ");
            }
            gotoxy(blok31konumu_x, blok31konumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok31X[i], Blok31Y[i]); printf(" ");
            }
            gotoxy(blok32konumu_x, blok32konumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok32X[i], Blok32Y[i]); printf(" ");
            }
            gotoxy(blok33konumu_x, blok33konumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok33X[i], Blok33Y[i]); printf(" ");
            }
            gotoxy(blok4konumu_x, blok4konumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok34X[i], Blok34Y[i]); printf(" ");
            }
            gotoxy(blok35konumu_x, blok35konumu_y); printf("%c", 32);
            for (i = 0; i <= blok_uzunlugu; i++)
            {
                gotoxy(Blok35X[i], Blok35Y[i]); printf(" ");
            }
        }


    } while (Dongu_Degeri == 1);
    Sleep(1000);
    _getch();
    system("cls");

}
void giris() {
    char LoginId[9];
    char Password[9];

    while (1) {
        gotoxy(20, 9); printf("Frogger Game Login System\n");
        gotoxy(20, 10); printf("Please Enter your Name\n");
        gotoxy(20, 12); gets_s(LoginId);
        gotoxy(20, 13); printf("Please Enter your Password\n");
        gotoxy(20, 15); gets_s(Password);
        if (strcmp(LoginId, "demirhan") == 0) {
            if (strcmp(Password, "adiguzel") == 0) {
                break;
            }
        }
        else {
            gotoxy(20, 7); printf("Try Again!\n");
        }
    }
    oyun();
}
int main() {
    cerceve(0, 0, 79, 22, 1);
    ekrani_bas();
    giris();
}
