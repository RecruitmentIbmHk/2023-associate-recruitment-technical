#include <iostream>
#include <sstream>
#include <string>
#include <vector>
#include <iterator>

int main()
{
    //get input
    int totalNumTshirts;
    std::vector<std::string> TshirtsAvailable;
    int numOfShirtRequest;
    std::vector<std::string> TshirtsRequest;

    //number of t shirts
    std::cin >> totalNumTshirts;

    //put t shirts available into a string vector
    
    std::string tshirtAvailableString;
    
    std::cin >> tshirtAvailableString;

    std::stringstream TshirtAvailableSS(tshirtAvailableString);
    std::string temp;
    while (std::getline(TshirtAvailableSS, temp, ' ')){
        TshirtsAvailable.push_back(temp);
    }

    //number of request
    
    std::cin >> numOfShirtRequest;

    //string of requests

    std::string tshirtRequestString;
    
    std::cin >> tshirtRequestString;

    std::stringstream TshirtRequestSS(tshirtRequestString);
    std::string temp;
    while (std::getline(TshirtRequestSS, temp, ' ')){
        TshirtsRequest.push_back(temp);
    }

    

    return 0;
}
