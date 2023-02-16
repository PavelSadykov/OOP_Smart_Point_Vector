//
//  main.cpp
//  Практическая работа 08.02.23
//
//  Created by Павел on 09.02.2023.
//

#include <iostream>
#include <algorithm>
#include <vector>
#include <cmath>
#include "class Printer.hpp"
#include <memory>
#include "IVehicle.hpp"

using namespace Engine;

int main(int argc, const char * argv[]) {

   std::shared_ptr<IVehicle>car =std::make_shared<Car>(50);
   std::cout<<"Vehicle speed : "<<car->getSpeed()<<std::endl;
    car->printType();
    std::cout<<"================"<<std::endl;
    std::shared_ptr<IVehicle>van =std::make_shared<Van>(40);
    std::cout<<"Vehicle speed : "<<van->getSpeed()<<std::endl;
    van->printType();
    std::cout<<"================"<<std::endl;
    std::shared_ptr<IVehicle>moto =std::make_shared<Moto>(30);
    std::cout<<"Vehicle speed : "<<moto->getSpeed()<<std::endl;
    moto->printType();
    std::cout<<"================"<<std::endl;
    std::cout<<std::endl;
    std::make_shared<Printer>()->getData();
    std::cout<<std::endl;
    std::cout<<std::endl;
    return 0;
}
