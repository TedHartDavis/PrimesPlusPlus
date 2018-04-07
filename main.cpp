#include <iostream>
#include <sstream>
//#include <sstream>


// Stolen from BasiCalc
int getnumber ()
{
    std::string placeholder;
    getline(std::cin, placeholder);
    int number = atoi(placeholder.c_str());
    return number;
}

// Arguments aaaa
int main(int argc, char **argv)
{
    int lower_bound, upper_bound;

    //std::cout << argv[1] << std::endl;
    //std::cout << argc << " arguments" << std::endl;

    if (argc != 3)
    {
        switch (argc)
        {
            case 0:
                {
                    std::cout << "No arguments whatsoever, how?" << std::endl;
                    break;
                }
            case 1:
                {
                    std::cout << "No arguments" << std::endl;
                    break;
                }
            case 2:
                {
                    std::cout << "One argument not supported, ignoring" << std::endl;
                    break;
                }
            default:
                {
                    std::cout << "Too many arguments, ignoring";
                }
        }
        std::cout << "Enter lower bound" << std::endl;
        std::cout << "Enter upper bound" << std::endl;
        lower_bound = getnumber();
        upper_bound = getnumber();
    }
    else
    {
        std::istringstream ss;
        std::istringstream ss1(argv[1]);
        std::istringstream ss2(argv[2]);
        std::string holdervalue;
        std::cout << "Two arguments, interpreting" << std::endl;
        std::cout << argv[1] << "Interpreting as lower bound: " << std::endl;
        //ss << argv[1];
//        argv[1] >> ss;
        //lower_bound << ss;
        ss1 >> lower_bound;
        //ss << argv[2];
        std::cout << argv[2] << "Interpreting as upper bound: " << std::endl;
        //upper_bound << ss2;
        ss2 >> upper_bound;
        //upper_bound << std::strtoi(argv[2]);
        //getline(std::cin, ss);
//        lower_bound << ss1;
        std::cout << lower_bound << "Lower bound" << std::endl;
        std::cout << upper_bound << "Upper bound" << std::endl;
    }

    if (lower_bound < 1)
    {
        std::cout << "Lower bound too low" << std::endl;
        return 1;
    }
    else if (upper_bound <= lower_bound)
    {
        std::cout << "Upper bound too low" << std::endl;
    }
    else
    {
        std::cout << "Good" << std::endl;
    }

    int i;
    int j;
    bool NotPrime;

    for (i=lower_bound; i<=upper_bound; i++)
    {
        NotPrime = false;
        // If even, then definitely not prime
        if (i%2==0)
        {
            continue;
        }
        else
        {
            for(j=2;j<(i/2);j++)
            {
                if (j%2==0)
                {
                    continue;
                }
                else if (i%j==0)
                {
                    NotPrime = true;
                    break;
                }
            }
            if(! NotPrime)
            {
                std::cout << i <<  " appears to be prime" << std::endl;
            }
        }
    }
}

