#include "reverse_string.h"
namespace reverse_string {

// TODO: add your solution here
std::string reverse_string (std::string st){
    std::string rst;
    int si = st.size();
    for (int i = 0; i < si; i++){
        rst += st.at(st.size() - i -1);
    }

    return rst;
}

}  // namespace reverse_string
