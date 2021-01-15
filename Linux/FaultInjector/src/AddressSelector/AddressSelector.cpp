#include "AddressSelector.h"
#include<vector>
#include "../FunctionObject/FunctionObject.h"

using namespace std;


vector<unsigned long int> AddressSelector(vector<FunctionObject> &FunctionObjects){

    

    int index, i;
    for(i = 0; i < FunctionObjects.size(); i++)
        if(FunctionObjects[i].getname() == "main")
            index = i;
    
    vector<unsigned long int> addresses;
    

    //This should be somewhat random
    addresses.emplace_back(FunctionObjects[index].getaddresses()[5]);
    addresses.emplace_back(static_cast<unsigned long int>(0x4005fc));


    return addresses;


}