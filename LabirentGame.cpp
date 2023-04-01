#include<iostream>
#include<conio.h>
#include<Windows.h>


using namespace std;

char giris; // Kullanıcıdan giriş almak için w a s d

int mapArr[13][33] = {

// 1 ler duvar 0 lar Boslugu   2 ler Cıkısları  Temsil Eder

{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1 },
{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1 },
{ 1,0,0,1,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,1,0,0,1,0,0,0,0,0,0,0,0,1 },
{ 1,0,0,1,0,1,1,0,1,0,0,1,0,0,1,1,1,1,0,0,1,0,0,1,0,0,1,1,1,1,0,0,1 },
{ 1,0,0,1,0,1,0,0,1,0,0,0,0,0,1,0,0,1,0,0,1,0,0,0,0,0,1,0,0,1,0,0,1 },
{ 1,0,0,1,0,1,1,1,1,1,1,1,1,1,1,0,0,1,0,0,1,1,1,1,1,1,1,0,0,1,0,0,1 },
{ 1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,1 },
{ 1,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,0,0,1 },
{ 1,0,0,0,1,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,1 },
{ 1,0,0,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1,1,0,0,1,1,1,1,1,1,1,1,1,1 },
{ 1,0,0,0,0,0,0,0,0,0,0,0,1,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,0,1 },
{ 1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,1,2,2,1 },

};


void charyaz()

{

    

}

void Harita()

{

    

    for ( int i = 0; i < 13; i++)

    {
        

        for ( int j = 0; j < 33; j++)

        {

            if (mapArr[i][j] == 0)

            {

                cout << " ";

            }

            else if (mapArr[i][j] == 1)

            {

                cout << char(219); // Duvarı Temsil Eder ASCII Tablosundan 219. Karakter kare seklinde Bosluk

            }

            else if (mapArr[i][j] == 2)

            {

                cout << " ";

            }


            
        }

        cout << endl;
        
    }

}

void gotoxy(int x, int y)

{
   COORD coord;
   coord.X = x;
   coord.Y = y;
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
 


}

void hareket()

{

    int x = 1 ;
    int y = 1 ;

    int xCln = 1; 
    int yCln = 1;

    while( true)

    {

        gotoxy(xCln , yCln); // Kullanıcının hareket ettiği yerdeki karakteri silmek için cln değişkenlerini kullanıyoruz
        cout << " ";
        gotoxy(x, y);
        cout<< char(175);  // Kullanıcıyı Temsil Eder ASCII Tablosundan 175. Karakter oka benzer bir şey ifade ediyor

        giris = _getch(); // Kullanıcıdan giriş alıyoruz

        xCln = x;
        yCln = y;

        if ( giris == 'w')

        {

            y--;
            
        }

        else if ( giris == 's')

        {

            y++;

        }

        else if ( giris == 'a')

        {

            x--;

        }

        else if ( giris == 'd')

        {

            x++;

        }

        if (mapArr[y][x] == 1)

        {

            x = xCln;
            y = yCln;

        }

        else if (mapArr[y][x] == 2)

        {
            
            cout<<endl;
            cout<<endl;
            cout << "Cikis Bulundu Tebrikler Kazandiniz";
            system("color B");
            

        }
    
    }


} 


 int main()

 {

    Harita();

    hareket();

    _getch();

    system("pause");



 return 0;

 }
