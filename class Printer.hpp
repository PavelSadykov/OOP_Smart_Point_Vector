//
//  class Printer.hpp
//  Практическая работа 08.02.23
//
//  Created by Павел on 09.02.2023.
//

#ifndef class_Printer_hpp
#define class_Printer_hpp

#include <stdio.h>
#include <iostream>
#include <stdio.h>
#include <vector>
#include <memory>
#include "IVehicle.hpp"


namespace Engine {
    class Printer{
    public:
        Printer();
       
        void getData();
        
        private:
        std::vector<std::shared_ptr<IVehicle>>_vecSmartPoint;
        int _speed;
       
    };

}







#endif /* class_Printer_hpp */
