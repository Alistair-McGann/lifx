#ifndef LIFXDATA_H
#define LIFXDATA_H

namespace lifxdata{
class LifxData {
    private:
	int valA;
	int valB;
    public:
	LifxData(int a, int b);
	int Add();
    
	virtual ~LifxData();
};    
}
 
#endif // LIFX_H 
