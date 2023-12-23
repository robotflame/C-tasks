#include <iostream>

bool CheckSubstring(std::string firstString, std::string secondString){
    if(secondString.size() > firstString.size())
        return false;

    for (int i = 0; i < firstString.size(); i++){
        int j = 0;
        // If the first characters match
        if(firstString[i] == secondString[j]){
            int k = i;
            while (firstString[i] == secondString[j] && j < secondString.size()){
                j++;
                i++;
            }
            if (j == secondString.size())
                return true;
            else // Re-initialize i to its original value
                i = k;
        }
    }
    return false;
}

int main(){
    std::string string1;
    std::string string2;

    std::cout<<"Enter the String 1:\n";
    std::getline (std::cin,string1);
    std::cout<<"Enter the String 2:\n";
    std::getline (std::cin,string2);

    if (string1 != string2)
        std::cout <<"The strings are not equal"<<std::endl;
    else
        std::cout <<"The strings are equal"<< std::endl;


    if(CheckSubstring(string1, string2)){
        std::cout << "Last string is substring of first string \n";}
    else if(CheckSubstring(string2, string1))
        std::cout << " First string is substring of last string\n";
    else{
        std::cout << "There are no substrings \n";


    }


    return 0;
}



