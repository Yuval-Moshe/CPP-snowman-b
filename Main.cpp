
#include <iostream>
#include <string>
#include <stdlib.h>
#include <math.h>
using namespace std;

#include "snowman.hpp"
using namespace ariel;

int main()
{

    cout << "--------------------\nStarting Good Snowmans Random Generator:\n--------------------" << endl;
    for (int i = 0; i < 100; i++)
    {
        int num = 0;
        for (int j = 0; j < 8; j++)
        {
            num += ((rand() % 4 + 1) * pow(10, j));
        }
        cout << num << ":\n"
             << snowman(num) << "\n"
             << endl;
    }
    cout << "--------------------\n"
         << "Starting Bad Snowmans Random Generator (Length is Not 8):\n--------------------" << endl;
    for (int i = 0; i < 20; i++)
    {
        int num = 0;
        int len = 8;
        while (len == 8)
        {
            len = rand() % 9 + 1;
        }

        for (int j = 0; j < len; j++)
        {
            num += ((rand() % 4 + 1) * pow(10, j));
        }
        cout << "num is: " << num << ", length is: " << len << endl;
        try
        {
            snowman(num);
        }
        catch (string &s)
        {
            cout << "Cought Exception-> " << s << "\n"
                 << endl;
        }
    }
    cout << "--------------------\n"
         << "Starting Bad Snowmans Random Generator (Not All Numbers Are Between 1 and 4):\n--------------------" << endl;
    for (int i = 0; i < 20; i++)
    {
        int num = 0;
        int pos = rand() % 8;
        int curr = 0;

        for (int j = 0; j < 8; j++)
        {
            if (j == pos)
            {
                curr = rand() % 10;
                while (curr >= 1 && curr <= 4)
                {
                    curr = rand() % 10;
                }
                num += (curr * pow(10, j));
            }
            else
            {
                num += ((rand() % 4 + 1) * pow(10, j));
            }
        }
        cout << "num is: " << num << ", the " << 8 - pos << "'th number is not between 1-4: (" << curr << ")" << endl;
        try
        {
            snowman(num);
        }
        catch (exception &e)
        {
            cout << "Cought Exception-> " << e.what() << "\n"
                 << endl;
        }
    }
    bool flag = true;
    while (flag)
    {
        int hat = 0;
        int nm = 0;
        int leye = 0;
        int reye = 0;
        int larm = 0;
        int rarm = 0;
        int torso = 0;
        int base = 0;
        cout << "Now Let's Build A Custom Made Snowman, Let's Go!" << endl;
        cout << "Let's Pick a Hat, Those Are Your Options:\n1) _===_\n    ___ \n2) .....\n    _  \n3) /_\\ \n    ___ \n4) (_*_)" << endl;
        cin >> hat;
        if (cin.fail())
        {
            while (cin.fail())
            {
                cout << "Incorrect Input For Hat, Please type again" << endl;
                cin.clear();
                cin.ignore();
                cin >> hat;
            }
        }
        cout << "Great! Now Let's Pick A Nose/Mouth, Those Are Your Options:\n1) ,\n2) .\n3) _\n4) None" << endl;
        cin >> nm;
        if (cin.fail())
        {
            while (cin.fail())
            {
                cout << "Incorrect Input For Nose/Mouth, Please type again" << endl;
                cin.clear();
                cin.ignore();
                cin >> nm;
            }
        }
        cout << "Awesome! Now Pick Your Snowman's Left Eye, Those Are Your Options:\n1) .\n2) o\n3) O\n4) -" << endl;
        cin >> leye;
        if (cin.fail())
        {
            while (cin.fail())
            {
                cout << "Incorrect Input For Left Eye, Please type again" << endl;
                cin.clear();
                cin.ignore();
                cin >> leye;
            }
        }
        cout << "And Now The Right Eye, Those Are Your Options:\n1) .\n2) o\n3) O\n4) -" << endl;
        cin >> reye;
        if (cin.fail())
        {
            while (cin.fail())
            {
                cout << "Incorrect Input For Right Eye, Please type again" << endl;
                cin.clear();
                cin.ignore();
                cin >> reye;
            }
        }
        cout << "Great, Now Pick The Left Arm, Those Are Your Options:\n1) <\n2) \\\n3) /\n4) None" << endl;
        cin >> larm;
        if (cin.fail())
        {
            while (cin.fail())
            {
                cout << "Incorrect Input For Left Arm, Please type again" << endl;
                cin.clear();
                cin.ignore();
                cin >> larm;
            }
        }
        cout << "And Now Right Arm, Those Are Your Options:\n1) >\n2) /\n3) \\\n4) None" << endl;
        cin >> rarm;
        if (cin.fail())
        {
            while (cin.fail())
            {
                cout << "Incorrect Input For Right Arm, Please type again" << endl;
                cin.clear();
                cin.ignore();
                cin >> rarm;
            }
        }
        cout << "Pick The Torso Of The Snowman, Those Are Your Options:\n1) :\n2) ] [\n3) > <\n4) None" << endl;
        cin >> torso;
        if (cin.fail())
        {
            while (cin.fail())
            {
                cout << "Incorrect Input For Torso, Please type again" << endl;
                cin.clear();
                cin.ignore();
                cin >> torso;
            }
        }
        cout << "And Last Is The Base, Those Are Your Options:\n1) :\n2) \" \"\n3) ___\n4) None" << endl;
        cin >> base;
        if (cin.fail())
        {
            while (cin.fail())
            {
                cout << "Incorrect Input For Base, Please type again" << endl;
                cin.clear();
                cin.ignore();
                cin >> base;
            }
        }
        int flag_num = 0;
        int num = 0;
        num = hat * 10000000 + nm * 1000000 + leye * 100000 + reye * 10000 + larm * 1000 + rarm * 100 + torso * 10 + base;
        cout << "Num is: " << num << endl;
        cout << "The Snowman You've Built Needs To Have The Following Components:\nHat:\n"
             << hat_opt(hat) << "\nNose/Mouth:   "
             << nm_opt(nm) << "\nLeft Eye:   " << eye_opt(leye) << "\nRight Eye:   " << eye_opt(reye) << "\nLeft Aram:   " << larm_opt(larm)
             << "\nRight Arm:   " << rarm_opt(rarm) << "\nTorso:   " << torso_opt(torso) << "\nBase:   " << base_opt(base) << endl;

        cout << "-------------------\nThe Reuslt Of The Snowman Functios is:\n"
             << snowman(num) << endl;
        cout << "Would you like to build another snowman?\nYes = 1\nNo = 0" << endl;
        cin >> flag_num;
        flag = (flag_num == 1);
    }
}