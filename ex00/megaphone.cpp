#include <iostream>

int     main(int argc, char **argv)
{
        int x;
        int y; 

        x = 1;
        y = 0;
        if (argc == 1)
                return(std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n", 0);
        while(argv[x])
        {
                y = 0;
                while(argv[x][y])
                {
                        if(isalpha(argv[x][y]))
                        {
                                std::cout<< (char)toupper(argv[x][y]);
                        }
                        else
                                std::cout<< argv[x][y];
                        y++;
                }
                x++;
                if(x < argc)
                        std::cout<<' ';
                else
                        std::cout<<'\n';
        }
}