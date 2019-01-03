#pragma once

#include <functional>
#include <vector>
#include "Method.h"
#include "Field.h"

class Type {
public:
    template<typename T>
    static Type CreateType();

    bool IsIsConst() const;
    void SetIsConst(bool isConst);

    bool IsIsPointer() const;
    void SetIsPointer(bool isPointer);

    bool IsIsPointerToConst() const;
    void SetIsPointerToConst(bool isPointerToConst);

    bool IsIsReference() const;
    void SetIsReference(bool isReference);

    bool IsIsReferenceToConst() const;
    void SetIsReferenceToConst(bool isReferenceToConst);

    bool IsIsFundamental() const;
    void SetIsFundamental(bool isFundamental);

    bool IsIsTrivial() const;
    void SetIsTrivial(bool isTrivial);

    bool IsIsIntegral() const;
    void SetIsIntegral(bool isIntegral);

    bool IsIsFloatingPoint() const;
    void SetIsFloatingPoint(bool isFloatingPoint);

    bool IsIsEnum() const;
    void SetIsEnum(bool isEnum);

    bool IsIsAbstract() const;
    void SetIsAbstract(bool isAbstract);

    const std::vector<Type> &GetBaseTypes() const;
    void SetBaseTypes(const std::vector<Type> &baseTypes);

    const std::vector<Field> &GetFields() const;
    void SetFields(const std::vector<Field> &Fields);

    const std::vector<Method> &GetMethods() const;
    void SetMethods(const std::vector<Method> &Methods);

private:
    bool isConst = false;
    bool isPointer = false;
    bool isPointerToConst = false;
    bool isReference = false;
    bool isReferenceToConst = false;
    bool isFundamental = false;
    bool isTrivial = false;
    bool isIntegral = false;
    bool isFloatingPoint = false;
    bool isEnum = false;
    bool isAbstract = false;

    std::vector<Type> baseTypes;
    std::vector<Field> fields;
    std::vector<Method> methods;
};

template<typename T>
Type Type::CreateType() {

    Type type;
    type.isConst = std::is_const<T>::value;
    type.isPointer = std::is_pointer<T>::value;
    type.isPointerToConst = std::is_pointer<T>::value && std::is_const<typename std::remove_pointer<T>::type>::value;
    type.isReference = std::is_reference<T>::value;
    type.isReferenceToConst = std::is_reference<T>::value && std::is_const<typename std::remove_reference<T>::type>::value;
    type.isFundamental = std::is_fundamental<T>::value;
    type.isTrivial = std::is_trivial<T>::value;
    type.isIntegral = std::is_integral<T>::value;
    type.isFloatingPoint = std::is_floating_point<T>::value;
    type.isEnum = std::is_enum<T>::value;
    type.isAbstract = std::is_abstract<T>::value;

    return type;
}
