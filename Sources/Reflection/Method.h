#pragma once

#include <string>
#include "Type.h"

class MethodParameter {
public:
    MethodParameter(const std::string& name, const Type& type);

private:
    std::string m_Name;
    Type type;
};

class Method {
public:
    Method(const QualifiedName& qName);


private:
    TypeID owner;

    bool isStatic;
    bool isVirtual;

    std::vector<MethodParameter> methodParameters;
};