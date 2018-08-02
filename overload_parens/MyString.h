#include <string>

class MyString
{
private:
    std::string m_content;

public:
    MyString();
    MyString(std::string content);

    std::string operator() (int start, int length);
    const std::string operator() (int start, int length) const;
};