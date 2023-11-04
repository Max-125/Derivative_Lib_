#include <iostream>
#include <windows.h>
#include <cmath>
#include <string>
#include <iomanip>

int main()
{
    double ch{}, num = 0;
    double degree = 0 ;
    std :: string constX = "x";
    std::string numE = "e^x";
    double result = 0;
    system("COLOR D");

    while (ch != 10 )
    {
        std::cout << "\n";
        std::cout << "\t_________________DERIVATE_LIB_________________";
        std::cout << "\nNUM\tType of Derivate\tDescription";
        std::cout << "\n1)\tX\t\t\tYou can derivate of X";

        std::cout << "\n2)\tSqrt(X)\t\t\tYou can find derivate of Sqrt(X)";

        std::cout << "\n3)\te^x\t\t\tYou can find derivate of e^x" ;

        std :: cout << "\n4)\t1/x\t\t\tYou can find derivate of 1/x";

        std::cout << "\n5)\tx^n\t\t\tYou can find derivate of x^n";

        std::cout << "\n6)\t1/x^n\t\t\tYou can find derivate of 1/x^n";

        std :: cout << "\n7)\tln(x)\t\t\tYou can find derivate of ln(x)";

        std::cout << "\n8)\ta^x\t\t\tYou can find derivate of a^x";

        std::cout << "\n9)\tlog_a^x\t\t\tYou can find derivate of log_a^x";

        std :: cout << "\n10)\tsin_x\t\t\tYou can find derivate of sin_x";

        std::cout << "\n11)\tcos_x\t\t\tYou can find derivate of cos_x";

        std :: cout << "\n12)\ttg_x\t\t\tYou can find derivate of tg_x";

        std::cout << "\n13)\tctg_x\t\t\tYou can find derivate of ctg_x";

        std::cout << "\n14)\tarcsin_x\t\tYou can find derivate of arcsin_x";

        std::cout << "\n15)\tarccos_x\t\tYou can find derivate of arccos_x";

        std::cout << "\n16)\tarctg_x\t\t\tYou can find derivate of arctg_x";
      
        std::cout << "\n17)\tcosec_x\t\t\tYou can find derivate of cosec_x";

        std::cout << "\n18)\tarcsec_x\t\tYou can find derivate of arcsec_x";

        std :: cout << "\n19)\tarccosec_x\t\tYou can find derivate of arccosec_x"; 

        //hyperbolic functions
        std::cout << "\n20)\tsh_x\t\t\tYou can find derivate of ch_x";

        std::cout << "\n21)\tch_x\t\t\tYou can find derivate of sh_x";

        std::cout << "\n22)\tth_x\t\t\tYou can find derivate of th_x";

        std::cout << "\n23)\tsech_x\t\t\tYou can find derivate of sech_x";

        std::cout << "\n24)\tcth_x\t\t\tYou can find derivate of cth_x";

        std::cout << "\n25)\tcsch_x\t\t\tYou can find derivate of csch_x";

        std::cout << "\n26)\tarsh_x\t\t\tYou can find derivate of arsh_x";

        std::cout << "\n27)\tarch_x\t\t\tYou can find derivate of arch_x";

        std::cout << "\n28)\tarth_x\t\t\tYou can find derivate of arth_x";

        std::cout << "\n29)\tarsech_x\t\tYou can find derivate of arsech_x";

        std::cout << "\n30)\tarcth_x\t\t\tYou can find derivate of arcth_x";

        std::cout << "\n31)\tarcsch_x\t\tYou can find derivate of arcsch_x";

        std::cout << "\n32)\tExit";
        std::cout << "\nENTER YOUR CHOISE: ";
        std::cin >> ch;

        if (ch > 32 ||  ch < 1 || ch != (double)ch)
        {
            std::cout << "WRONG INPUT\n";
            std::cin.clear();
            main();
            break;
        }

        if (ch == 1)
        {
            std::cout << "\nENTER X : ";
            std::cin >> constX;
            if (constX != (std::string)constX)
            {
                std::cout << "WRONG INPUT\n";
                std::cin.clear();
                break;
            }
            std::cout << "\n" << "Derivate of X is = " << 1 << std ::endl;
            constX = "x";
            main();
        }

        else if (ch == 2 )
        { 
            std::cout << "\nENTER ANY NUMBER : ";
            std::cin >> num;
            if (num != (double)num)
            {
                std :: cout << "WRONG INPUT\n";
                std::cin.clear();
                break;
            }
            std::cout << "\n" << "DERIVATE OF Sqrt(X)" << 1 / 2 * std :: sqrt(num) <<  std::endl;
            num = 0;
            main();
        }

        else if (ch == 3)
        {
            std::cout << "\nENTER e^x (math constant) : ";
            std::cin >> numE;
            if (numE != (std :: string)numE)
            {
                std::cout << "WRONG INPUT\n";
                std::cin.clear();
                break;
            }
            std::cout << "\n" << "Derivate of e^x is = " << "e^x " << std::endl;
            numE = "e^x";
            main();
        }

        else if (ch == 4)
        {
            std::cout << "\nENTER x : ";
            std::cin >> constX;
            if (constX != (std :: string)constX)
            {
                std::cout << "WRONG INPUT\n";
                std::cin.clear();
                break;
            }
            std::cout << "\n" << "Derivate of 1/x is = " <<  -1.0 << "/" << "x^2" << std::endl;
            main();
        }

        else if (ch == 5 )
        {
            std::cout << "\nENTER x : ";
            std::cin >> constX;
            std::cout << "\nENTER DEGREE : ";
            std::cin >> degree;
            if (constX != (std :: string)constX || degree != (double)degree)
            {
                std::cout << "WRONG INPUT\n";
                std::cin.clear();
                break;
            }
            std::cout << "\nDERIVATE OF "<<  "x^" << degree << " is = " << degree << "x^" << degree - 1 <<std :: endl;
            constX = "x";
            degree = 0;
            main();
        }

        else if (ch == 6)
        {
            std::cout << "\nENTER x : ";
            std :: cin >> constX;
            std::cout << "\nENTER DEGREE: ";
            std :: cin >> degree;
            if (constX != (std::string)constX || degree != (double)degree)
            {
                std::cout << "WRONG INPUT\n";
                std::cin.clear();
                break;
            }
            std::cout << "\nDERIVATE OF " << "1/x^" << degree << " = " << -degree << "/" << "x^" << degree + 1 << std :: endl;
            main();
        }

        else if (ch == 7)
        {
            std::cout << "\nENTER x : ";
            std::cin >> constX;
            if (constX != (std::string)constX )
            {
                std::cout << "WRONG INPUT\n";
                std::cin.clear();
                break;
            }
            std::cout << "\nDERIVATE OF " << "ln(x) = " << 1 << "/" << "x" << std :: endl;
            main();
        }

        else if (ch == 8)
        {
            std::cout << "\nENTER NUMBER: ";
            std::cin >> num;
            std::cout << "\nENTER x : ";
            std::cin >> constX;
            if (num != (double)num || constX != (std::string)constX)
            {
                std::cout << "WRONG INPUT\n";
                std::cin.clear();
                break;
            }
            std::cout << "\nDERIVATE OF " << num << "^x" << " = " << num << "^x * ln(" << num << ")";
            main();
        }

        else if (ch == 9 )
        {   
            std::cout << "\nENTER VALUE BASE OF LOGARITHM : ";
            std::cin >> num;
            std::cout << "\nEnter x : ";
            std::cin >> constX;
            if (num != (double)num || constX != (std::string)constX)
            {
                std::cout << "WRONG INPUT\n";
                std::cin.clear();
                break;
            }
            std::cout << "\nDERIVATE OF log" << num << "^x" << " is = " << 1 << "/" << "x*ln" << num << std :: endl;
            main();
        }

        else if (ch == 10)
        {
            std::cout << "\nDERIVATE OF sin_x is = " << "cos_x" << std :: endl;
            main();
        }

        else if (ch == 11)
        {
            std::cout << "\nDERIVATE OF cos_x is = " << "-sin_x" << std :: endl;
            main();
        }

        else if (ch == 12)
        {
            std::cout << "\nDERIVATE OF tg_x is = " << 1 << "/" << "cos^2_x" << std::endl;
            main();
        }

        else if (ch == 13)
        {
            std::cout << "\nDERIVATE OF ctg_x is = " << -1 << "/" << "sin^2_x" << std::endl;
            main();
        }

        else if (ch == 14 )
        {
            std::cout << "\nDERIVATE OF arcsin_x is = " <<  1 <<  "/" << "sqrt(1 - x^2)" << std::endl;
            main();
        }

        else if (ch == 15)
        {
            std :: cout << "\nDERIVATE OF arccos_x is = " << -1 << "/" << "sqrt(1 - x^2)" << std::endl;
            main();
        }

        else if (ch == 16)
        {
            std::cout << "\nDERIVATE OF arcctg_x is = " << 1 << "/" << "1 + x^2" << std::endl;
            main();
        }

        else if (ch == 17 )
        {
            std::cout << "\nDERIVATE OF cosec_x is = " << "-ctg_x cosec_x" << std::endl;
            main();
        }

        else if (ch == 18 )
        {
            std::cout << "\nDERIVATE OF arcsec_x is = " << "1/|x|sqrt(x^2 - 1)";
            main();
        }
            
        else if (ch == 19)
        {
            std::cout << "\nDERIVATE OF arccosec_x is = " << "-1/|x|sqrt(x^2 - 1)";
            main();
        }

        else if(ch == 20)
        {
             std::cout << "\nDERIVATE OF sh_x is = " << "ch_x";
             main();
        }

        else if (ch == 21)
        {
            std :: cout << "\nDERIVATE OF sh_x is = " << "sh_x";
            main();
        }

        else if (ch == 22)
        {
            std::cout << "\nDERIVATE OF th_x is = " << "sch^2_x";
            main();
        }

        else if (ch == 23 )
        {
            std::cout << "\nDERIVATE OF sech_x is = " << "th_x sech_x";
            main();
        }

        else if (ch == 24)
        {
            std::cout << "\nDERIVATE OF cth_x is = " << "csch^2_x";
            main();
        }

        else if (ch == 25)
        {
            std::cout << "\nDERIVATE OF csch_x is = " << "cth_x csch_x";
            main();
        }

        else if (ch == 26)
        {
            std::cout << "\nDERIVATE OF arsh_x is = " << "1/sqrt(x^2 + 1)";
            main();
        }

        else if (ch == 27)
        {
            std::cout << "\nDERIVATE OF arch_x is = " << "-1/sqrt(x^2 - 1)";
            main();
        }

        else if (ch == 28)
        {
            std::cout << "\nDERIVATE OF arth_x is = " << "1/1 - x^2";
            main();
        }

        else if (ch == 29)
        {
            std::cout << "\nDERIVATE OF arsech_x is = " << "1/ x sqrt(1 - x^2)";
            main();
        }

        else if (ch == 30)
        {
            std::cout << "\nDERIVATE OF arcth_x is = " << "1 / 1 - x^2";
            main();
        }

        else if (ch == 31)
        {
            std::cout << "\nDERIVATE OF arcsch_x is = " << " -1 / |x|sqrt(1 + x^2)";
            main();
        }

        else if (ch == 32 )
        {
            break;
        }
        if (ch == 3 )
        {
            std::cout << "\nExiting...";
            Sleep(1500);
        }
        system("pause");
        return 0;
    }
}






