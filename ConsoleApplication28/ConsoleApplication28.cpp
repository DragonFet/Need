#include <iostream>
#include <vector>
#include <string>
#include <ctime>
#include <windows.h>
using namespace std;
int getValue()
{
    while (true)
    {
        cout << "Please input  correct VALLUE";
        cout << '\n';
        int a;
        cin >> a;
        cout << '\n';

        if (cin.fail())
        {
            cin.clear(); // 
            cin.ignore(32767, '\n');
        }
        else return a;

    }

}
class living_creatures
{
public:
    int age;
    int vallue;
    int age_dead;

};
class fox :public living_creatures
{
public:
    string behavior = "predator";
};
class rabbit :public living_creatures
{
public:
    string behavior = "herbivore";


};
class grass :public living_creatures
{
public:
    string behavior = "neutral";

};
class undead
{
public:
    int age = 0;
    int vallue = 0;
    void screen()
    {
        cout << "Im undead.I dont have age or vallue" << endl;
    }

};

int main()
{
    living_creatures livi;
    cout << "Lets start" << endl;
    fox Alis;
    rabbit Bony;
    grass warter;

    {
        cout << "Input age foxs" << endl;
        Alis.age = getValue();
        cout << "How much fox do you want spawn" << endl;
        Alis.vallue = getValue();
        if (Alis.vallue > 5)
        {
            cout << "Sorry but moree 5 foxs cant join forest" << endl;
            Alis.vallue = 5;
        }
        cout << "How many years fox can live?" << endl;
        Alis.age_dead = getValue();
    }

    {
        cout << "Input age rabbits" << endl;
        Bony.age = getValue();
        cout << "How much rabbit do you want spawn" << endl;
        Bony.vallue = getValue();
        cout << "How many years rabbit can live?" << endl;
        Bony.age_dead = getValue();
    }

    {

        cout << "How much grass do you want spawn" << endl;
        warter.vallue = getValue();
    }

    {
        if (warter.vallue > Bony.vallue)
        {
            cout << "Hey! Grass living" << endl;

        }
        else {
            cout << "Oh NO Grass left from forest" << endl;
            undead warter_dead;
            warter_dead.screen();

        }
        if (Alis.age > Alis.age_dead)
        {
            cout << "Oh NO foxs left from forest" << endl;
            undead Alis_dead;
            Alis_dead.screen();
        }
        else {
            cout << "YEEAA foxs living" << endl;
        }
        if (Bony.vallue < Alis.vallue)
        {
            cout << "Oh NO rabits left from forest" << endl;
            undead Bony_dead;
            Bony_dead.screen();
        }
        else {
            if (Bony.age > Bony.age_dead)
            {
                cout << "Oh NO rabits left from forest" << endl;
                undead Bony_dead;
                Bony_dead.screen();
            }
            else {
                cout << "YEEAA rabbits living" << endl;
            }
        }
    }
    cout << endl;
    system("pause");
}