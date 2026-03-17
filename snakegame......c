#include <iostream>
#include <windows.h>
#include <conio.h>
#include <time.h>
using namespace std;
int score,highscore;
char retry='y';
int main()
{
    cout <<endl;
    cout << "Welcome in" <<endl;
    cout <<endl;
    cout << "SNAKE" <<endl;
    cout << "GAME" <<endl;
    cout << "" <<endl;
    cout <<" Press Any Key to Continue"<<endl;
    getch();
    while (retry=='y' || retry == 'Y')
    {
    srand(time(NULL));
    score=0;
    int pion=(rand()-1)%18+1;
    int poin=(rand()-1)%18+1;
    int x[100];
    int y[100];
    x[0]=10;
    y[0]=10;
    x[1]=9;
    y[1]=10;
    x[2]=8;
    y[2]=10;




