#include "PmergeMe.hpp"
#include <algorithm>
#include <ctime>
#include <deque>

int main(int argc, char *argv[])
{
    if (argc < 2)
    {
        std::cout << "Error" << std::endl;
        return 1;
    }

    std::clock_t start = std::clock();
    std::vector<int> vect;
    std::vector<int> ret_vect = merge_insertion_sort(vect, argc, argv);
    std::clock_t end = std::clock();

    double elapsed_time = double(end - start) / CLOCKS_PER_SEC;
    std::cout << "Elapsed time: " << elapsed_time << " seconds\n";
    std::cout << "vect : ";
    for(auto it = ret_vect.begin();it!= ret_vect.end();it++)
        std::cout << *it << " ";

    std::clock_t start1 = std::clock();
    std::deque<int> deque;
    std::deque<int> ret_deque = merge_insertion_sort(deque, argc, argv);
    std::clock_t end1 = std::clock();
    double elapsed_time1 = double(end1 - start1) / CLOCKS_PER_SEC;
    std::cout << "\nElapsed time: " << elapsed_time1 << " seconds\n";
    std::cout << "deque : ";
    for(auto it = deque.begin();it!= deque.end();it++)
        std::cout << *it << " ";
}