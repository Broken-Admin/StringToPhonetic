#include <iostream>
#include <stdio.h>
#include <string>
#include <boost/algorithm/string.hpp> 
std::string userString;
std::string outputString;

void phonetic(std::string inputString){
    for(int itterator=0;itterator<inputString.length();itterator++){
        if(itterator!=0){
            switch(int(inputString[itterator])){
                case  97 | 65: outputString=outputString+" Alpha"; break;
                case  98 | 66: outputString=outputString+" Bravo"; break;
                case  99 | 67: outputString=outputString+" Charlie"; break;
                case 100 | 68: outputString=outputString+" Delta"; break;
                case 101 | 69: outputString=outputString+" Echo"; break;
                case 102 | 70: outputString=outputString+" Foxtrot"; break;
                case 103 | 71: outputString=outputString+" Golf"; break;
                case 104 | 72: outputString=outputString+" Hotel"; break;
                case 105 | 73: outputString=outputString+" India"; break;
                case 106 | 74: outputString=outputString+" Juliet"; break;
                case 107 | 75: outputString=outputString+" Kilo"; break;
                case 108 | 76: outputString=outputString+" Lima"; break;
                case 109 | 77: outputString=outputString+" Mike"; break;
                case 110 | 78: outputString=outputString+" November"; break;
                case 111 | 79: outputString=outputString+" Oscar"; break;
                case 112 | 80: outputString=outputString+" Papa"; break;
                case 113 | 81: outputString=outputString+" Qubec"; break;
                case 114 | 82: outputString=outputString+" Romeo"; break;
                case 115 | 83: outputString=outputString+" Sierra"; break;
                case 116 | 84: outputString=outputString+" Tango"; break;
                case 117 | 85: outputString=outputString+" Uniform"; break;
                case 118 | 86: outputString=outputString+" Victor"; break;
                case 119 | 87: outputString=outputString+" Whisky"; break;
                case 120 | 88: outputString=outputString+" X-ray"; break;
                case 121 | 89: outputString=outputString+" Yankee"; break;
                case 122 | 90: outputString=outputString+" Zulu"; break;
            }
        }
        else{
            switch(int(inputString[itterator])){
                case  97 | 65: outputString=outputString+"Alpha"; break;
                case  98 | 66: outputString=outputString+"Bravo"; break;
                case  99 | 67: outputString=outputString+"Charlie"; break;
                case 100 | 68: outputString=outputString+"Delta"; break;
                case 101 | 69: outputString=outputString+"Echo"; break;
                case 102 | 70: outputString=outputString+"Foxtrot"; break;
                case 103 | 71: outputString=outputString+"Golf"; break;
                case 104 | 72: outputString=outputString+"Hotel"; break;
                case 105 | 73: outputString=outputString+"India"; break;
                case 106 | 74: outputString=outputString+"Juliet"; break;
                case 107 | 75: outputString=outputString+"Kilo"; break;
                case 108 | 76: outputString=outputString+"Lima"; break;
                case 109 | 77: outputString=outputString+"Mike"; break;
                case 110 | 78: outputString=outputString+"November"; break;
                case 111 | 79: outputString=outputString+"Oscar"; break;
                case 112 | 80: outputString=outputString+"Papa"; break;
                case 113 | 81: outputString=outputString+"Qubec"; break;
                case 114 | 82: outputString=outputString+"Romeo"; break;
                case 115 | 83: outputString=outputString+"Sierra"; break;
                case 116 | 84: outputString=outputString+"Tango"; break;
                case 117 | 85: outputString=outputString+"Uniform"; break;
                case 118 | 86: outputString=outputString+"Victor"; break;
                case 119 | 87: outputString=outputString+"Whisky"; break;
                case 120 | 88: outputString=outputString+"X-ray"; break;
                case 121 | 89: outputString=outputString+"Yankee"; break;
                case 122 | 90: outputString=outputString+"Zulu"; break;
            }
            printf("Test");
        }
    }
}