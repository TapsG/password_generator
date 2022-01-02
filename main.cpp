#include <iostream>
#include <vector>
#include <cstring>
#include <algorithm>
#include <string>
#include <stdlib.h>
#include <stdio.h>

std::string tama_sana (int pituus, std::vector<std::string> kaytetyt){

    std::string sana;
    std::string chars = "abcdefghijklmnopqrstuvwxyz123456789ABCDEFGHIJKLMNOPQRSTUVWXYZ!#¤%&/()=?";
    
    std::vector<char> kirjaimet (chars.begin(),chars.end());

    while(true){
        if(static_cast<int>(sana.size())<pituus){

            sana.push_back(kirjaimet.at(rand()%kirjaimet.size()));

        }else{
            if((std::find(kaytetyt.begin(),kaytetyt.end(),sana))== kaytetyt.end()){
                return sana;
            }else{
                sana.pop_back();
            }
        }
    }
}

int main(){
    std::vector<std::string> kaytetyt;
    int pituus = 0;
    while(true){
        std::cout << "Syötä pituus";
        std::cin >> pituus;
        std::string tulostus = tama_sana(pituus,kaytetyt);
        kaytetyt.push_back(tulostus);
        std::cout << tulostus <<std::endl;
    }
}
