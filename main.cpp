#include <iostream>
#include <vector>
#include <random>
#include <ctime>
#include <chrono>
#include <ratio>


/* IntSubDynamic
 * This is a dynamic implementation of the longest increasing sub-sequence problem.
 * Pre-condition: an initialized vector of integers is received as input
 * Post-condition:
 */
void IntSubDynamic (std::vector<int> list) {
    // beginning millisecond count for finding correct subsequence
    std::chrono::high_resolution_clock::time_point startSeq = std::chrono::high_resolution_clock::now();

    // measuring time for the size, it is shorter since it is predetermined with a vector
    std::vector<std::vector<int>> tab2Row;          // 2-dimensional vector for tabloid 2
    bool continueTabloidCheck = false;
    bool noConnections;
    for (int i = 0; i < list.size(); i++) {
        noConnections = true;
        std::vector<int> tab2column;
        tab2column.push_back(list.at(i));               // adding a column for each element
        for (int j = i + 1; j < list.size(); j++) {
            if (list.at(j) > list.at(i)) {
                noConnections = false;
                continueTabloidCheck = true;        // there are connections available (not in reverse order)
                tab2column.push_back(list.at(j));
            }
        }
        if (noConnections) tab2column.push_back(-1);
        tab2Row.push_back(tab2column);
    }

    if (continueTabloidCheck == false) {
        std::cout << "List in reverse order (Never increasing)" << std::endl;
    }
    else {
        std::vector<int> bigSubSequence = {0};
        for (int i = 0; i < list.size(); i++) {                // indexes all rows of the 2nd tabloid
            for (int j = 1; j < tab2Row.at(i).size(); j++) {   // indexes all connections of the 2nd tabloid
                std::vector<int> nextSubSequence;              // moving through all tabloids until -1 (no continuation)
                nextSubSequence.push_back(tab2Row.at(i).at(0));
                int nextElement = tab2Row.at(i).at(j);         // queuing the first element in the tab2'
                while (nextElement != -1) {
                    nextSubSequence.push_back(nextElement);
                    for (int k = 0; k < list.size(); k++) {
                        if (tab2Row.at(k).at(0) == nextElement) {
                            nextElement = tab2Row.at(k).at(1);
                            break;
                        }
                    }
                }
                if (nextSubSequence.size() > bigSubSequence.size()){
                    bigSubSequence = nextSubSequence;
                }
            }
        }
        // ending the sequence millisecond time count
        std::chrono::high_resolution_clock::time_point endSeq = std::chrono::high_resolution_clock::now();

        // outputting results
        std::cout << "List : {" << std::flush;
        std::cout << list.at(0) << std::flush;
        for (int i = 1; i < list.size(); i++){
            std::cout << ", " << list.at(i) << std::flush;
        }
        std::cout << "}" << std::endl;
        std::cout << "Longest subsequence: { " << std::flush;
        for (int i = 0; i < bigSubSequence.size(); i++) {
            std::cout << bigSubSequence.at(i) << " ";
        }
        // measuring time for the size, it is shorter since it is predetermined with a vector
        std::chrono::high_resolution_clock::time_point startSize = std::chrono::high_resolution_clock::now();
        std::cout << "}  size : " << bigSubSequence.size() << std::endl;
        std::chrono::high_resolution_clock::time_point endSize = std::chrono::high_resolution_clock::now();

        std::chrono::duration <double, std::milli> seqTime = endSeq - startSeq;
        std::cout << "Time to determine correct subsequence: " << seqTime.count() << " milliseconds" << std::endl;
        std::chrono::duration <double, std::milli> sizeTime = endSize - startSize;
        std::cout << "Time to determine subsequence's size: " << sizeTime.count() << " milliseconds" << std::endl;
        std::cout << std::endl;
    }
}


/* IntSubRecursive
 * This is a dynamic implementation of the longest increasing sub-sequence problem.
 * Pre-condition: an initialized vector of integers is received as input
 * Post-condition: the vector is passed and split returning the biggest increasing sequence
 *//*
std::vector<int> IntSubRecursive (std::vector<int> list){
    std::vector<int> bigSequence = {};
    std::vector<int> testSequence1;
    std::vector<int> testSequence2;

    for (int i = 0; i < list.size(); i++){
        bool fill1 = false;
        bool fill2 = false;
        testSequence1.push_back(list.at(i));
        testSequence2.push_back(list.at(i));
        for (int j = i+1; j < list.size(); j++){
            if (list.at(j) > list.at(i)){
                testSequence1.push_back(list.at(j));
                fill1 = true;
            }
            if (fill1 = )
        }

        IntSubRecursiveHelper(bigSequence);
    }
}

std::vector<int> InSubRecursiveHelper (std::vector<int> list, std::vector<int> sequence){
    if (sequence.size() == 1){           // if no connections
        return sequence;
    }
}*/


int main() {
    std::vector<int> bi = {69,21,201,91,30,20,33,3,80,19,76,21,10,11,2,44,9};
    std::cout << "Problem 1. i." << std::endl;
    IntSubDynamic(bi);

    std::vector<int> bii = {29,21,51,60,84,24,44,8,59,63,76,69,83,89,52,2};
    std::cout << "Problem 1. ii." << std::endl;
    IntSubDynamic(bii);

    std::vector<int> biii;
    std::random_device dev;
    std::mt19937 rng(dev());
    std::uniform_int_distribution<std::mt19937::result_type> rand(1, 256);
    for (int i = 0; i < 1000; i++){
        biii.push_back(rand(rng));
    }
    std::cout << "Problem 1. iii." << std::endl;
    IntSubDynamic(biii);

    return 0;
}
