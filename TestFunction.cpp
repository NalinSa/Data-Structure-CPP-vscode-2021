#ifndef _CP_PAIR
#define _CP_PAIR
#include <iostream>
namespace CP {
    template <typename A1, typename A2>
    class pair {
        public:
            A1 first;
            A2 second;

            pair() : first(), second() {}
            pair(const A1 & a1, const A2 &a2) : first(a1), second(a2) {}

            bool operator<(const pair<A1,A2> & other) const {
                if (this->first == other.first){
                    return (this->second<other.second);
                }
                else return (this->first<other.first);
            }
    };
}

#endif