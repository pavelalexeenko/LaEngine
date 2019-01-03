#include "Type.h"


bool Type::IsIsConst() const {
    return isConst;
}

void Type::SetIsConst(bool isConst) {
    Type::isConst = isConst;
}

bool Type::IsIsPointer() const {
    return isPointer;
}

void Type::SetIsPointer(bool isPointer) {
    Type::isPointer = isPointer;
}

bool Type::IsIsPointerToConst() const {
    return isPointerToConst;
}

void Type::SetIsPointerToConst(bool isPointerToConst) {
    Type::isPointerToConst = isPointerToConst;
}

bool Type::IsIsReference() const {
    return isReference;
}

void Type::SetIsReference(bool isReference) {
    Type::isReference = isReference;
}

bool Type::IsIsReferenceToConst() const {
    return isReferenceToConst;
}

void Type::SetIsReferenceToConst(bool isReferenceToConst) {
    Type::isReferenceToConst = isReferenceToConst;
}

bool Type::IsIsFundamental() const {
    return isFundamental;
}

void Type::SetIsFundamental(bool isFundamental) {
    Type::isFundamental = isFundamental;
}

bool Type::IsIsTrivial() const {
    return isTrivial;
}

void Type::SetIsTrivial(bool isTrivial) {
    Type::isTrivial = isTrivial;
}

bool Type::IsIsIntegral() const {
    return isIntegral;
}

void Type::SetIsIntegral(bool isIntegral) {
    Type::isIntegral = isIntegral;
}

bool Type::IsIsFloatingPoint() const {
    return isFloatingPoint;
}

void Type::SetIsFloatingPoint(bool isFloatingPoint) {
    Type::isFloatingPoint = isFloatingPoint;
}

bool Type::IsIsEnum() const {
    return isEnum;
}

void Type::SetIsEnum(bool isEnum) {
    Type::isEnum = isEnum;
}

bool Type::IsIsAbstract() const {
    return isAbstract;
}

void Type::SetIsAbstract(bool isAbstract) {
    Type::isAbstract = isAbstract;
}

const std::vector<Type> &Type::GetBaseTypes() const {
    return baseTypes;
}

void Type::SetBaseTypes(const std::vector<Type> &baseTypes) {
    Type::baseTypes = baseTypes;
}

const std::vector<Field> &Type::GetFields() const {
    return fields;
}

void Type::SetFields(const std::vector<Field> &Fields) {
    Type::Fields = Fields;
}

const std::vector<Method> &Type::GetMethods() const {
    return Methods;
}

void Type::SetMethods(const std::vector<Method> &Methods) {
    Type::Methods = Methods;
}
