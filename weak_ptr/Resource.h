#pragma once

#include <memory>

class Resource
{
public:
    std::weak_ptr<Resource> m_ptr;
    Resource();
    ~Resource();
};