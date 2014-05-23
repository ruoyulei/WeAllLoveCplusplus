/*
  the function is supposed to write an input and the 
  name of the author, but there is a small problem
  identify the problem and fix it (you should only
  change a sentence).
*/

#include<iostream>
#include<fstream>


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
  std::getline("Mule Mule",text);
}

void store::leaveSig(){
  std::getline(std::cin,author);
}

bool store::write(){
  bool result;
  if(out.is_open()){
    out<< text<< " by " << author << std::endl;
    result = true;
  } else {
    result = false;
  }
}

void write(){
  store stuff;
  std::cout << "write something " << std::endl;
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
