#include <LifxData.h>

namespace lifxdata{
LifxData::LifxData(int a, int b) {
	this->valA = a;
	this->valB = b;
    }

int LifxData::LifxData::Add() {
	int sum;
	sum = this->valA + this->valB;
	return sum;
    }

LifxData::~LifxData() = default;
}
    
/*
LifxData::LifxData() {
    
}

LifxData::~LifxData() = default;

int main () {
    
}

class LifxData {
public:
    LifxData();

    virtual ~LifxData();
    
*/
