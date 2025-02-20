#ifndef __DATA_H__
#define __DATA_H__

#include <CAN.h>

#include <rdscom.hpp>

#define CAR_DATA_PROTOTYPE_ID 10

class CarData {
   public:
    CarData(ICAN &dataBus, ICAN &driveBus) {
        this->_initializeBuffer();
        this->_setupCan(dataBus, driveBus);
    }

   private:
    rdscom::DataBuffer _dataBuffer;

    void _initializeBuffer() {
        rdscom::DataPrototype proto(CAR_DATA_PROTOTYPE_ID);
        proto.addField("Drive State", rdscom::DataFieldType::UINT8);

        _dataBuffer = rdscom::DataBuffer(proto);
    }

    void _setupCan(ICAN &dataBus, ICAN &driveBus) {
        
    }
};

#endif  // __DATA_H__