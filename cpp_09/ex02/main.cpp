#include "PmergeMe.hpp"
#include <algorithm>
#include <ctime>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cout << "Error" << std::endl;
        return 1;
    }
    std::clock_t start = std::clock();
    std::vector<int> vect;
    for (int i = 1;i  < argc;i++)
        vect.push_back(std::atoi(argv[i]));   
    for (size_t i = 0; i < vect.size() ; i+=2)
    {
       if (vect[i]  < vect[i + 1])
        {    
            int tmp = vect[i];
            vect[i] =  vect[i + 1];
            vect[i + 1] = tmp;
        }
    }
    std::vector<int> first_vect;
    std::vector<int> second_vect;
    for(size_t i = 0; i < vect.size() - 1; i+=2)
    {
        first_vect.push_back(vect[i]);
        second_vect.push_back(vect[i + 1]);
    }

    if (vect.size() % 2 == 1)
        second_vect.push_back(vect[vect.size() - 1]);
    insertion_sort(vect);
    for (auto it = second_vect.begin(); it != second_vect.end(); it++)
    {
        auto iterat = std::lower_bound(first_vect.begin(), first_vect.end(), *it);
        first_vect.insert(iterat, *it);
    }

    std::clock_t end = std::clock();
    double elapsed_time = double(end - start) / CLOCKS_PER_SEC;
    std::cout << "Elapsed time: " << elapsed_time << " seconds\n";
    std::cout << "Main : ";
    for(auto it = first_vect.begin();it!= first_vect.end();it++)
        std::cout << *it << " ";

    // std::cout << "\nsecond : ";
    // for(auto it = second_vect.begin();it!= second_vect.end();it++)
    //     std::cout << *it << " ";
}