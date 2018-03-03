#include "hdr.h"

int main(){
    printf("Convert how many words?\n");
    std::cin >> wordAmount;
    std::string userStrings[wordAmount];
    for(int itterator=0;itterator<wordAmount;itterator++){
        printf("Enter word %i!\n", (itterator+1));
        std::cin >> userStrings[itterator];
    }
    for(int itterator=0;itterator<wordAmount;itterator++){
        phonetic(userStrings[itterator]);
        if(!(itterator+1==wordAmount)){
            outputString=outputString+"| ";
        }
    }
    std::cout<<'\n'<<"Input: ";
    for(int itterator=0;itterator<wordAmount;itterator++){
        std::cout<<userStrings[itterator]<<" ";
    }
    std::cout<<'\n'<<"Output: "<<outputString<<'\n';
}