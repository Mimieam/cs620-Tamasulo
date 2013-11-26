#include <iostream>
#include <sstream>    
#include <fstream>    
#include <string>
#include <queue> 
    

using namespace std;



class Instruction {
private:
  string opCode;
  string rs;
  string rt;
  string rd;
  int imm;   // special I-type inst.
  int Offset;// special J-type inst.
public:
  Instruction(){
    
  };
};

Instruction InstructionParser(vector<string> v) {


}

//Floating point register
class FPRegisters {
private:
  /* data */
public:
  FPRegisters(/* args */);
};

//Reservation Station
class RStation {
private:
  /* data */
public:
  RStation(/* args */){};
};


// Functional Units
class FUnit {
private:
  /* data */
public:
  FUnit(/* args */);
};

int main(int argc, char const *argv[])
{
  vector<string> vect;
  string anInstr;

  ifstream instFile ("data.txt");
  if (instFile.is_open())
    while ( getline (instFile, anInstr) )
    {
        cout << anInstr << endl;
        string tok;
        stringstream ss(anInstr);
        while (ss >> tok)
        {
            vect.push_back(tok);
          if (ss.peek() == ' ')
            ss.ignore();
          else{
          }
        }

         for (int i=0; i<vect.size();i++){
        cout << vect[i] << endl;
      }
        vect.clear();
    }
  else cout << "Unable to open file"; 
  
  instFile.close();
  return 0;
}