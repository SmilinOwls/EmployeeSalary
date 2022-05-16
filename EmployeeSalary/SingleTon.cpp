#include "SingleTon.h"

SingleTon::SingleTon()
{
    prototypes = { {"Daily",new Daily()},{"Hourly",new Hourly()},{"Product",new Product()},
    {"Manager",new Manager()} };
}

SingleTon::~SingleTon() { if (instance) delete instance; instance = NULL; }

SingleTon* SingleTon::getInstance() { if (!instance) instance = new SingleTon(); return instance; }