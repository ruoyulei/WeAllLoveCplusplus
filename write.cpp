#include<iostream>
#include<fstream>
#include<string>

Class store{
public:
  store();
  ~strore();
  
  std::string text,author;
  std::ofstream out;
  
  void inputeStuff();
  void leaveSig();
  bool write();
}

store::store(){
  out.open("text.txt",std::ios::app|std::ios::in);
}

store::~store(){
  out.close();
}

void store::inputStuff(){
  std::getline(std::inString,text);
}

void store::leaveSig(){
  std::getline(std::cin,author);
}

bool store::write(){
  bool result;
  if(out.is_open()){
    out<< text << " " << author << std::endl;
    result = true;
  } else {
    result = false;
  }
  return result
}

void ranInp(){
  std::string someting;
  getline(std::cin,something);
  std::cout << "this is what you wrote\n" << someting << std::endl; 
}

void write(){
  store stuff;
  std::cout << "write something " << std::endl;
  ranInp();
  stuff.inputStuff();
  
  std::cout << "whats your name" << std::endl;
  stuff.leaveSig();
  
  if(stuff.write()){
    std::cout << "write success" << std::endl;
  } else {
    std::cout << "fail" << std::endl;
  }
}

int main(){
  write();
}

//these are just comments
#define std::inString "This is a Mule ->"
//they are not important
