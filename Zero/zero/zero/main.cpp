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

/*#include <iostream>
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
}*/

//read 和 print不是成员函数，只是跟这个类相关的函数，所以别放class里面，放外面行了
//实际你用起来肯定是把这个类放到一个头文件里，别在头

// 8章

//#include <iostream>
//#include <fstream>
//#include <string>
//#include <vector>
//
//using namespace std;
//
//int main()
//{
//    ifstream in("data");
//    if(!in)
//    {
//        cerr << " error " << endl;
//        return -1;
//    }
//
//    string line;
//    vector<string> words;
//    while (getline(in, line)) { // one by one -> in >> line
//        words.push_back(line);
//    }
//
//    in.close();
//
//    vector<string>::const_iterator it = words.begin();
//    while (it != words.end()) {
//        cout << *it << endl;
//    }
//
//    return 0;
//}


/*#include <iostream>
using namespace std;

int main(int argc, char **argv)
{
    string str;
    for(int i = 0; i != argc; ++i)
    {
        cout << "argc[" << i << "]: " << argv[i] << endl;  // 0是文件名
    }
    return 0;
}*/


//#include <iostream>
//#include <fstream>
//#include <map>
//#include <string>
//#include <algorithm>
//using namespace std;
//
//int main(int argc, char *argv[])
//{
//    ifstream in(argv[1]);
//    if (!in)
//    {
//        cout << " error" << endl;
//        exit(1);
//    }
//    map<string, size_t> word_count;
//    string word;
//    while (in >> word) {
//        ++word_count[word];
//
//    }
//    for (const auto &w : word_count)
//        cout << w.first << "occur" << w.second << " ";
//    return 0;
//}


//#include <iostream>
//using namespace std;
//int   main(int   argc,   char*   argv[])
//  {
//  int   i;
//  for   (i   =   0;   i<argc;   i++)
//  cout<<argv[i]<<endl;
//  cin>>i;
//  return   0;
//  }

#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;
int main()
{
    srand( (unsigned)time( NULL ) );
    for (int i = 0; i <100;++i)
        cout << (rand() % 10) * 0.1 << endl;
    return 0;
}
