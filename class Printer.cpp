//
//  class Printer.cpp
//  Практическая работа 08.02.23
//
//  Created by Павел on 09.02.2023.
//

#include "class Printer.hpp"

using namespace Engine;

Printer::Printer() {}
void Printer::getData(){
  
    _vecSmartPoint.push_back ( std::make_shared<Car>(150));
    _vecSmartPoint.push_back ( std::make_shared<Van>(130));
    _vecSmartPoint.push_back ( std::make_shared<Moto>(140));
    
        std::cout<<"{Speed of  Car/Van/Moto/ : ";
    for ( std::vector<std::shared_ptr<IVehicle>>::iterator it = _vecSmartPoint.begin() ; it!=_vecSmartPoint.end() ; ++it)
        std::cout<< (*it)->getSpeed() <<"/ ";
    std::cout<<"} ";
    
}

