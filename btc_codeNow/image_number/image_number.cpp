#include <iostream>
#include <cstdint>
#include <iostream>
// uint64_t convertNumToImage(){

//     std::string image = ;

//     return image
// }

int main()
{
    int nb = 101; // nb = number
    std::string list[nb];
    list[100] = "message : be a strong man, take your adventurous life, make your dream come true, have a great career, live the wonderful life befor you become dust and sand";
    list[0] = "egg";
    list[1] = "iron nail";
    list[2] = "pirate's hand";
    list[3] = "lips";
    list[4] = "chair, seat";
    list[5] = "hand"; //?
    list[6] = "lock";
    list[7] = "hammer";
    list[8] = "roly-poly toy";
    list[9] = "flag";

    list[10] = "messi";
    list[11] = "chopsticks";
    list[12] = "harp";
    list[13] = "B = bitcoin";
    list[14] = "H = petronas twin tower (kula lampur - malaysia)";
    list[15] = "$ = money";
    list[16] = "teapot"; 
    list[17] = "triangle ruler";
    list[18] = "18+ sexy girl";
    list[19] = "safety pin";
    
    list[20] = "snail";
    list[21] = "trowel"; //new
    list[22] = "F = caliper" ; // new
    list[23] = "duck";
    list[24] = "mantis";
    list[25] = "the scale ";
    list[26] = "joker's hat";
    list[27] = "clothes hanger";
    list[28] = "bicyle";
    list[29] = "cao cát";

    list[30] = "spider";
    list[31] = "toothbrush";
    list[32] = "hiiu"; //new
    list[33] = "flock of storks";
    list[34] = "buffalo's head";
    list[35] = "scissor";
    list[36] = "elephant"; // new 
    list[37] = "reindeer's face"; //new 
    list[38] = "crab";
    list[39] = "scorpion"; 
    
    list[40] = "small truck";
    list[41] = "boat";
    list[42] = "chicken's head";
    list[43] = "";
    list[44] = "camel (camel's back)";
    list[45] = "";
    list[46] = "";
    list[47] = "mouse"; // mouse
    list[48] = "";
    list[49] = "chameleon"; 
    
    list[50] = "";
    list[51] = "pi"; //new
    list[52] = "heart";
    list[53] = "jellyfish"; 
    list[54] = "vn";
    list[55] = "river";
    list[56] = "";
    list[57] = "fan"; // notice
    list[58] = "";
    list[59] = ""; // swim
    
    list[60] = "headphone";
    list[61] = "";
    list[62] = "kowtow = bow down";
    list[63] = "key";
    list[64] = "copper bar"; //?
    list[65] = "tank"; // new
    list[66] = "eyes";
    list[67] = "shrimp"; 
    list[68] = "";
    list[69] = "bagua = bát quái";
    
    list[70] = "golf stick";
    list[71] = "";
    list[72] = "n"; // new
    list[73] = "";
    list[74] = "A"; // new
    list[75] = "";
    list[76] = "bún spoon";
    list[77] = "gun"; 
    list[78] = "ant"; // new
    list[79] = "dog sit"; 
    
    list[80] = "monkey's face"; // ?
    list[81] = "glasses"; //notice
    list[82] = "motobike"; //?
    list[83] = "butterfly"; //
    list[84] = "tree"; //new
    list[85] = "bow tie";
    list[86] = "";
    list[87] = "mosquito's face"; // new
    list[88] = "car = bugatti";
    list[89] = "";
    
    list[90] = "turtle";
    list[91] = "";
    list[92] = "baby";
    list[93] = "bee"; 
    list[94] = "";
    list[95] = "";
    list[96] = "%";
    list[97] = "";
    list[98] = "moon";
    list[99] = "sun";

    int counter = 0;
    for (int i = 0; i < nb; i++)
    {
        // std::cout << list[i];
        if( list[i] == "" ){
            std::cout << "\n list["<<i<<"]";
            counter++;
        }
    }
    std::cout << "\n counter : " << counter ; 
    
    printf("\n");

    // inputNumber 
    std::string number;
    std::cout << "\ninput number : ";
    getline (std::cin, number);
    std::cout << "\nyour number is : " << number;
    std::cout << "\nlength is : " << number.length();


    // splitNumber
    int startIndex = 0;
    int len = 2;
    std::string testNumber = number.substr(startIndex, len);
    std::cout << "\ntest : " << testNumber;
    
    return 0;

}
