#include <string>
#include <iostream>
#include <map> 
class RepeatAlphabet{
    public:
        RepeatAlphabet();
        void RepeatedAlphabet();
    private:
        void CheckAlphabet();
        void PrintAlphabet();
        std::map<char,int> dbAlphabet{};
        std::string input{};
    /*
        uint8_t MAX_ALPHABET = 26;
        bool dbAlphabet[MAX_ALPHABET]{false};
        bool dbRepeated[MAX_ALPHABET]{false};
        std::string input;
    */
};