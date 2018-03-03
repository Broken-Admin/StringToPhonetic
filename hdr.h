#include <iostream>
#include <stdio.h>
#include <string>
std::string outputString;
int wordAmount;
int itterator;
char alpha[26]={'a','b','c','d','e','f','g','h','i','j','k','l','m','n','o','p','q','r','s','t','u','v','w','x',
                'y','z'};
std::string phoneticAlpha[26]={"Alpha","Bravo","Charlie","Delta","Echo","Foxtrot","Golf","Hotel","India","Juliet","Kilo","Lima",
                 "Mike","November","Oscar","Papa","Qubec","Romeo","Sierra","Tango","Uniform","Victor","Whiskey", "X-Ray","Yankee","Zulu"};
void phonetic(std::string inputString){
    for(int letterNum=0;letterNum<inputString.length();letterNum++){
        for(itterator=0;itterator<26;itterator++){
            if(tolower(inputString[letterNum])==alpha[itterator]){
                outputString=outputString+phoneticAlpha[itterator]+" ";
            }
        }
    }
}