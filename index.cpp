#include "hdr.h"

int main(){
    printf("Enter a string!")
    std::cin >> userString;
    phonetic(userString);
    std::cout<<'\n'<<"Input: "<<userString<<'\n'<<"Output: "<<outputString<<'\n';
}