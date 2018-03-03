#include <iostream>
#include <stdio.h>
#include <string>
std::string outputString;
int wordAmount;

void phonetic(std::string inputString){
    for(int itterator=0;itterator<inputString.length();itterator++){
        switch(int(inputString[itterator])){
            case  97: outputString=outputString+"Alpha "; break; // Lower Case
            case  65: outputString=outputString+"Alpha "; break; // Capital Letter

            case  98: outputString=outputString+"Bravo "; break; // Lower Case
            case  66: outputString=outputString+"Bravo "; break; // Capital Letter
            
            case  99: outputString=outputString+"Charlie "; break; // Lower Case
            case  67: outputString=outputString+"Charlie "; break; // Capital Letter
            
            case 100: outputString=outputString+"Delta "; break; // Lower Case
            case  68: outputString=outputString+"Delta "; break; // Capital Letter
            
            case 101: outputString=outputString+"Echo "; break; // Lower Case
            case  69: outputString=outputString+"Echo "; break; // Capital Letter
            
            case 102: outputString=outputString+"Foxtrot "; break; // Lower Case
            case  70: outputString=outputString+"Foxtrot "; break; // Capital Letter
            
            case 103: outputString=outputString+"Golf "; break; // Lower Case
            case  71: outputString=outputString+"Golf "; break; // Capital Letter
            
            case 104: outputString=outputString+"Hotel "; break; // Lower Case
            case  72: outputString=outputString+"Hotel "; break; // Capital Letter
            
            case 105: outputString=outputString+"India "; break; // Lower Case
            case  73: outputString=outputString+"India "; break; // Capital Letter
            
            case 106: outputString=outputString+"Juliet "; break; // Lower Case
            case  74: outputString=outputString+"Juliet "; break; // Capital Letter
            
            case 107: outputString=outputString+"Kilo "; break; // Lower Case
            case  75: outputString=outputString+"Kilo "; break; // Capital Letter
            
            case 108: outputString=outputString+"Lima "; break; // Lower Case
            case  76: outputString=outputString+"Lima "; break; // Capital Letter
            
            case 109: outputString=outputString+"Mike "; break; // Lower Case
            case  77: outputString=outputString+"Mike "; break; // Capital Letter
            
            case 110: outputString=outputString+"November "; break; // Lower Case
            case  78: outputString=outputString+"November "; break; // Capital Letter
            
            case 111: outputString=outputString+"Oscar "; break; // Lower Case
            case  79: outputString=outputString+"Oscar "; break; // Capital Letter
            
            case 112: outputString=outputString+"Papa "; break; // Lower Case
            case  80: outputString=outputString+"Papa "; break; // Capital Letter
            
            case 113: outputString=outputString+"Qubec "; break; // Lower Case
            case  81: outputString=outputString+"Qubec "; break; // Capital Letter
            
            case 114: outputString=outputString+"Romeo "; break; // Lower Case
            case  82: outputString=outputString+"Romeo "; break; // Capital Letter
            
            case 115: outputString=outputString+"Sierra "; break; // Lower Case
            case  83: outputString=outputString+"Sierra "; break; // Capital Letter
            
            case 116: outputString=outputString+"Tango "; break; // Lower Case
            case  84: outputString=outputString+"Tango "; break; // Capital Letter
            
            case 117: outputString=outputString+"Uniform "; break; // Lower Case
            case  85: outputString=outputString+"Uniform "; break; // Capital Letter
            
            case 118: outputString=outputString+"Victor "; break; // Lower Case
            case  86: outputString=outputString+"Victor "; break; // Capital Letter
            
            case 119: outputString=outputString+"Whiskey "; break; // Lower Case
            case  87: outputString=outputString+"Whiskey "; break; // Capital Letter
            
            case 120: outputString=outputString+"X-Ray "; break; // Lower Case
            case  88: outputString=outputString+"X-Ray "; break; // Capital Letter
            
            case 121: outputString=outputString+"Yankee "; break; // Lower Case
            case  89: outputString=outputString+"Yankee "; break; // Capital Letter
            
            case 122: outputString=outputString+"Zulu "; break; // Lower Case
            case  90: outputString=outputString+"Zulu "; break; // Capital Letter
        }
    }
}