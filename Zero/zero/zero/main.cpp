//
//  main.cpp
//  zero
//
//  Created by 张权威 on 2020/3/13.
//  Copyright © 2020 张权威. All rights reserved.
//

//#include <iostream>
//#include <string>
//using namespace std;
//
//class Person
//{
//private:
//    string strName;
//    string strAddress;
//public:
//    Person() = default;
//    Person(const string &name, const string &add)
//    {
//        strName = name;
//        strAddress = add;
//    }
//    Person(std::istream &is) {  is >> *this; }
//public:
//    string getName() const { return strName; }
//    string getAddress() const { return strAddress; }
//    std::istream &read(std::istream &is, Person &per)
//        {
//            is >> per.strName >> per.strAddress;
//            return is;
//        }
//    std::ostream &print(std::ostream &os, const Person &per)
//        {
//            os << per.getName() << per.getAddress();
//            return os;
//        }
//};

#include <iostream>
#include <string>
class Person{

friend std::istream &read(std::istream &is, Person &per);
public:
    Person() = default;
    Person(const std::string &name, const std::string &add)
    {
        strName = name;
        strAddress = add;
    }
    Person(std::istream &is) { read(is, *this); }

    std::string getName() const { return strName; }
    std::string getAddress() const { return strAddress; }

private:
    std::string strName;
    std::string strAddress;

};

std::istream &read(std::istream &is, Person &per)
{
    is >> per.strName >> per.strAddress;
    return is;
}
std::ostream &print(std::ostream &os, const Person &per)
{
    os << per.getName() << per.getAddress();
    return os;
}

//read 和 print不是成员函数，只是跟这个类相关的函数，所以别放class里面，放外面行了
//实际你用起来肯定是把这个类放到一个头文件里，别在头

