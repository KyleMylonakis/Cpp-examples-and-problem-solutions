#include "MyString.h"

MyString::MyString()
{
}

MyString::MyString(std::string content) : m_content {content}
{
}

std::string MyString::operator() (int start, int length)
{
    std::string substring {};
    for (int i = start; i - start < length; ++i)
    {
        substring += m_content[i];
    }
    return substring;
}

const std::string MyString::operator() (int start, int length) const
{
    std::string substring {};
    for (int i = start; i - start < length; ++i)
    {
        substring += m_content[i];
    }
    return substring;
}