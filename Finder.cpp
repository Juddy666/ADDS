#include "Finder.h"

    using namespace std;

    vector<int> Finder::findSubstrings(string s1, string s2) {

        vector<int> result(s2.size(),-1);
        size_t from = 0;
        for(size_t i = 1; i <= s2.size(); i++) {
            string index = s2.substr(0,i);
            size_t found = s1.find(index, from);
            if (found != string::npos) {
                result[i-1] = found;
                from = found;
            } else {
                break;
            }
        }
        return result;
    }

   