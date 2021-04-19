#include <regex>
#include <string>
std::string disemvowel(std::string str) {
    using namespace std;
    regex reg("[aeiouAEIOU]+");
    while (regex_search(str, reg)) {
        str = regex_replace(str, reg, "");
    }
    return str;
}