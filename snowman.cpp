#include "snowman.hpp"
#include <iostream>
#include <string>

using namespace std;

namespace ariel
{
    string snowman(int n)
    {
        constexpr int Nine = 9;
        constexpr int One = 1;
        constexpr int HAT_DIV = 10000000;
        constexpr int NM_DIV = 1000000;
        constexpr int LEYE_DIV = 100000;
        constexpr int REYE_DIV = 10000;
        constexpr int LARM_DIV = 1000;
        constexpr int RARM_DIV = 100;
        constexpr int TORSO_DIV = 10;
        constexpr int BASE_DIV = 1;
        if (n / HAT_DIV >= One && n / HAT_DIV <= Nine)
        {
            string hat = hat_opt(n / HAT_DIV);
            n -= ((n / HAT_DIV) * HAT_DIV);
            string nm = nm_opt(n / NM_DIV);
            n -= ((n / NM_DIV) * NM_DIV);
            string leye = eye_opt(n / LEYE_DIV);
            n -= ((n / LEYE_DIV) * LEYE_DIV);
            string reye = eye_opt(n / REYE_DIV);
            n -= ((n / REYE_DIV) * REYE_DIV);
            string larm = larm_opt(n / LARM_DIV);
            bool up_larm = (n / LARM_DIV) == 2;
            n -= ((n / LARM_DIV) * LARM_DIV);
            string rarm = rarm_opt(n / RARM_DIV);
            bool up_rarm = (n / RARM_DIV) == 2;
            n -= ((n / RARM_DIV) * RARM_DIV);
            string torso = torso_opt(n / TORSO_DIV);
            n -= ((n / TORSO_DIV) * TORSO_DIV);
            string base = base_opt(n / BASE_DIV);
            string ans;
            if (up_larm && up_rarm)
            {
                ans = hat + "\n" + larm + "(" + leye + nm + reye + ")" + rarm + "\n (" + torso + ")\n (" + base + ")";
            }
            else if (up_larm)
            {
                ans = hat + "\n" + larm + "(" + leye + nm + reye + ")\n (" + torso + ")" + rarm + "\n (" + base + ")";
            }
            else if (up_rarm)
            {
                ans = hat + "\n (" + leye + nm + reye + ")" + rarm + "\n" + larm + "(" + torso + ")\n (" + base + ")";
            }
            else
            {
                ans = hat + "\n (" + leye + nm + reye + ")\n" + larm + "(" + torso + ")" + rarm + "\n (" + base + ")";
            }
            return ans;
        }
        throw string("The Provided Number Length Is Not 8");
    }

    string hat_opt(int n)
    {
        switch (n)
        {
        case 1:
            return " _===_";
        case 2:
            return "  ___ \n .....";
        case 3:
            return "   _  \n  /_\\ ";
        case 4:
            return "  ___ \n (_*_)";
        default:
            throw std::out_of_range("Hat is out of range");
        }
    }
    string nm_opt(int n)
    {
        switch (n)
        {
        case 1:
            return ",";
        case 2:
            return ".";
        case 3:
            return "_";
        case 4:
            return " ";
        default:
            throw std::out_of_range("NM is out of range");
        }
    }
    string eye_opt(int n)
    {
        switch (n)
        {
        case 1:
            return ".";
        case 2:
            return "o";
        case 3:
            return "O";
        case 4:
            return "-";
        default:
            throw std::out_of_range("Eye is out of range");
        }
    }
    string larm_opt(int n)
    {
        switch (n)
        {
        case 1:
            return "<";
        case 2:
            return "\\";
        case 3:
            return "/";
        case 4:
            return " ";
        default:
            throw std::out_of_range("Left arm is out of range");
        }
    }
    string rarm_opt(int n)
    {
        switch (n)
        {
        case 1:
            return ">";
        case 2:
            return "/";
        case 3:
            return "\\";
        case 4:
            return " ";
        default:
            throw std::out_of_range("Right arm is out of range");
        }
    }
    string torso_opt(int n)
    {
        switch (n)
        {
        case 1:
            return " : ";
        case 2:
            return "] [";
        case 3:
            return "> <";
        case 4:
            return "   ";
        default:
            throw std::out_of_range("Torso is out of range");
        }
    }
    string base_opt(int n)
    {
        switch (n)
        {
        case 1:
            return " : ";
        case 2:
            return "\" \"";
        case 3:
            return "___";
        case 4:
            return "   ";
        default:
            throw std::out_of_range("Base is out of range");
        }
    }

}
