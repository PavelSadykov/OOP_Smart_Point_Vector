//
//  IVehicle.hpp
//  Практическая работа 08.02.23
//
//  Created by Павел on 14.02.2023.
//

#ifndef IVehicle_hpp
#define IVehicle_hpp
#include <string>
#include <stdio.h>
#include <iostream>


class IVehicle{
public:
    virtual int getSpeed()const = 0;
    virtual void printType() const = 0;
   
    virtual ~IVehicle(){}
};

class Car : public IVehicle{
public:
Car(int speed) : _speed(speed){}
    int getSpeed() const override{
        return _speed;
    }
   
        void printType() const override{
             std::cout<<"Car"<<std::endl;
         }
    
private:
    int _speed;
    
};

class Van: public IVehicle{
public:
    Van (int speed) : _speed(speed){}
    int getSpeed() const override{
            return _speed;
        }
    void printType() const override{
       std::cout<<"Van"<<std::endl;
    }
   
private:
    int _speed;
    
    
};

class Moto: public IVehicle{
public:
    Moto (int speed) : _speed(speed){}
    int getSpeed() const override{
        return _speed;
    }
    void printType() const override{
        std::cout<<"Moto"<<std::endl;
    }
    
  
private:
    int _speed;
    
};


#endif /* IVehicle_hpp */
