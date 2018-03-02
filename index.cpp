#include "hdr.h"

int main(){
    std::cin >> userString;
    boost::algorithm::to_lower(userString);
    phonetic(userString);
    std::cout<<'\n'<<"Input: "<<userString<<'\n'<<"Output: "<<outputString<<'\n';
}