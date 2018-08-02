#pragma once

#include "Pair.h"
#include <string>

/*template <class T1, class T2>
class StringValuePair : public Pair<T1, T2>
{
public:
    StringValuePair() {}

}; */

template <class T>
class StringValuePair : public Pair<std::string, T>
{
public:
    StringValuePair(std::string first, T second) : Pair<std::string, T>(first,second) {}

};